import random
from json import loads
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
  # push to tail of the queue (left of the list)
  db.lpush(config.redis_queue_name, message)


def redis_queue_pop(db):
  # pop from head of the queue (right of the list)
  # The 'b' in 'bror' indicates this is a blocking call (waits until an item becomes available)
  _, message_json = db.brpop(config.redis_queue_name )
  return message_json

def process_message(db, message_json: str):
  message = loads(message_json)
  print(f"Message received: id={message['id']}, message_number={message['data']['message_number']}")

  # mimic potential processing errors
  processed_ok = random.choices((True, False), weights=(5, 1), k=1)[0]
  if processed_ok:
    print(f"\tProcessed successfully")
  else:
    print(f"\tProcessing failed - requeuing...")
    redis_queue_push(db, message_json)

def main():
 #Consumes items from the Redis queue

  # connect to Redis
  db = redis_db()
  print("Worker: on")
  while True:
    message_json = redis_queue_pop(db)
    process_message(db, message_json)

if  __name__ == "__main__":
  main()