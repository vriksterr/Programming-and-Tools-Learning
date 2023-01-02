import mysql.connector  #if this dosent work install-> pip install mysql-connector

db= mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="123456"
    #database="your database name"  #use this if your already have a database created in your program
)

database_cursor = db.cursor()   # your dont need to do this its just so your can give your db some meaning/rememberable name

database_cursor.execute("CREATE DATABASE band")