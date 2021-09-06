#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
//#include<graphics.h>
#include<fstream.h>
#include<ctype.h>
#include<iomanip.h>
#include<math.h>

class bank
{
  protected:
  int accno;
  char nm[80];
  int bal;
  char type;
  //int cnt;
 public:

  void createacc(int);  //function to create an account
  void disp();   //function to show acc info
  void modify();        //function to modify acc info
  void depo(int);       //function to deposit amount to account
  void widr(int);      //function to widraw amount
  void rep();       //function to show data format
  int retacno();       //function to return account number
  int retbal();    //function to return balance amount
  char rettype();      //function to return type of account
  void setName(char []);
};


class loan:public bank
{
   private:
	   int loanNo;
	float loanAmount;
	int timePeriod;
	float interestRate;
	int status;
 public:

	void loanDetails(int cnt);
	void displayLoan();
	void approveLoan();

};

class fd:public bank
{
	private:
		int month;
		float amt;
	public:
		void FDData();
		void FDDetail();
};
void fd::FDData()
{
	fstream inFile;
	inFile.open("loan.txt",ios::binary|ios::in|ios::out);

	int acc,lNo,lStatus,flag=0;
	fd b;
	char ans;
	cout<<"Enter Account Number: ";
	cin>>acc;

	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(loan)))
	{
	 //cout<<"\nb.retacno() "<<b.retacno();
		if(b.retacno()==acc)
		{
		 cout<<"\n********************Loan details**************"<<endl;
//		 cout<<"Account Number: "<<b.<<endl;
		 cout<<"FD amount: "<<b.amt<<endl;
		 cout<<"Duration(in Months): "<<b.month<<endl;
		   //		int pos=(-1)* sizeof(b);
		     //		inFile.seekp(pos,ios::cur);
		       //		inFile.write((char *) &b, sizeof(fd));
			 //	cout<<"\n\n\t Record Updated";


		 flag=1;
		 break;
		}
	}

	if(flag==0)
		cout<<"\n\nAccount number does not exist";

inFile.close();
cout<<"After function";

}
void fd::FDDetail()
{

  ifstream inFile;
  int an,flag=0;
	inFile.open("banks.txt",ios::binary);
	fd b;
	cout<<"Please Enter Your Account Number: ";
	 cin>>an;
	 cout<<endl;

	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(bank)))
	{
		if(b.retacno()==an)
		{
			b.disp ();
			flag=1;
		}
	}
	inFile.close();
	if(flag==0)
		cout<<"\n\nAccount number does not exist";
	else
	{
		 float an,amt,fa,ir,ts;
		 int flaggy;
		 flaggy=1;
 fa=amt*(pow(	(1+(ir/12)),(ts)));
 cout<<"Plans Available for your FD are as follows(Compunded Monthly):"<<endl;
 cout<<"Sr.No.    Time Period                         : Minimum Amount :  Interest Rate"<<endl;
 cout<<"1.        Less Than 3 Months                  : Rs.30,000      : 7   %"<<endl;
 cout<<"2.        More Than 3 Months                  : Rs.45,000      : 8   %"<<endl;
 cout<<"3.        More Than 6 Months                  : Rs.70,000      : 9   %"<<endl;
 cout<<"4.        More Than 1 Year                    : Rs.85,000      : 9.5 %"<<endl;
 cout<<"5.        More Than 1.5 Years                 : Rs.1,00,000    : 10  %"<<endl;
 cout<<"6.        More Than 2 Years                   : Rs.1,15,000    : 12  %"<<endl;
 cout<<"7.        More Than 3 Years                   : Rs.1,25,000    : 13  %"<<endl;
 cout<<"8.        More Than 5 Years                   : Rs.1,50,000    : 15  %"<<endl<<endl<<endl;

 cout<<"Please Enter the Months for which you want to Invest: ";
 cin>>b.month;
 cout<<endl;
 cout<<"Please Enter the Amount for which you want to create FD: ";
 cin>>b.amt;
 cout<<endl;
 //getch();
 cout<<"Please Wait.....Verifying"<<endl;
 //getch();
 if(ts<3)
 {
   if(amt<30000)
	 {
	   cout<<"This Time Period is not Available for this amount"<<endl;
       flaggy=0;
	 }
   else
	 {
	   	ir=7;
		flaggy=1;
	 }
  }
 else if(ts>=3 && ts<6)
 {
  if(amt<45000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=8;
   flaggy=1;
  }
 }
 else if(ts>=6 && ts<12)
 {
  if(amt<70000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=9;
   flaggy=1;
  }
 }
 else if(ts>=12 && ts<18)
 {
  if(amt<85000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=9.5;
   flaggy=1;
  }
 }
 else if(ts>=18 && ts<24)
 {
  if(amt<100000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=10;
   flaggy=1;
  }
 }
 else if(ts>=24 && ts<36)
 {
  if(amt<115000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=12;
   flaggy=1;
  }
 }
 else if(ts>=36 && ts<60)
 {
  if(amt<125000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=13;
   flaggy=1;
  }
 }
 else if(ts>=60)
 {
  if(amt<150000)
  {
    cout<<"This is not a valid Amount for this time Period"<<endl;
	flaggy=0;
  }
  else
  {
   ir=15;
   flaggy=1;
  }
 }
 if(flaggy==1)
{
  cout<<"On Completion of Scheme you will get: ";
  cout.setf(ios::floatfield,ios::scientific);
  cout<<setprecision(50)<<fa;
  ofstream outFile;
	    outFile.open("fd.txt",ios::binary|ios::app);
	    outFile.write((char *)&b, sizeof(fd));
	    outFile.close();
}


	}
}

void loan::loanDetails(int cnt)
{
	//cout<<"\nSorry!!! But this Feature is unavailable. Kindly Update"<<endl;
	loan b;
	int acc;
	cout<<"Enter Account Number: ";
	cin>>acc;
	int flag=0;
	ifstream inFile;
	inFile.open("banks.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(bank)))
	{
		if(b.retacno()==acc)
		{
			b.disp ();
			flag=1;
		}
	}
	inFile.close();
	if(flag==0)
		cout<<"\n\nAccount number does not exist";
	else
	{
	    b.accno=acc;
	    cout<<"Enter Loan Amount you Require: ";
	    cin>>b.loanAmount;
	    cout<<"\nEnter Duration(of Months in which you would repay Loan): ";
	    cin>>b.timePeriod;
		b.status=0;
		b.loanNo=cnt;

	    ofstream outFile;
	    outFile.open("loan.txt",ios::binary|ios::app);
	    outFile.write((char *)&b, sizeof(loan));
	    outFile.close();



	}

   }
void loan::approveLoan()
{
	fstream inFile;
	inFile.open("loan.txt",ios::binary|ios::in|ios::out);

	int acc,lNo,lStatus,flag=0;
	loan b;
	char ans;
	 cout<<"Enter Account Number: ";
	 cin>>acc;

	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(loan)))
	{
		//cout<<"\nb.retacno() "<<b.retacno();
		if(b.retacno()==acc)
		{
		 cout<<"\n\n\n********************Your LOAN Info**************"<<endl;
		 cout<<"\nLoan No\t\t"<<b.loanNo<<endl;
		 cout<<"\nLoan amount\t\t"<<b.loanAmount<<endl;
		 cout<<"\nLoan Duration\t\t"<<b.timePeriod<<endl;
		 cout<<"\nLoan Status\t\t"<<b.status;
		 cout<<"\nDo you want to change the loan status(y/n)?";

			cin>>ans;
			if(ans=='y' || ans=='Y')
			{
				cout<<"Please enter the loan status(1->Approve/0->Reject/Pending)";
				cin>>lStatus;
				b.status=lStatus;
				int pos=(-1)* sizeof(b);
				inFile.seekp(pos,ios::cur);
				inFile.write((char *) &b, sizeof(loan));
				cout<<"\n\n\t Loan Info Updated";
			}

		 flag=1;
		}
	}

	if(flag==0)
		cout<<"\n\nAccount number does not exist";

 inFile.close();

}
void loan::displayLoan()
{
	loan b;
	int flag=0;
	ifstream inFile;
	inFile.open("loan.txt",ios::in|ios::binary);
	int acc;
	cout<<"Enter Account Number: ";
	cin>>acc;

	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(loan)))
	{
		if(b.retacno()==acc)
		{
		 cout<<"\n********************Loan details**************"<<endl;
		 cout<<"Loan Amount: "<<b.loanAmount<<endl;
		 cout<<"Loan Duration: "<<b.timePeriod<<endl;
		 cout<<"Loan Status: "<<b.status<<endl;
		 cout<<"Loan Status 1 -> Approved, 0 -> Rejected or Pending";
		 flag=1;
		}
	}
	inFile.close();
	if(flag==0)
	 cout<<"\n\nAccount number does not exist";

	getch();
}
int readFile()
{
	bank b;
	ifstream inFile;
  //int an,flag=0;
	inFile.open("banks.txt",ios::binary);

	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return -1;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(bank)))
	{

	}
       //	if(b==NULL)
	 //   cout<<"1979";d
	//else
	   if(b.retacno()<1979)
		return 1979;
	   else
		return b.retacno();
//	   cout<<"@@@Acc no"<<b.retacno();
}
void bank::createacc(int cnt)
{
  crac:
  cout<<endl;
  accno=readFile();
  //cout<<"Acc no "<<accno;
  cout<<" 1. Enter User's Name: ";
  gets(nm);
  cout<<" 2.Enter Type of The account (C/S) : ";
  cin>>type;
  cout<<" 3. Enter User's Balance(Minimum Rs.1000 for any type): ";
  cin>>bal;
  if(bal<1000)
  {
   cout<<"Please Follow Minimum Account Balance in  order to create Account"<<endl;
   goto crac;
  }
  type=toupper(type);
  cout<<endl;
  //accno=1979;
  accno++;
  //cnt=0;
  //cnt++;
  cout<<"Account created successfully!!! Your Account Number is: "<<accno;
  }

void bank::disp()
{
  cout<<"Account No. : "<<accno<<endl;
  cout<<"Account Holder Name : "<<nm<<endl;
  cout<<"Type of Account : "<<type<<endl;
  cout<<"Balance amount : "<<bal<<endl;
  getch();
}

void bank::depo(int dep)
{
  bal=bal+dep;
  if(dep<=0)
  {
    bal=bal-dep;
    cout<<"Sorry.....You have input a wrong value"<<endl;
  }
  cout<<"User's Account Balance is: "<<bal<<endl;
}


void bank::widr(int wid)
{
  if(wid>=bal-1000)
  {
    cout<<"Please Enter Value as per minimum acount balance rule. Pls contact Branch Manager if amount entred is big"<<endl;
  }
  else
  {
    bal=bal-wid;
    cout<<"Current Account Balance is: "<<bal<<endl;
  }
}

void bank::rep()
{
  cout<<accno<<setw(10)<<" || "<<nm<<setw(10)<<" || "<<type<<setw(6)<<" || "<<bal<<endl;
}

int bank::retacno()
{
	return accno;
}

int bank::retbal()
{
	return bal;
}

char bank::rettype()
{
	return type;
}

void bank::setName(char name[50])
{
    strcpy(nm,name);
}

void input_bin(int);	//function to write acc info in the binary file
void disp_u(int);	//function to display account details given by user
void del_acc(int);	//function to delete record of file
void mod_acc(int);
void disp_all();		//function to display all account details
void dep_wid(int, int); // function to desposit/withdraw amount for given account
void ms();	//introductory screen function
void top1();    //at top of all screens



void main()
{
 int ch;
 char pass[10];
 int ff=-1;
 int num,count=0,loanNo=2341;
 loan l;
 fd f;
 int utype;
 clrscr();
 ms();
 do
 {
  top1();
  cout<<"\n                              USER SELECTION PAGE";
  cout<<"\n                              -------------------"<<endl;
  cout<<"\n1. Admin";
  cout<<"\n2. Customer";
  cout<<"\n3. Exit";
  cout<<"\nPlease select your course of Action: ";
  cin>>utype;
  if(utype==1)
  {

	do{
		cout<<"\nEnter the Password: ";
		cin>>pass;
		// cout<<strcmp(pass,"admin");
		if(strcmp(pass,"admin")==0)
		  {
		   ff=1;
		  }
		  else
		  {
			cout<<"\nIncorrect Password !!! Please enter again";
			ff=0;
		  }

		}while(ff==0);

	do
	  {
		clrscr();
			top1();
		cout<<"\n                             ADMIN ACTION SELECTION";
		cout<<"\n                             ----------------------"<<endl;
		cout<<"\n\n\t01. Create New Account";
		cout<<"\n\n\t02. List of All Account Holders";
		cout<<"\n\n\t03. Close an Account";
		cout<<"\n\n\t04. Modify an Account";
		cout<<"\n\n\t05. Approve Loan Aplication";
		cout<<"\n\n\t06. All Loans";
		cout<<"\n\n\t08. Exit";
		cout<<"\n\n\tSelect Your Action(1-8): ";
		cin>>ch;
		clrscr();
		//getch();
		switch(ch)
		{

		   case 1:
			top1();
			cout<<endl<<endl;
			cout<<"\n                             CREATE AN ACCOUNT";
			cout<<"\n                             -----------------"<<endl;
			input_bin(count++);
			break;
		   case 2:
			top1();
			cout<<endl<<endl;
			cout<<"\n                             DISPLAY ALL ACCOUNTS";
			cout<<"\n                             --------------------"<<endl;
			disp_all();
		       //	getch();
			break;
		   case 3:
			top1();
			cout<<endl<<endl;
			cout<<"\n                             CLOSE AN ACCOUNT";
			cout<<"\n                             ----------------"<<endl;
			cout<<"\n\n\tEnter The account No. : ";
			cin>>num;
			del_acc(num);
			getch();
			break;
		   case 4:
			top1();
			cout<<endl<<endl;
			cout<<"\n                             MODIFY AN ACCOUNT";
			cout<<"\n                             -----------------"<<endl;
			cout<<"\n\n\tEnter The account No. : ";
			cin>>num;
			mod_acc(num);
			break;
		   case 5:
			top1();
			cout<<endl<<endl;
			cout<<"\n                             LOAN APPROVAL";
			cout<<"\n                             -------------"<<endl;
			l.approveLoan();
			break;
		   case 6:
			top1();
			cout<<endl<<endl;
			cout<<"\n                             DISPLAY ALL LOANS";
			cout<<"\n                             -----------------"<<endl;
			l.displayLoan();
		       //	getch();
			break;

		   case 8:
			top1();
			cout<<"\n\n\tThanks for using City Co-Op. Bank";
			break;


		   default :
			cout<<"\a";
			break;
  }//end of switch
	  }while(ch!=8);
  }//end of if
  else if(utype==2)
  {

  do
	  {
	  clrscr();
	  top1();
	  cout<<"\n                             USER ACTION SELECTION";
	  cout<<"\n                             ---------------------"<<endl;
	  cout<<"\n\n\t01. Deposit an Ammount";
	  cout<<"\n\n\t02. Widraw an Amount";
	  cout<<"\n\n\t03. Account Information";
	  cout<<"\n\n\t04. Apply for Loan";
	  cout<<"\n\n\t05. Show Loan details";
	  cout<<"\n\n\t06. Apply for FD (NOT WORKING)";
	  cout<<"\n\n\t07. Show FD details (NOT WORKING)";
	  cout<<"\n\n\t08. Exit";
	  cout<<"\n\n\tPlease select Your Action(1-8): ";
	  cin>>ch;
	  clrscr();
	  getch();
	  switch(ch)
	  {
	    case 1:
			top1();
			cout<<"\n                             DEPOSIT AMOUNT";
			cout<<"\n                             --------------"<<endl;
			cout<<"\n\n\tEnter the Account No. : ";
			cin>>num;
			dep_wid(num, 1);
			break;
	    case 2:
			top1();
			cout<<"\n                             WIDRAW AMOUNT";
			cout<<"\n                             -------------"<<endl;
			cout<<"\n\n\tEnter the Account No. : ";
			cin>>num;
			dep_wid(num, 2);
			break;
	    case 3:
			top1();
			cout<<"\n                             ACCOUNT INFO";
			cout<<"\n                             ------------"<<endl;
			cout<<"\n\n\tEnter the Account No. : ";
			cin>>num;
			disp_u(num);
			break;




	    case 4:
			top1();
			cout<<"\n                             LOAN APPLICAION";
			cout<<"\n                             ---------------"<<endl;
			l.loanDetails(++loanNo);
			break;

	    case 5:
			top1();
			cout<<"\n                             SHOW LOAN INFO";
			cout<<"\n                             ---------------"<<endl;
			l.displayLoan();
			break;

	    case 6:
			top1();
			cout<<"\n                             APPLY FOR FIXED DEPOSIT";
			cout<<"\n                             ----------------------"<<endl;
			cout<<"This feature is not supported in this version.\nPlease Update for Availing This Feature."<<endl;
			cout<<"Sorry for Inconvinence"<<endl;
			//f.FDDetail();
			break;

	    case 7:
			top1();
			cout<<"\n                             SHOW FIXED DEPOSIT(S)";
			cout<<"\n                             ---------------------"<<endl;
			cout<<"This feature is not supported in this version.\nPlease Update for Availing This Feature."<<endl;
			cout<<"Sorry for Inconvinence"<<endl;
			//f.FDData();
			break;


	    case 8:
			top1();
			cout<<"\n\n\tThanks for using City Co-Op. Bank";
			break;

	    default :
		       cout<<"\a";
  }
  getch();

	  }while(ch!=8);
 }


  getch();
 }while(utype!=3);
}


void ms()
{
  clrscr();
  //int gd = DETECT, gm;
  //initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  //settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  //setbkcolor(GREEN);
  //outtextxy(80,200,"Welcome to City Co-Op Bank Ltd.");

  cout<<"             ======================================================"<<endl;
  cout<<"            ||      |||||||     ||||||    |||    ||     ||   ||   ||"<<endl;
  cout<<"            ||      ||   ||     ||  ||    |||||  ||     || ||     ||"<<endl;
  cout<<"            ||      |||||||     ||||||    ||  || ||     ||||      ||"<<endl;
  cout<<"            ||      ||   ||     ||  ||    ||   ||||     || ||     ||"<<endl;
  cout<<"            ||      |||||||     ||  ||    ||    |||     ||   ||   ||"<<endl;
  cout<<"             ======================================================"<<endl;

  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                                   -A Name You Can Rely on........Always"<<endl;

 getch();

}


void input_bin(int count)
{
  bank b;
  ofstream outFile;
  outFile.open("banks.txt",ios::binary|ios::app);
  b.createacc(count);
  outFile.write((char *)&b, sizeof(bank));
  //cout<<"\n"<<((char *)&b, sizeof(bank));
  getch();
  outFile.close();
}

void disp_u(int n)
{
	bank b;
	int flag=0;
	ifstream inFile;
	inFile.open("banks.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(inFile.read((char *) &b, sizeof(bank)))
	{
		if(b.retacno()==n)
		{
			b.disp ();
			flag=1;
		}
	}
	inFile.close();
	if(flag==0)
		cout<<"\n\nAccount number does not exist";
	getch();
}


void del_acc(int n)
{
	bank b;
	int flag=0;
	int choice;
	ifstream inFile,inFile1;
	ofstream outFile;
	inFile.open("banks.txt",ios::binary);
	inFile1.open("banks.txt",ios::binary);
	if(!inFile1)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}

	cout<<"\nBALANCE DETAILS\n";
	while(inFile1.read((char *) &b, sizeof(bank)))
	{
		if(b.retacno()==n)
		{
			b.disp ();
			flag=1;
			cout<<"Are you sure?(1->y/0->n)";
			cin>>choice;
		}
	}
	inFile1.close();
	if(flag==0)
		cout<<"\n\nAccount number does not exist";
	else if(choice==1){
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("temp.txt",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) &b, sizeof(bank)))
	{
		if(b.retacno()!=n)
		{	// flag=1;
			outFile.write((char *) &b, sizeof(bank));
		}
	}

	inFile.close();
	outFile.close();
	remove("banks.txt");
	rename("temp.txt","banks.txt");
	cout<<"\n\n\tAccount Closed. For Further Procedures, please Talk to\nManager.Your Token Number is your old Account Number.";
	 }
}


void disp_all()
{
	bank b;
	ifstream inFile;
	inFile.open("banks.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"A/c no. ||   NAME        || Type || Balance\n";
	cout<<"====================================================\n";
	while(inFile.read((char *) &b, sizeof(bank)))
	{
		b.rep();
	}
	inFile.close();
	getch();
}


void dep_wid(int n, int option)
{
	int amt;
	int found=0;
	bank b;
	fstream File;
	File.open("banks.txt", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
       //	cout<<"111"<<n<<"b.retacno()"<<b.retacno();
	while(File.read((char *) &b, sizeof(bank)) )
	{

		if(b.retacno()==n)
		{
			b.disp();
			if(option==1)
			{
				cout<<"\n\nEnter the amount to be Deposited: ";
				cin>>amt;
				b.depo(amt);
			}
			if(option==2)
			{
				cout<<"\n\nEnter the amount to be Widrawn";
				cin>>amt;
				int bal=b.retbal()-amt;
				if((bal<500 && b.rettype()=='S') || (bal<1000 && b.rettype()=='C'))
				{
					cout<<"Insufficience balance";
				}
				else
				{
					b.widr(amt);
					cout<<"\nAmount Widrawn"<<endl;
				}
			}
			int pos=(-1)* sizeof(b);
			File.seekp(pos,ios::cur);
			File.write((char *) &b, sizeof(bank));
			found=1;
			break;
	       }
	}
	File.close();
	if(found==0)
		cout<<"\n\n Account Not Found ";
}

void mod_acc(int n)
{


	int amt;
	char name[50];
	int found=0;
	bank b;
	fstream File;
	File.open("banks.txt", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}

	//	cout<<"111"<<n<<"b.retacno()"<<b.retacno();
	while(File.read((char *) &b, sizeof(bank)) )
	{

		if(b.retacno()==n)
		{
			b.disp();
			cout<<"\n\nEnter The New User Name: ";
			gets(name);
			b.setName(name);
			int pos=(-1)* sizeof(b);
			File.seekp(pos,ios::cur);
			File.write((char *) &b, sizeof(bank));
			cout<<"\n\n\tAccount Information Modified";
			found=1;
			break;
	       }
	}
	File.close();
	if(found==0)
		cout<<"\n\n Account Not Found ";
}


void top1()
{
  clrscr();
 // getch();
  cout<<endl;
  cout<<" Welcome to City Co-Op. Bank"<<endl;
  cout<<"_______________________________________________________________________________"<<endl;
}
