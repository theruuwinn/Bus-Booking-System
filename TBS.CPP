#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
clrscr();
int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10;
char un[8];
cout<<endl;
cout<<endl;
cout<<"Please enter your User Name to Enter ABO:";
cin>>un;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                        Welcome to Ahmedabad Box Office"<<endl;
cout<<"                          ':Ticket book kar, Show enjoy kar'"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                             Press any key to Continue"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                         (c)S D & Co.(2009-2025)"<<endl;
getch();
clrscr();
cout<<"ABO                                                          Welcome "<<un<<endl;
cout<<"________________________________________________________________________________"<<endl;
cout<<endl<<"                                      :Note:"<<endl<<endl;
cout<<"1. Prices of Tickets booked on our site are subject to our personal Offers."<<endl;
cout<<"2. We gaurantee that there will be 100% refund only on Ticket Charges and not on   Service Tax and Booking Charges."<<endl;
cout<<"3. We take sole responsiblity of your seats and comfort. Any inconvinience is      regretted."<<endl;
cout<<"4. You will have to collect tickets from our counters present at each of the       above-mentioned theatres atleast 5 Minutes prior to show time else our          gaurantee on the avaiblity of tickets ends."<<endl;
cout<<"5. If during rush hours, our box office is over-crowded, we would take sole        responsiblity that you get desired seats."<<endl;
cout<<"6. All cases are subject to Ahmedabad Jurisdiction only."<<endl;
cout<<"7. If you cancel tickets, only 10% of Ticket amount will be refunded."<<endl;
cout<<"8. We comply to Government's rule of Constant Pricing. However, the prices of      movie tickets will be decided by our collabrated Theatre bodies. However,       prices of each ticket will be less than the Market Price."<<endl;
cout<<"9. We gaurantee that our collbrated theatres and we comply to rule of Diary        Timing."<<endl;
cout<<"10.We request you to use CAPS LOCK during whole Program to avoid any               inconvinience."<<endl;
cout<<"11.If your number of seats entered and Amount of Seats selected differ then        SmartSeatSelector will automaticallty select your seat."<<endl;
cout<<"12.If your Number of Seats Entered and Selected seats differ, Number of           seats selected will be taken as default in billing."<<endl;
cout<<"13.You will be solely responsible if you make any value while YOU INPUT           any information."<<endl;
cout<<"14.HERE ONWARDS YOU AGREE TO CONTINUE TO PAY BY INTERNET ACCOUNT SYNCED           EVEN IF BALANCE BECOMES NEGATIVE"<<endl<<endl;
cout<<"                         Press any key to continue";
getch();
clrscr();
mov:
clrscr();
cout<<"ABO                                                          Welcome "<<un<<endl;
cout<<"________________________________________________________________________________"<<endl<<endl;
int m,mp;
cout<<"Please select the Movie you want to see:"<<endl;
cout<<"1.P.K.                       2.Gujjubhai The Great"<<endl;
cout<<"3.Bajrangi Bhaijaan          4.Talvar"<<endl;
cout<<"5.Dil Dhadakne Do            6.Piku"<<endl;
cout<<"7.Singham Returns            8.Baby"<<endl;
cout<<"9.Yeh Jawani Hai Deewani    10.My Name is Khan"<<endl<<endl;
cout<<"Please Enter Movie Number:";
cin>>m;
cout<<endl<<endl;
char a,Y,y;
if(m==1)
{
cout<<"Are you sure you want to watch P.K ?"<<endl;
mp=80;
}
else if(m==2)
{
cout<<"Are you sure you want to watch Gujjubahi The Great ?"<<endl;
mp=50;
}
else if(m==3)
{
cout<<"Are you sure you want to watch Bajrangi Bhaijaan ?"<<endl;
mp=80;
}
else if(m==4)
{
cout<<"Are you sure you want to watch Talvar ?"<<endl;
mp=80;
}
else if(m==5)
{
cout<<"Are you sure you want to watch Dil Dhadakne Do ?"<<endl;
mp=100;
}
else if(m==6)
{
cout<<"Are you sure you want to watch Piku ?"<<endl;
mp=60;
}
else if(m==7)
{
cout<<"Are you sure you want to watch Singham Returns ?"<<endl;
mp=80;
}
else if(m==8)
{
cout<<"Are you sure you want to watch Baby ?"<<endl;
mp=70;
}
else if(m==9)
{
cout<<"Are you sure you want to watch Yeh Jawaani Hai Deewani ?"<<endl;
mp=70;
}
else if(m==10)
{
cout<<"Are you sure you want to watch My Name is Khan ?"<<endl;
mp=80;
}
cout<<endl<<endl<<"Please respond Y(for Yes) or N(for No):";
cin>>a;
if(a=='Y')
{
cout<<"Now you will get a list of theatres";
}
else
{
cout<<"Redirecting";
getch();
goto mov;
}
cout<<endl<<endl;
getch();
thea:
clrscr();
cout<<"ABO                                                          Welcome "<<un<<endl;
cout<<"________________________________________________________________________________"<<endl;
int T,tp;
char r;
cout<<endl<<"Here is the List of Theatres:"<<endl<<endl<<endl;
cout<<"1.Cinepolis, Alpha One Mall        2.Carnival Cinemas, Himalaya Mall"<<endl;
cout<<"3.PVR Cinemas, Acropolis Mall      4.Wide Angle Multiplex"<<endl;
cout<<"5.Cinemax, S G Highway             6.Cinegold, Bopal"<<endl;
cout<<"7.Rajhans Cinemas                  8.K Cera Cera"<<endl;
cout<<"9.Devi Multiplex                  10.Anupam Cinemas"<<endl<<endl;
cout<<"In which Theater do you want to watch Movie in (Sr.No.) ?";
cin>>T;
cout<<endl;
if(T==1)
{
cout<<"Are you sure you want to watch movie in Cinepolis?";
tp=200;
}
else if(T==2)
{
cout<<"Are you sure you want to watch movie in Carnival Cinemas ?";
tp=100;
}
else if(T==3)
{
cout<<"Are you sure you want to watch movie in PVR Cinemas ?";
tp=100;
}
else if(T==4)
{
cout<<"Are you sure you want to watch movie in Wide Angle Multiplex ?";
tp=80;
}
else if(T==5)
{
cout<<"Are you sure you want to watch movie in CineMax Cinemas,S G Highway ?";
tp=90;
}
else if(T==6)
{
cout<<"Are you sure you want to watch movie in CineGold Cinemas,Bopal ?";
tp=80;
}
else if(T==7)
{
cout<<"Are you sure you want to watch movie in Rajhans Cinemas ?";
tp=50;
}
else if(T==8)
{
cout<<"Are you sure you want to watch movie in K Cera Cera ?";
tp=50;
}
else if(T==9)
{
cout<<"Are you sure you want to watch movie in Devi Multiplex ?";
tp=70;
}
else if(T==10)
{
cout<<"Are you sure you want to watch movie in Anupam Cinemas ?";
tp=60;
}
else
{
cout<<"Please Select Correct Option";
}
cout<<endl<<"Answer Y for Yes and N for No:";
cin>>r;
cout<<endl;
if(r=='Y')
{
cout<<"Now you will get sitting arrangement.";
}
else
{
cout<<"Redirecting";
getch();
goto thea;
}
getch();
clrscr();
int ns;
char ch[2];
cout<<"ABO                                                          Welcome "<<un<<endl;
cout<<"________________________________________________________________________________"<<endl;
cout<<"Now you will get seating arrangement."<<endl<<endl<<endl<<endl;
getch();
cout<<"  1 2 3 4 5    6 7 8 9 10  11 12 13 14 15 16 17 18 19     20 21 22 23"<<endl;
cout<<"A _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl;
cout<<"B _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl<<endl;
cout<<"C _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl;
cout<<"D _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl;
cout<<"E _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl;
cout<<"F _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl;
cout<<"G _ _ _ _ _    _ _ _ _  _  _  _  _  _  _  _   _  _  _     _  _  _  _ "<<endl<<endl;;
cout<<"H              _ _ _ _  _  _  _  _  _  _  _   _  _  _                "<<endl;
cout<<"I              _ _ _ _  _  _  _  _  _  _  _   _  _  _                "<<endl<<endl;
cout<<"J              _ _ _ _  _  _  _  _  _  _  _   _  _  _                "<<endl;
cout<<"K              _ _ _ _  _  _  _  _  _  _  _   _  _  _                "<<endl<<endl<<endl;
cout<<"                           Screen This Way                           "<<endl<<endl;
cout<<"              __________________________________________             "<<endl<<endl<<endl<<endl;
cout<<"Please Enter your number of seats:";
cin>>ns;
cout<<"Please Enter Seat you want:";
cin>>ch;
getch();
clrscr();
cout<<"ABO                                                          Welcome "<<un<<endl;
cout<<"________________________________________________________________________________"<<endl<<endl<<endl;
int TIPR,st,tb;
TIPR=ns*(mp+tp);
st=(TIPR*18)/100;
tb=TIPR+st;
cout<<"Your bill will be paid from Your Internet Bank Account."<<endl;
cout<<"Your Bill is as follows:"<<endl;
cout<<"Prices of Tickets is:"<<TIPR<<endl;
cout<<"Total taxes are(18%):"<<st<<endl;
cout<<"Your total Bill is:"<<tb<<endl;
cout<<"Your Transaction ID is:19032540SABE2345"<<endl<<endl<<endl<<endl;
cout<<"                                 Press any key to continue"<<endl;
getch();
}