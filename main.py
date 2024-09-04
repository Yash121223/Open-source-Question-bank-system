import mainsql as sql1
import question_bank as qb
class new_user:
    __name=""
    __year=0
    __mobile=0
    __pswd=0
    def register_user(self):
       self.__name=input('Enter your name: ')
       self.__year=int(input("Enter your year: "))
       self.__mobile=int(input("Enter your mobile num: "))
       self.__pswd=int(input("Enter password in numbers: "))
       sql1.register(self.__name,self.__year,self.__mobile,self.__pswd)


class existing_user:
    __usernum=0
    __pwd=0
    def login_user(self):
        self.__usernum=int(input('Enter your username: '))
        self.__pwd=int(input("Enter your password: "))
        res=sql1.login(self.__usernum,self.__pwd)
        if res:
            global id 
            id=self.__usernum
            return id
        else:
            return 0
    def show_history(self):
        sql1.show(id)

def instructions():
    print('''
                                      ## GENERAL INSTRUCTIONS ##
            
            1.This quiz consists of total 10 MCQ's.
            2.In MCQ you will be given 4 options out of which only one option will be correct.
            3.Marking Scheme:
                
                -> +4 For Correct Answer
                -> -1 For Wrong Answer
                -> 0 For Not Attempting
                -> Any Other Choice Will Result in -1 

            4.Good news! There is no time limit
            5.BEWARE ONCE QUIZ IS STARTED THERE IS NO COMING BACK!!!


    ''')

def take_quiz(id):
    instructions()
    marks=0
    choice=int(input('''Do you want to continue  for quiz(1) or leave(0): '''))
    if choice==1:
        i=0
        t=len(qb.lst)
        for i in range(t):
            print('''

        Q{}. {}
        Option 1. {}
        Option 2. {}
        Option 3. {}
        Option 4. {}
        Option 5. Skip

            '''.format(i+1,qb.lst[i]["Question"],qb.lst[i]["Option1"],qb.lst[i]["Option2"],qb.lst[i]["Option3"],qb.lst[i]["Option4"]))
            ans=int(input("Choose your answer: "))
            if ans==qb.lst[i]["Answer"]:
                marks+=4
            elif ans==5:
                marks+=0
            else:
                marks-=1
            i+=1
        res=sql1.update_result(id,marks)
        if res:
            print('''
            Your Quiz is completed! Marks Obtained are: {}
            Your marks are updated in the history and leaderboard also!!
            '''.format(marks))

def show_leaderboard():
    print('''

                            ******LEADERBOARD******


    ''')
    print("{:>15}{:>15}{:>15}{:>15}{:>15}{:>15}".format("Rank","User_Id","Name","Year","Marks","Date"))
    print()
    sql1.leaderboard()


print('''

Welcome to the Quiz Portal 
1.Register
2.Login

''')
ch=int(input("Enter your choice: "))

if ch==1:
    u1=new_user()
    u1.register_user()
elif ch==2:
    u1=existing_user()
    ree=u1.login_user()
    if ree!=0:
        t=True
        print(ree)
        while t:
            print('''
    
                        ******Welcome to the Quizing Section******
        1.Show History
        2.Instructions
        3.Quiz
        4.Leaderboard
        5.Exit
        
    ''')
            cho=int(input("Enter your choice: "))
            if cho==1:
                u1.show_history()
            elif cho==2:
                instructions()
            elif cho==3:
                take_quiz(ree)
            elif cho==4:
                show_leaderboard()
            elif cho==5:
                t=False
            else:
                print("Wrong choice!")
else:
    print("Wrong choice! ")



user1=existing_user()
r=user1.login_user()
s1=new_user()
s1.register_user()

    
