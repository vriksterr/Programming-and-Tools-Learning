def makedatabse():
    import mysql.connector
    db=mysql.connector.connect(host='localhost', user='root', password='123456')
    cur = db.cursor()
    name_of_database=input("What name would like your database to have? ")


def addrec():
    import mysql.connector
    db=mysql.connector.connect(host='localhost', user='root', password='123456', database = 'student')
    cur = db.cursor()
    ch='y'
    while(ch=='y'):
        r=int(input('enter rollno'))
        name=input('enter name')
        per=float(input('enter percentage'))
        qry =('insert into s1 values(%s,%s,%s)')              
        data =(r,name,per)
        cur.execute(qry,data)
        db.commit()
        ch =input('want to add more records  y / n')
    db.close()
def disprec():
    try:
        import mysql.connector
        db=mysql.connector.connect(host='localhost', user='root', password='123456', database = 'student')
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
        db=mysql.connector.connect(host='localhost', user='root', password='123456', database = 'student')
        cur = db.cursor()
        srno=input('enter the rollno of the student')
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
        db=mysql.connector.connect(host='localhost', user='root', password='123456', database = 'student')
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
        db= mysql.connector.connect(host='localhost', user='root', password='123456', database = 'student')
        cur = db.cursor()
        srno=int(input('enter the rollno of the student to be deleted'))
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
    print('1.ADD RECORDS')
    print('2.DISPLAY RECORDS')
    print('3.SEARCH  RECORDS')
    print('4.UPDATE RECORDS')
    print('5. DELETE RECORDS')
    print('6.EXIT')
    print('7 Make Database')
    print('8 Make Table')
    option = int(input('Enter your option'))
    if(option == 1):
            addrec()
    elif(option == 2):
            disprec()
    elif(option == 3):
            searchrec()
    elif(option ==4):
            updaterec()
    elif(option == 5):
            delrec()	
    elif(option ==6):
            print('Exiting')
            break