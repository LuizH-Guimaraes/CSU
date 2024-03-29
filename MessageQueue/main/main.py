import random
from datetime import datetime 
from json import dumps 
from time import sleep 
from uuid import uuid4
import redis
import config

def redis_db():
  db = redis.Redis(
    host=config.redis_host,
    port=config. redis_port, 
    db=config. redis_db_number,
    # password=config.redis_password,
    decode_responses=True,
  )
    
  #Check if the database is running
  db.ping()

  return db

def redis_queue_push(db, message):
  # Push to the tail of the queue (left of the list)
  db.lpush(config. redis_queue_name, message)


def main(num_messages: int, delay: float = 1):
  #Generates num messages and pushes them to a Redis queue :param num_messages:

  # connect to Redis
  db = redis_db()
  for i in range(num_messages):
    # Create message data
    message = {
      "id": str(uuid4()),
      "ts": datetime.utcnow(). isoformat(),
      "data": {
        "message_number": i,
        "x": random.randrange(0, 100),
        "y": random.randrange(0, 100)
      }
    }

    #Create a json file with the message so we can store on redis
    message_json = dumps(message)

    #Push message to redis queue
    print(f"Sending message {i+1} ( id={message['id']})")
    redis_queue_push(db, message_json)

  # wait a bit so we have time to start up workers and see how things interact
  sleep(delay)


if  __name__ == "__main__":
  main(100000, 0.1)