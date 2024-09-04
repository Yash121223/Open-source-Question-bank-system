import pymysql as sql
from datetime import date
dte=date.today()
dte=str(dte)
conn=sql.connect(host="localhost",user="root",passwd="",database="mcq")
myCursor=conn.cursor()

def register(name,year,mobile,pswd):
    try:
        q1="insert into users(Name,Year, Mobile, Password) values('{}',{},{},{})".format(name,year,mobile,pswd)
        myCursor.execute(q1)
        conn.commit()
        q3="select User_num from users where Name='{}' and Mobile= {}".format(name,mobile)
        myCursor.execute(q3)
        s=myCursor.fetchall()
        use=s[0][0]
        q2="create table user{}(Attempt_num int primary key auto_increment, Date varchar(50),Marks int)".format(use)
        myCursor.execute(q2)
        print('''

                User is registered!
                Now login, to access the quiz!
                
                    
                Your username is {}'''.format(use))
        print()
    except:
        print("User not registered!! Server Error!")

def login(usern,pwd):
    try:
        q1="select User_num,Password from users where User_num={}".format(usern)
        myCursor.execute(q1)
        s=myCursor.fetchone()
        if(s):
            pd=s[1]
            un=s[0]
            if pd == pwd and un==usern:
                return True
            else:
                return False
        else:
            print("Invalid Username or Password! ")
            return False
    except:
        return False

def show(id):
    try:
        q1="Select * from user{}".format(id)
        myCursor.execute(q1)
        s=myCursor.fetchall()
        if (s):
            print("{:>20}{:>20}{:>20}".format("Attemp Number","Attempt Date","Marks Obtained"))
            for x in s:
                print("{:>20}{:>20}{:>20}".format(x[0],x[1],x[2]))
        else:
            print("Attempt your First Quiz!")
    except:
        print("Server Error!!")


def update_result(id,marks):
        success=False
        q2='select User_id from sample_board where User_id={}'.format(id)
        myCursor.execute(q2)
        s=myCursor.fetchone()
        if s!=None:
            q3='update sample_board set Marks={} where User_id ={}'.format(marks,id)
            myCursor.execute(q3)
            conn.commit()
        else:
            q3="select Name,Year from users where User_num={}".format(id)
            myCursor.execute(q3)
            s=myCursor.fetchone()
            q4="insert into sample_board(User_id,Name,Year,Marks,Date) values({},'{}','{}',{},'{}')".format(id,s[0],s[1],marks,dte)
            myCursor.execute(q4)
            conn.commit()
        q1="insert into user{}(Date,Marks) values('{}',{})".format(id,dte,marks)
        myCursor.execute(q1)
        conn.commit()
        success=True
        return success


def leaderboard():
    try:
        i=1
        q1="select * from sample_board order by Marks desc"
        myCursor.execute(q1)
        s=myCursor.fetchall()
        for x in s:
            print("{:>15}{:>15}{:>15}{:>15}{:>15}{:>15}".format(i,x[0],x[1],x[2],x[3],x[4]))
            i+=1
    except:
        print("Server Side Error!")

