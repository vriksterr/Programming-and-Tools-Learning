from getpass import getpass
import time
import mysql.connector
print("Please setup your Server Detail before using it")
#webaddress = input("What is the server ip? ")
#username = input("What is your login username? ")
#login_passwd = getpass("What is your login password? ")
#database_name= 'student'

webaddress = 'localhost'
username = 'root'
login_passwd = '123456'
database_name= 'student'

#Funtion to tell what all databases are available 
def available_databases():
    db= mysql.connector.connect(host=webaddress, user=username, passwd=login_passwd)
    database_cursor = db.cursor()
    database_cursor.execute("SHOW DATABASES")
    for x in database_cursor:
        print(x)
    print('⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️')
    time.sleep(5)

#FUnction to make the Database and Table
def makedatabse():
    
    db= mysql.connector.connect(host=webaddress, user=username, passwd=login_passwd)
    database_cursor = db.cursor()
    print(" Wait Initializing server... ")
    time.sleep(3)
    database_cursor.execute("CREATE DATABASE IF NOT EXISTS student")
    database_cursor.execute("USE student")
    database_cursor.execute("CREATE TABLE IF NOT EXISTS s1(r INT,name varchar(255),pre FLOAT)")
    print('⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️')

#Function to Delete the Databse and Table
def resetdatabase():
    db= mysql.connector.connect(host=webaddress, user=username, passwd=login_passwd)
    database_cursor = db.cursor()
    print(" Wait Resetting server... ")
    time.sleep(3)
    database_cursor.execute("DROP DATABASE IF EXISTS student")

#Function to add data to table
def addrec():
    db=mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
    cur = db.cursor()
    ch='y'
    while(ch=='y'):
        r=int(input('enter rollno= '))
        name=input('enter name= ')
        per=float(input('enter percentage= '))
        qry =('insert into s1 values(%s,%s,%s)')              
        data =(r,name,per)
        cur.execute(qry,data)
        db.commit()
        ch =input('want to add more records  y / n = ')
    db.close()

#Function to Display the Table
def disprec():
    try:
        db=mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
        cur = db.cursor()
        cur.execute('select * from s1')
        result =cur.fetchall( )
        for x in result:
            print(x)
        print('⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️')
        time.sleep(5)
    except :
        print('error')
    db.close()

#Function to Search
def searchrec( ):
    try:
        db=mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
        cur = db.cursor()
        srno=input('enter the rollno of the student= ')
        qur=('select * from s1 where r= %s')
        data=(srno,)
        cur.execute(qur,data)
        result=cur.fetchall()
        for x in result:
            print(x)
    except:
        print ('Error')
    db.close()

#Function to update
def updaterec( ):
    try:
        db=mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
        cur = db.cursor()
        srno=int(input('enter the rollno of the student for updation= '))
        updated_name=input('enter new name= ')
        updated_percentage=input('enter new percentage= ')
        cur.execute("UPDATE s1 SET name = %s,pre=%s WHERE r=%s",(updated_name,updated_percentage,srno))
        db.commit()
        #print("!! Data has been Updated !!")
    except:
        print ('Error')
    db.close()

#Function To Delete
def delrec( ):
    try:
        db= mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
        cur = db.cursor()
        srno=int(input('enter the rollno of the student to be deleted= '))
        qur=('delete from s1 where r = %s')
        d3=(srno,)
        cur.execute(qur,d3)
        db.commit()
        cur.close()
    except:
        print ('Error')
    db.close()

option=0
while(option !=9):
    print('===================')
    print('+++++MAIN MENU+++++')
    print('===================')
    print('1.Show all Databases')
    print('2.Make Server')
    print('3.Reset Server')
    print('4.ADD RECORDS')
    print('5.DISPLAY RECORDS')
    print('6.SEARCH  RECORDS')
    print('7.UPDATE RECORDS')
    print('8.DELETE RECORDS')
    print('9.EXIT')

    option = int(input('Enter your option = '))
    print('⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️')
    if(option == 1):
        available_databases()
    elif(option == 2):
        makedatabse()
    elif(option == 3):
        resetdatabase()
    elif(option == 4):
        addrec()
    elif(option == 5):
        disprec()
    elif(option == 6):
        searchrec()
    elif(option == 7):
        updaterec()
    elif(option == 8):
        delrec()
    elif(option == 9):
        print('Exiting')
        break