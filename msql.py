import mysql.connecter as SQLC
DataBase =SQLC.connect(
    host="localhost",
    user="root",
    password="@Mark1409"
)
Cursor=Database.cursor()
Cursor.execute("CREATE DATABASE College")
print("College Database is created")