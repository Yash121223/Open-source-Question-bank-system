#include<bits/stdc++.h>
using namespace std;
int marks=0,choice,ch,brea=0,aspi=1;
string candidate[50];
	int score[50];

// STUDENT CLASS
class student{
	string name;
	int roll_no;
	string branch;
	public:
		void set_profile(){
			marks=0;
			system("CLS");
			cout<<"\n\t\t\t\t\t******* QUIZ SYSTEM *******\n\n\n";
			cout<<"\t\t\t\t\t   SET YOUR PROFILE HERE "<<endl<<endl;
			cout<<"Enter name: ";
			getline(cin,name);
			cout<<"Enter branch: ";
			getline(cin,branch);
			cout<<"Enter roll number: ";
			cin>>roll_no;
		    while(getchar()!='\n');
		    cout<<"Profile set\n";
		}
		void show_profile(){
			system("CLS");
				cout<<name<<endl;
				cout<<branch<<endl;
				cout<<roll_no<<endl;
				cout<<"Marks obtained is: "<<marks<<endl;
			
	}
	void conduct_exam();
		friend void show_result(student*);
		friend void history(student*);
};


// FUNCTION TAKING ANSWERS
void take_ans(int m){
	cout<<endl<<"5.Skip\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice==m){
		cout<<"Correct ans\n";
		marks+=4;
	}else if(choice==5){
		cout<<"left\n";
		marks+=0;
	}else{
		cout<<"Wrong ans\n";
		marks-=1;
	}
	system("PAUSE");
}

// FUNCTION SHOWING WHO HAS TAKEN THE TEST
void history(student* p1){
	system("CLS");
	cout<<"\n\n\n\t\t\t**** HISTORY OF STUDENTS ATTEMPTED TEST ****\n\n\n\n";
	cout<<"S.no.    NAME      MARKS"<<endl;
	candidate[aspi-1]=p1->name;
	score[aspi-1]=marks;
	for(int i=0;i<aspi;i++){
		cout<<i+1<<".    "<<candidate[i]<<"       "<<score[i]<<endl;
	}
}

// FUNCTION THAT WILL START CONDUCTIONG EXAM
void student::conduct_exam(){
	marks=0;
	int i=1;
	while(i<26){
		switch(i){
			case 1:
				system("CLS");
				cout<<"q.1 Who invented OOPS?"<<endl;
				cout<<"1.Andrea Ferro\n2. Adele Goldberg\n3.Alan Kay\n4.Dennis Ritchie";
				take_ans(4);
				break;
			case 2:
				system("CLS");
				cout<<"q.2 Which of the following statements is correct?"<<endl;
				cout<<"1.Base class pointer cannot point to derived class.\n2. Derived class pointer cannot point to base class.\n3.Pointer to derived class cannot be created.\n4.Pointer to base class cannot be created.";
				take_ans(2);
				break;
			case 3:
				system("CLS");
				cout<<"q.3 Which of the following is not the member of class?"<<endl;
				cout<<"1.Static function\n2. Friend function\n3. Const function\n4.Virtual function";
				take_ans(2);
				break;
			case 4:
				system("CLS");
				cout<<"q.4 Which of the following type of class allows only one object of it to be created?"<<endl;
				cout<<"1.Virtual class\n2. Abstract class\n3.Singleton class\n4.Friend class";
				take_ans(3);
				break;
			case 5:
				system("CLS");
				cout<<"q.5 Which of the following concepts means determining at runtime what method to invoke?"<<endl;
				cout<<"1.Data hiding\n2. Dynamic Typing\n3.Dynamic binding\n4.Dynamic loading";
				take_ans(3);
				break;
			case 6:
				system("CLS");
				cout<<"q.6 Which of the following cannot be friend?"<<endl;
				cout<<"1.Function\n2.Class\n3.Object\n4.Operator function";
				take_ans(3);
				break;
			case 7:
				system("CLS");
				cout<<"q.7 cout is a/an..."<<endl;
				cout<<"1.operator\n2. function\n3.object\n4.macro";
				take_ans(3);
				break;
			case 8:
				system("CLS");
				cout<<"q.8 Which of the following operator is overloaded for object cout?"<<endl;
				cout<<"1.>>\n2.<<\n3.+\n4.=";
				take_ans(2);
				break;
			case 9:
				system("CLS");
				cout<<"q.9 Which of the following is not a type of inheritance?"<<endl;
				cout<<"1.Multiple\n2. Multilevel\n3.Distributive\n4.Hierarchical";
				take_ans(3);
				break;
			case 10:
				system("CLS");
				cout<<"q.10 Which of the following operators cannot be overloaded?"<<endl;
				cout<<"1.[]\n2.->\n3.?:\n4.*";
				take_ans(3);
				break;
			case 11:
				system("CLS");
				cout<<"q.11 Which of the following header file includes definition of cin and cout?"<<endl;
				cout<<"1.istream.h\n2.ostream.h\n3.iomanip.h\n4.iostream.h";
				take_ans(4);
				break;
			case 12:
				system("CLS");
				cout<<"q.12 Who invented OOPS?"<<endl;
				cout<<"1.Andrea Ferro\n2. Adele Goldberg\n3.Alan Kay\n4.Dennis Ritchie";
				take_ans(4);
				break;
			case 13:
				system ("CLS");
                cout<<"q.12 Which was the first purely object oriented programming language developed"<<endl;
                cout<<"1.Kotlin\n2. Small Talk\n3. Java\n4. C++";
                take_ans(2);
                break;

			case 14:
				system("CLS");
                cout<<" When did the oop concept first came into picture"<<endl;
                cout<<"1. 1980's\n2. 1995\n3. 1970's\n4. 1993";
                take_ans(3);
                break;

			case 15:
				system("CLS");
                cout<<" Which feature of oop indicates reusability"<<endl;
                cout<<"1. Abstraction\n2. Polymorphism\n3. Encapsulation\n4. Inheritance";
                take_ans(4);
                break;

			case 16:
				system("CLS");
                cout<<" Which header file is required in C++ to use oop?"<<endl;
                cout<<"1. OOP can be used without using any header file.\n2. Stdlib.h\n3. Iostream.h\n4. Stdio.h";
                take_ans(1);
                break;

			case 17:
				system("CLS");
                cout<<"Which of the following does not come under the concept of OOP?"<<endl;
                cout<<"1. Data hiding\ n2. Message Passing\n3. Platform independent\n4. Data binding";
                take_ans(3);
                break;

			case 18:
				system("CLS");
                cout<<" The feature by which one object can interact  with another object is"<<endl;
                cout<<"1. Message reading\n2. Message passing\n3. Data Transfer\n4. Data Binding";
                take_ans(2);
                break;

			case 19:
				system("CLS");
                cout<<" How many type of access specifiers are there in OOPs?"<<endl;
                cout<<"1. 4\n2. 3\n3. 2\n4. 1";
                take_ans(2);
                break;

			case 20:
				system("CLS");
                cout<<"Which among the following can show polymorphism?"<<endl;
                cout<<"1. Overloading &&\n2. Overloading <<\n3. Overloading||\n4. Overloading +=";
                take_ans(2);
                break;

			case 21:
				system("CLS");
                cout<<" In the worst case, the number of comparisons needed to search a singly linked list of length n for a given element is?"<<endl;
                cout<<"1. Log2n\n2.  n/2\n3. Log2n-1\n4. n";
                take_ans(4);
                break;

			case 22:
				system("CLS");
                cout<<" Who is the best teacher"<<endl;
                cout<<"1. Mir sir.\n2. Shahanawaz sir\n3. Ahmad sir \n4 All of the above";
                take_ans(4);
                break;

			case 23:
			system("CLS");
            cout<<"How many marks are we getting?"<<endl;
            cout<<"1. 20\n2. a\n3. Both a and b\n4. All of the above";
            take_ans(4);
            break;

			case 24:
				system("CLS");
                cout<<"Which of the following is a structured programming language"<<endl;
                cout<<"1. Java\n2. C\n3. English\ n4.Hindi";
                take_ans(1);
                break;
                
			case 25:
				system("CLS");
                cout<<"Which of the following operators are by default overloaded?"<<endl;
                cout<<"1. Assignment\n2. Subscript\n3. Function call\n4. Member selection";
                take_ans(1);
                break;

		
		}
		i++;
	}
	brea++;
}

// GENERAL CLASS WITH FUNCTIONS LIKE INSTRUCTIONS AND DETAILS
class in_general{
	public:
		void welcome(){
	cout<<"\n\n\t\t\t\t*****WELCOME TO DAILY QUIZ CONTEST*****"<<endl;
	cout<<endl<<endl<<"BELOW ARE FEW OPTIONS YOU CAN ACCESS: "<<endl;
	cout<<"1.VIEW PROFILE\n";
	cout<<"2.QUIZ DETAILS\n";
	cout<<"3.QUIZ INSTRUCTIONS\n";
	cout<<"4. ATTEMPT QUIZ\n";
	cout<<"5. SHOW RESULT\n";
	cout<<"6. HISTORY\n";
	cout<<"7. LOG OUT\n";
	cout<<"Enter choice for the function: ";
   }
   void quiz_instructions(){
   	system("CLS");
	cout<<"\n\n\t\t\t##GENERAL INSTRUCTIONS##\n\n";
	cout<<"	This quiz consists of total 25 MCQ's.\n\n\tIn MCQ you will be given 4 options out of which only one option will be correct.\n\n	MARKING SCHEME:\n";
	cout<<endl<<"\t-> +4 for correct answer.\n\n\t-> -1 for wrong answer.\n\n\t 0 for not attempting.\n\n";
	cout<<"	Read the above instructions carefully and then attempt the quiz.\n"<<endl;
	cout<<"\t\t****ENTERING ANY OTHER CHOICE THEN MENTIONED WILL RESULT IN -1****"<<endl;
	cout<<"\n\n\t\t**ALL THE BEST**\n";
    }
    void quiz_details(){
    	system("CLS");
	cout<<"\n\nThis quiz is been created as a skill based mini project of the subject OBJECT ORIENTED PROGRAMMING\n given to us by our fellow teacher.\n\t\t\tThe topic of quiz is: \n\t\t\tOOPS AND DSA BASIC KNOWLEDGE\n\t\t\tREFERENCES FOR QUSTIONS: \n\t\t\t****geeksforgeeks.com****"<<endl;
    }
   
};

// SHOW RESULT FUNCTION
void show_result(student* p1){
	if(brea==0){
		cout<<"No recent test taken\n";
	}else{
		system("CLS");
	cout<<"******QUIZ SIMULATION******"<<endl;
	cout<<"Name of student is: "<<p1->name<<endl;
	cout<<"Name of branch is: "<<p1->branch<<endl;
    cout<<"Your marks are: "<<marks<<endl;
	if(marks<69){
		cout<<"Sorry! you failed the test\nBetter luck next time\n";
	}else{
		cout<<"Congrats!!, you passed the test\n";
	}
	}
}

// FUNCTION TO LOG OUT
void log_out(){
	cout<<"Thanks for using our system. \n";
	system("PAUSE");
	aspi++;
}

// MAIN FUNCTION
int main(){
	student p1;
	in_general g1;
a:	p1.set_profile();
	b:g1.welcome();
	 cin>>ch;
	 while(getchar()!='\n');
	switch(ch){
		case 1:
			p1.show_profile();
			break;
		case 2:
			g1.quiz_details();
			break;
		case 3:
			g1.quiz_instructions();
			break;
		case 4:
			g1.quiz_instructions();
			cout<<endl<<"Are you ready to start the quiz(1 for yes and 2 for no): ";
			cin>>ch;
			if(ch==1){
			        p1.conduct_exam();
				cout<<endl<<"You can check your result from main menu\n";
			}else{
				cout<<"Have a nice time\n";
				break;
			}
			break;
		case 5:
			show_result(&p1);
			break;
		case 6:
			history(&p1);
			break;
		case 7:
			log_out();
			goto a;
			break;
		default:
			cout<<"Invalid output\n";
			break;
	}
	cout<<"Enter 1 to go to main menu: ";
	cin>>ch;
	if(ch)
	goto b;
	return 0;
}
