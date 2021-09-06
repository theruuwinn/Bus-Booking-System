/*
    Topic Name:         Advance Bus Ticket Booking System
    Authors:            Sarvang Dave, Prince Makwana, Dhruvin Gohil, Karan Zaveri
    Guide:              Ms. Sneha Padhiar
    Submission Date:    02 November, 2017
    Code Name:          NEW PROJECT.C
    Description:        This system is made for an imaginary bus service provider blueInk Travels.
                        This is designed to reduce the efforts to book a tour. It is  usable
                        especially because it stores all the informations and status about buses and passengers.
*/

//  Header Files

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<time.h>

//  Structures

struct time
{
    int hr,min;
};

struct bus
{
    int bus_sr;
    int bus_code;
    char seat[8][4][20];
    char dr_nm[20];
    struct time depar_time, arriv_time;
    char dest[20];
    char orig[20];
    float fare;
    int ticket_sold;
};

//  Functions

void front_page();  //front page
void tnc(); //terms and conditions
void add_bus(); //fn to add bus //to be given admin level access
void usp(); //fn to select user   //as main page
void aas(); //fn to select action by admin
void cas(); //fn to select action by customer
void showbuses();   //fn to show all available buses  // to be given all access levels
void empty();   //fn to reset all values
void bookseat();    //fn to book seats  //to be given all levels of access
void disp_status(); //fn to display status of booking
void report();  //fn to generate report

//  Global Variables

char Empty[]="Empty";
int num=1;
char i=':';
struct bus buses[40];

//Main Function

int main()
{
    int i;
    system("cls");
    front_page();
    tnc();
    usersel:
    usp();
    //menu();
    //getch();
    return 0;
}

//  Function Definitions

void usp()
{
    usersel:
    int utype;
    system("cls");
    printf("\n                              USER SELECTION PAGE");
    printf("\n                              -------------------\n");
    printf("\n1. Admin");
    printf("\n2. Customer");
    printf("\n3. Exit");
    printf("\nPlease select your course of Action: ");
    scanf("%d",&utype);
    if(utype==1)
    {
        aas();
    }
    else if(utype==2)
    {
        cas();
    }
    else if(utype==3)
    {
        exit(0);
    }
    else
    {
        printf("\nInvalid Input...");
        goto usersel;
    }
    getch();
}

void aas()
{
    char pass[20],ff,ch;
    do{
            printf("\nEnter the Password: ");
            scanf("%s",pass);
            // printf("%d",strcmp(pass,"admin"));
            if(strcmp(pass,"admin")==0)
            {
                ff=1;
            }
            else
            {
                printf("\nIncorrect Password !!! Please enter again");
                ff=0;
                exit(0);
            }
        }while(ff==0);
    system("cls");
    getch();
	do
    {
        printf("\n                             ADMIN ACTION SELECTION");
		printf("\n                             ----------------------\n");
		printf("\n\n\t01. Add Bus Route");
		printf("\n\n\t02. Show Bus Routes");
		printf("\n\n\t03. Book Tickets");
		printf("\n\n\t04. Cancel Ticket");
		printf("\n\n\t05. Display Status");
		printf("\n\n\t06. Display Report");
		printf("\n\n\t07. Exit");
		printf("\n\n\tSelect Your Action(1-6): ");
		scanf("%d",&ch);
		switch(ch)
		{

            case 1:
                    add_bus();
                    break;
            case 2:
                    showbuses();
                    break;
            case 3:
                    bookseat();
                    break;
            case 4:
                    printf("\nUnder Construction");
                    break;
            case 5:
                    disp_status();
                    break;
            case 6:
                    report();
                    break;
            case 7:
                    printf("\n\n\tThanks for using blueInk Bus Travellers");
                    break;


		   default :
                printf("\a");
                break;
        }//end of switch
	 }while(ch!=7);
}//admin access

void cas()
{
    int ch;
    system("cls");
	do
    {
        printf("\n                             USER ACTION SELECTION");
		printf("\n                             ---------------------\n");
		printf("\n\n\t01. Display Buses");
		printf("\n\n\t02. Book Ticket");
		printf("\n\n\t03. Display Status");
		printf("\n\n\t04. Exit");
		printf("\n\n\tSelect Your Action(1-4): ");
		scanf("%d",&ch);
		switch(ch)
		{

            case 1:
                    showbuses();
                    break;
            case 2:
                    bookseat();
                    break;
            case 3:
                    disp_status();
                    break;
            case 4:
                    printf("\n\n\tThanks for using blueInk Bus Travellers");
                    break;
            default:
                    printf("\a");
                    break;
        }//end of switch
	 }while(ch!=4);
	 getch();
}

void front_page()
{
    system("cls");
    printf("\n\n");
    printf("\t\t\t        ________________\n");
    printf("\t\t\t       | ||\t ====== |\n");
    for(i=0;i<3;i++)
    {
            printf("\t\t\t       | ||\t   ||   |\n");
    }
    printf("\t\t\t       | ||====\t   ||   |\n");
    for(i=0;i<2;i++)
    {
            printf("\t\t\t       | ||  ||\t   ||   |\n");
    }
    printf("\t\t\t       | ======\t ====== |\n");
    printf("\t\t\t       |----------------|\n");
    printf("\t\t\t       |     blueInk    |\n");
    printf("\t\t\t       | Bus Travellers |\n");
    printf("\t\t\t       |----------------|\n");
    printf("\t\t\t       |________________|\n");
    printf("\n\n\t\t\tPlease press any key to continue...");
    getch();
}

void tnc()
{
    system("cls");
    printf("                                      :Note:\n");
    printf("1. Prices of Tickets booked on our software are subject to our personal Offers.\n");
    printf("2. We guarantee that there will be 100%% refund only on Ticket Charges and not on   GST and Booking Charges.\n");
    printf("3. We take sole responsiblity of your seats and comfort. Any inconvenience is      regretted.\n");
    printf("4. You shall be required to confirm your e-tickets in the bus.\n");
    printf("5. If during rush hours, our software is over-crowded, we would take sole          responsiblity that you get desired seats.\n");
    printf("6. All cases are subject to Ahmedabad Jurisdiction only.\n");
    printf("7. Carrying authenticate photo id during journey is compulsory.\n");
    printf("8. We comply to Government's all rules.\n");
    printf("9. We guarantee that our collaborated buses and we comply to rule of Diary         Timing.\n");
    printf("10.We request you to use CAPS LOCK during whole Program to avoid any               inconvenience.\n");
    printf("11.If your number of seats entered and Amount of Seats selected differ then        SmartSeatSelector will automaticallty select your seat.\n");
    printf("12.If your Number of Seats Entered and Selected seats differ, Number of            seats selected will be taken as default in billing.\n");
    printf("13.You will be solely responsible if you make any error while YOU INPUT            any information.\n");
    printf("14.HERE ONWARDS YOU AGREE TO CONTINUE TO PAY BY INTERNET ACCOUNT SYNCED            EVEN IF BALANCE BECOMES NEGATIVE\n");
    printf("                           Press any key to continue");
    getch();
}

void add_bus()
{
    char chChoice;
    printf("\n\n\t\tEnter the information about the bus:-\n");
    do
    {
        printf("\n\n\t\t Bus No:\t%d",num);
        busC:
            printf("\n\n\tEnter Bus Code:\t");
            fflush(stdin);
            buses[num].bus_sr=num;
            scanf("%d",&buses[num].bus_code);
            if(buses[num].bus_code<1||buses[num].bus_code>9999)
            {
                printf("\n\t\tInvalid Bus Code!!!!");
                goto busC;
            }
        dname:
            printf("\n\n\tEnter driver's name:\t");
            fflush(stdin);
            gets(buses[num].dr_nm);
            if(strlen(buses[num].dr_nm)>20)
            {
                printf("Maximum 20 characters are allowed");
                goto dname;
            }
        artime:
            printf("\n\tEnter arrival time:\t");
            fflush(stdin);
            scanf("%d%c%d",&buses[num].arriv_time.hr,&i,&buses[num].arriv_time.min);
            if(buses[num].arriv_time.hr==0)
            {
                printf("\n\n\t\tInvalid Time!!!!");
                goto artime;
            }
            if((i!=':')||(buses[num].arriv_time.hr>=24)||(buses[num].arriv_time.hr<0)||(buses[num].arriv_time.min>=60)||(buses[num].arriv_time.min<0))
            {
                printf("\n\t\tInvalid Time!!!!\n");
                printf("\t\tEnter only--hh:mm!!!!");
                goto artime;
            }
        deptime:
            printf("\n\tEnter departure time:\t");
            fflush(stdin);
            scanf("%d%c%d",&buses[num].depar_time.hr,&i,&buses[num].depar_time.min);
            if(buses[num].depar_time.hr==0)
            {
                printf("\t\tinvalid Time!!!!");
                goto deptime;
            }
            if((i!=':')||(buses[num].depar_time.hr>=24)||(buses[num].depar_time.hr<0)||(buses[num].depar_time.min>=60)||(buses[num].depar_time.min<0))
            {
                printf("\n\t\tInvalid Time!!!!");
                printf("\n\t\tEnter only--hh:mm");
                goto deptime;
            }
        from:
            printf("\n\tFrom:\t");
            fflush(stdin);
            gets(buses[num].orig);
            if(strlen(buses[num].orig)>20)
            {
                printf("Maximum 20 characters are allowed");
                goto from;
            }
        to:
            printf("\n\tTo:\t");
            fflush(stdin);
            gets(buses[num].dest);
            if(strlen(buses[num].dest)>20)
            {
                printf("Maximum 20 characters are allowed");
                goto to;
            }
        printf("\n\tFare:\t");
        fflush(stdin);
        scanf("%f",&buses[num].fare);
        buses[num].ticket_sold=0;
        printf("\n");
        empty();
        printf("\n___________________________________________________________________\n");
        printf("\n\n\n\tDo u want to continue to add a new bus(y/n)?? ");
        fflush(stdin);
        scanf("%c",&chChoice);
        num++;
    }while(chChoice=='y'||chChoice=='Y');
    usp();
}

void showbuses()
{
    int i1;
    printf("\n\n\t\t\t______________________");
    printf("\n\n\t\t\t BUSES AVALAIBLE");
    printf("\n\n\t\t\t______________________\n");
    for(i1=1;i1<num;i1++)
    {
        printf("\n");
        printf("\n\t\tbus no-\t\t%d",buses[i1].bus_sr);
        printf("\n\t\tbus code-\t%d",buses[i1].bus_code);
        printf("\n\t\tDrivers Name-\t%s",buses[i1].dr_nm);
        printf("\n\t\tFrom-\t\t%s",buses[i1].orig);
        printf("\n\t\tTo-\t\t%s",buses[i1].dest);
        printf("\n\t\tArrival time-\t%d%c%d",buses[i1].arriv_time.hr,i,buses[i1].arriv_time.min);
        printf("\n\t\tDeparture time-\t%d%c%d",buses[i1].depar_time.hr,i,buses[i1].depar_time.min);
        printf("\n\t\tFare-\t\t%.4f",buses[i1].fare);
        printf("\n\t\tTickets Sold-\t%d",buses[i1].ticket_sold);
        printf("\n");
    }
    getch();
    usp();
}

void disp_status()
{
    int busno,index=0,j,k;
    char ch;
    printf("\n\n\t\tPlease enter Bus no.-\t");
    fflush(stdin);
    scanf("%d",&busno);
    if(busno>=num)
    {
        printf("\n\t\tBus doesn't Exist!!!!");
        disp_status();
    }
    else
    {
        printf("\nBus code-\t%d\t\tDriver's Name-\t%s",buses[busno].bus_code,buses[busno].dr_nm);
        printf("\nArrival Time-\t%d%c%d\t\tDeparture Time\t%d%c%d",buses[busno].arriv_time.hr,i,buses[busno].arriv_time.min,buses[busno].depar_time.hr,i,buses[busno].depar_time.min);
        printf("\nFrom-\t\t%s\t\tTo-\t\t%s",buses[busno].orig,buses[busno].dest);
        printf("\nFare-\t\t%f\tTickets Sold-\t%d",buses[busno].fare,buses[busno].ticket_sold);
        printf("\n");
        for(j=0;j<8;j++)
        {
            printf("\n");
            for(k=0;k<4;k++)
            {
                index++;
                printf("%d .%s\t",index,buses[busno].seat[j][k]);
            }
        }
    }
    printf("\n\n\t\tDo u want to continue with another bus(y/n)??");
    fflush(stdin);
    ch=getchar();
    if(ch=='y'||ch=='Y')
        disp_status();
    else
        usp();
}

void bookseat()
{
        char name[20];
        int bussr;
        int seatno;
        char ch;
        printf("\n\n\t\t\t______________________");
        printf("\n\n\t\t\t ALLOTMENT");
        printf("\n\n\t\t\t______________________\n");
        printf("\n\n\t\tEnter the Bus Number-\t");
        fflush(stdin);
        scanf("%d",&bussr);
        if(bussr>=num)
        {
            printf("\n\t\t\tSorry Bus Doesn,t Exist!!!!");
            usp();
        }
    seat:
        printf("\n\t\tEnter the Seat number(between 1 and 32)-\t");
        fflush(stdin);
        scanf("%d",&seatno);
        if(seatno>32)
        {
            printf("\n\t\tSorry!! There r only 32 seats in the bus!!!!") ;
            goto seat;
        }
        else if(strcmp(buses[bussr].seat[seatno/4][(seatno%4)-1],"Empty")==0)
        {
            printf("\n\t\tEnter the passenger's name-\t");
            name:
                fflush(stdin);
                gets(name);
                if(strlen(name)>20)
                {
                    printf("\n\t\tplz enter only 20 characters!!!!");
                    goto name;
                }
                else
                {
                    strcpy(buses[bussr].seat[seatno/4][seatno%4-1],name);
                    printf("\n\t\tYour seat is reserved now!!");
                    buses[bussr].ticket_sold++;
                    printf("\n\t do u want to continue with reservation(y/n)??");
                    fflush(stdin);
                    ch=getchar();
                    if(ch=='y'||ch=='Y')
                        bookseat();
                    else
                        usp();
                }
        }
        else
        {
            printf("\n\tThis seat is already reserved!!!!");
            printf("\n\t do u want to try again??");
            fflush(stdin);
            ch=getchar();
            if(ch=='y'||ch=='Y')
                bookseat();
            else
                usp();
        }
}

void report()
{
    int i;
    double total=0;
    double bustotal=0;
    printf("\n\n\t\t\t______________________");
    printf("\n\n\t\t\t DAILY REPORT");
    printf("\n\n\t\t\t______________________\n");
    for(i=1;i<num;i++)
    {
        bustotal=buses[i].ticket_sold*buses[i].fare;
        printf("\n\t\tBus no-\t%d\t Total tickets Sold-\t%d",i,buses[i].ticket_sold);
        printf("\n\t\t\tTotal Fare-\t%.4lf\n",bustotal);
        total+=bustotal;
    }
    printf("\n\n\t\t\tDaily Total=\t%lf",total);
    getch();
    aas();
}

void empty()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<4;j++)
        {
            strcpy(buses[num].seat[i][j],Empty);
        }
    }
}
