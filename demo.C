#include<stdio.h>
char Uname[50],passsword[50],name[50];  // Declared globally because we want to store the registration details
int PQ[100];  // Our priority Queue.
void Register()  //for students
{
    printf("Enter your Username: ");
    gets(Uname);
    printf("\nEnter your passsword: ");
    gets(passsword);
    printf("Enter your name: ");
    gets(name);
}
void loginT()   //for teachers (Login for all the subject teachers is common and its fixed.)
{
	char User[50],pass[50],count=0;
	do{
	  printf("Username: ");
	  gets(User);
	  printf("\nPassword: ");
	  gets(pass);
	  if(User=="Teach123"&&pass=="Batmansucks")  // Login details are fixed. We can change.
	  	Teacher();
	  else
	  	printf("Invalid Username or password\n");  //Calling teacher function on sucessful login.
	  count++;
	}while(count<=3);   // Only 3 attempts allowed.
	printf("You have been blocked.\n");
}
void loginS()   //for student (Currently therer is only one student login.)
{
	char User[50],pass[50],count=0;
	do{
	  printf("Username: ");
	  gets(User);
	  printf("\nPassword: ");
	  gets(pass);
	  if(User==Uname&&pass==password)
	  	Student();
	  else
	  	printf("Invalid Username or password\n");  //Calling teacher function on sucessful login.
	  count++;
	}while(count<=3);
	printf("You have been blocked.\n");
}
void Teacher()
{
	int ch,an;  //ch= choice, an=assignment number
	char dd;    // The date of submission
	printf("\t\tWelcome Teacher\t\t");
	printf("\n\nPlease select your Subject.\n1.OS 2.CG 3.AOA 4.COA 5.AM 6.Python");
	scanf("%d",&ch);
    printf("\nPlease enter the assignment number: ");
    scanf("%d",&an);
    printf("\nPlease enter the deadline for submission (date format: DD-MM-YYYY): ");
    gets(dd);   // We need to write a separate function to separate the DD,MM and YYYY.
    Enqueue(ch,an,dd);
}
void Student()
{
	int sc;
    printf("\t\tWelcome %s\t\t",name);
    do{
    printf("What do you want to do?\n1.Display assignments  2.Change the priority order 3.Logout\n----->");
    scanf("%d",&sc);
    if(sc==1)
    	Disp();
    else if(sc==2)
    	ChangeP();
    else if(sc==3)
    	loginS();     // We can replace this by exit to quit form the program
    else
    	prinf("\nInvalid choise.");
     }while(true);
}
void Enqueue()
{
	/*We need to complete this funtion*/
}
void Disp()
{
	// Pending. We just need to display the PQ[]
}
void ChangeP()
{
	/*We change the priority order and then rearrange the subjects according to the students
	subject preference and the date of submission*/
}
void Dateseparate
{
	/* we need to separate the date into date,month and year. This will be used to set the priority in the PQ[]*/
}
// Thats it. if something else is missing, plz add it

