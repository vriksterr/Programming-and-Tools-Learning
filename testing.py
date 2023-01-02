from getpass import getpass
print("Please setup your Server Detail before using it")
webaddress = input("What is the server ip? ")
username = input("What is your login username? ")
login_passwd = getpass("What is your login password? ")
database_name= 'student'

def makedatabse():
    import mysql.connector
    import time
    db= mysql.connector.connect(
        host="localhost",
        user="root",
        passwd="123456"
        
    )
    database_cursor = db.cursor()
    print(" Wait Initializing server... ")
    time.sleep(3)
    database_cursor.execute("DROP DATABASE student")
    database_cursor.execute("CREATE DATABASE student")
    database_cursor.execute("USE student")
    database_cursor.execute("create table s1(r INT,name varchar(255),pre FLOAT(4,2))")

def resetdatabase():
    import mysql.connector
    import time
    db= mysql.connector.connect(
        host="localhost",
        user="root",
        passwd="123456"
    )
    database_cursor = db.cursor()
    print(" Wait Resetting server... ")
    time.sleep(3)
    database_cursor.execute("DROP DATABASE student")

def addrec():
    import mysql.connector
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
def disprec():
    try:
        import mysql.connector
        db=mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
        cur = db.cursor()
        cur.execute('select * from s1')
        result =cur.fetchall( )
        for x in result:
            print(x)
    except :
        print('error')
    db.close()
def searchrec( ):
    try:
        import mysql.connector
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

def updaterec( ):
    try:
        import mysql.connector
        db=mysql.connector.connect(host=webaddress, user=username, password=login_passwd, database = database_name)
        cur = db.cursor()
        srno=int(input('enter the rollno of the student for updation= '))
        updated_name=input('enter new name= ')
        updated_percentage=input('enter new percentage= ')
        cur.execute("UPDATE s1 SET name = %s,pre=%s WHERE r=%s",(updated_name,updated_percentage,srno))
        db.commit()
        print("!! Data has been Updated !!")
    except:
        print ('Error')
    db.close()

def delrec( ):
    try:
        import mysql.connector
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
while(option !=6):
    print(' MAIN MENU')
    print('1.Make Server')
    print('2.Reset Server')
    print('3.ADD RECORDS')
    print('4.DISPLAY RECORDS')
    print('5.SEARCH  RECORDS')
    print('6.UPDATE RECORDS')
    print('7.DELETE RECORDS')
    print('8.EXIT')

    option = int(input('Enter your option = '))
    if(option == 1):
            makedatabse()
    elif(option == 2):
            resetdatabase()
    elif(option == 3):
            addrec()
    elif(option == 4):
            disprec()
    elif(option == 5):
            searchrec()
    elif(option ==6):
            updaterec()
    elif(option == 7):
            delrec()
    elif(option ==8):
            print('Exiting')
            break