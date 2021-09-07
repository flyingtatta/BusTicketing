#include<iostream>

#include<bits/stdc++.h>

#include<windows.h>

using namespace std;

int Front_Pune=-1,Front_Lonavala=-1,Front_Amby_Valley=-1,Rear_Pune=-1,Rear_Lonavala=-1,Rear_Amby_Valley=-1,Maximum=10,i,j,k,l,len=4;

int Value_For_Location,Value_For_Cancelling;

int Number_Of_Tickets_Pune,Number_Of_Tickets_Lonavala,Number_Of_Tickets_Amby_Valley;

int Cost_Of_Ticket_Pune, Cost_Of_Ticket_Lonavala, Cost_Of_Ticket_Amby_Valley;

int Number_Of_Tickets_Cancel_Pune,Number_Of_Tickets_Cancel_Lonavala,Number_Of_Tickets_Cancel_Amby_Valley;

int Refund_Of_Ticket_Pune,Refund_Of_Ticket_Lonavala,Refund_Of_Ticket_Amby_Valley;

char Value='X',Queue_Pune[20],Queue_Lonavala[20],Queue_Amby_Valley[20];

string a1,a2,a3,a4,a5,a6;



void Displaying_Title()
{
    cout<<"\t\tB";      Sleep(100);      cout<<"U";     Sleep(100);  ;cout<<"S";     Sleep(100);
    cout<<" T";  Sleep(100);   cout<<"I";     Sleep(100);  cout<<"C";     Sleep(100);  cout<<"K";     Sleep(100);  cout<<"E";     Sleep(100);  cout<<"T";      Sleep(100);
    cout<<" B";     Sleep(100);  cout<<"O";     Sleep(100);  cout<<"O";     Sleep(100);  cout<<"K";     Sleep(100);  cout<<"I";     Sleep(100);  cout<<"N";     Sleep(100);  cout<<"G";
}



void Booking_Pune()
{
    if(Front_Pune==-1  &&  Rear_Pune==-1)
    {
		Front_Pune=Rear_Pune=0;
	}


	else if((Rear_Pune+1)%Maximum==Front_Pune)
	{
		cout<<"\nROW A is Full";
	}


	else
	{
		Rear_Pune=(Rear_Pune+1)%Maximum;
	}

	Queue_Pune[Rear_Pune]=Value;

}


void Booking_Lonavala()
{
    if(Front_Lonavala==-1  &&  Rear_Lonavala==-1)
    {
		Front_Lonavala=Rear_Lonavala=0;
	}


	else if((Rear_Lonavala+1)%Maximum==Front_Lonavala)
	{
		cout<<"\nROW B is Full";
	}


	else
	{
		Rear_Lonavala=(Rear_Lonavala+1)%Maximum;
	}

	Queue_Lonavala[Rear_Lonavala]=Value;

}


void Booking_Amby_Valley()
{
    if(Front_Amby_Valley==-1  &&  Rear_Amby_Valley==-1)
    {
		Front_Amby_Valley=Rear_Amby_Valley=0;
	}


	else if((Rear_Amby_Valley+1)%Maximum==Front_Amby_Valley)
	{
		cout<<"\nROW C is Full";
	}


	else
	{
		Rear_Amby_Valley=(Rear_Amby_Valley+1)%Maximum;
	}

	Queue_Amby_Valley[Rear_Amby_Valley]=Value;

}


void Cancelling_Pune()
{

    if(Front_Pune==-1  &&  Rear_Pune==-1)
	{
		cout<<"\nPlease Book A Ticket";
	}

	else if(Front_Pune==Rear_Pune)
	{
		Value=Queue_Pune[Front_Pune];
		Front_Pune=Rear_Pune=-1;
	}

	else
	{
		Front_Pune=(Front_Pune+1)%Maximum;
	}

}


void Cancelling_Lonavala()
{

    if(Front_Lonavala==-1  &&  Rear_Lonavala==-1)
	{
		cout<<"\nPlease Book A Ticket";
	}

	else if(Front_Lonavala==Rear_Lonavala)
	{
		Value=Queue_Lonavala[Front_Lonavala];
		Front_Lonavala=Rear_Lonavala=-1;
	}

	else
	{
		Front_Lonavala=(Front_Lonavala+1)%Maximum;
	}

}


void Cancelling_Amby_valley()
{

    if(Front_Amby_Valley==-1  &&  Rear_Amby_Valley==-1)
	{
		cout<<"\nPlease Book A Ticket";
	}

	else if(Front_Amby_Valley==Rear_Amby_Valley)
	{
		Value=Queue_Amby_Valley[Front_Amby_Valley];
		Front_Amby_Valley=Rear_Amby_Valley=-1;
	}

	else
	{
		Front_Amby_Valley=(Front_Amby_Valley+1)%Maximum;
	}

}



void Display_Pune()
{

    if(Rear_Pune==-1)
	{
		cout<<"\nROW A   -->No Tickets";
	}

	else
	{
		cout<<"\nROW A   -->";

		for(i=Front_Pune;i<=Rear_Pune;i++)
		{
			cout<<"|"<<Queue_Pune[i]<<"|\t";
		}
	}

}


void Display_Lonavala()
{

    if(Rear_Lonavala==-1)
	{
		cout<<"\nROW B   -->No Tickets";
	}

	else
	{
		cout<<"\nROW B   -->";

		for(i=Front_Lonavala;i<=Rear_Lonavala;i++)
		{
			cout<<"|"<<Queue_Lonavala[i]<<"|\t";
		}
	}

}


void Display_Amby_Valley()
{

    if(Rear_Amby_Valley==-1)
	{
		cout<<"\nROW C   -->No Tickets";
	}

	else
	{
		cout<<"\nROW C   -->";

		for(i=Front_Amby_Valley;i<=Rear_Amby_Valley;i++)
		{
			cout<<"|"<<Queue_Amby_Valley[i]<<"|\t";
		}
	}

}



void Seat_No()
{
	cout<<"\nSeat No.-->";

	for(i=1;i<=Maximum;i++)
	{
    	cout<<"|"<<i<<"|\t";
	}

}



string ID_1(int len)
{
string str="0123456789",OTP;
int n=str.length();
for(int i=1;i<=len;i++)
{
OTP.push_back(str[rand()%n]);
}
return OTP;
}


void Main_0()
{
    cout<<"\n\t********************************************************\n";
    cout<<"\t\t\tPRESS   |||   FOR\n";
    cout<<"\t\t\t--->1   ---   Details\n";
    cout<<"\t\t\t--->2   ---   Cancelling A Ticket\n";
    cout<<"\t\t\t--->3   ---   Back To Booking\n";
    cout<<"\t\t\t--->4   ---   EXIT";
    cout<<"\n\t********************************************************\n";
    cin>>Value_For_Cancelling;
}


void Main_1()
{

    while(Value_For_Location!=5)
    {
        cout<<"\n\t********************************************************\n";
        cout<<"\t\t\tPRESS   |||   FOR\n";
        cout<<"\t\t\t--->1   ---   Pune\n";
        cout<<"\t\t\t--->2   ---   Lonavala\n";
        cout<<"\t\t\t--->3   ---   Amby Valley\n";
        cout<<"\t\t\t--->4   ---   Tickets Booked in the Bus\n";
        cout<<"\t\t\t--->5   ---   EXIT\n";
        cout<<"\t********************************************************\n";
        cin>>Value_For_Location;

    switch(Value_For_Location)
    {
    case 1:

        cout<<"\n\t\t\t\t---BOOKING FOR PUNE---\n";
        cout<<"\nCost Per Ticket: 650\n";
        cout<<"Enter Number Of Tickets To Book: ";
        cin>>Number_Of_Tickets_Pune;

        Cost_Of_Ticket_Pune=650*Number_Of_Tickets_Pune;

        cout<<"\nTotal Cost: "<<Cost_Of_Ticket_Pune;
        a1=ID_1(len).c_str();
        cout<<"\nYour Ticket Number: "<<a1<<"\n";


        for(j=0;j<Number_Of_Tickets_Pune;j++)
        {
            Booking_Pune();
        }

        Seat_No();
        Display_Pune();

        while(Value_For_Cancelling!=4)
        {

		Main_0();
            	switch(Value_For_Cancelling)
                {

            case 1:
                cout<<"\nTicket Booked For: PUNE";
                cout<<"\nAmount To Be Paid: "<<Cost_Of_Ticket_Pune;
                cout<<"\nTicket Number: "<<a1;
                break;

            case 2:
                cout<<"\nEnter Number Of Tickets To Cancel: ";
                cin>>Number_Of_Tickets_Cancel_Pune;

                if(Number_Of_Tickets_Cancel_Pune>Number_Of_Tickets_Pune)
                {
                    cout<<"Cannot Cancel More Than Booked...\n";
                    Main_0();
                }

                else
                {

                    Refund_Of_Ticket_Pune=Number_Of_Tickets_Cancel_Pune*650;

                    cout<<"Refund: "<<Refund_Of_Ticket_Pune;
                    for(j=0;j<Number_Of_Tickets_Cancel_Pune;j++)
                    {
                        Cancelling_Pune();
                    }
                    Seat_No();
                    Display_Pune();
                }
                break;
            case 3:
                cout<<"\t\t\t---BACK---\n";
                Main_1();
                break;

             }
        }
        break;


   case 2:

        cout<<"\n\t\t\t\t---BOOKING FOR LONAVALA---\n";
        cout<<"\nCost Per Ticket: 450\n";
        cout<<"Enter Number Of Tickets To Book: ";
        cin>>Number_Of_Tickets_Lonavala;

        Cost_Of_Ticket_Lonavala=450*Number_Of_Tickets_Lonavala;

        cout<<"\nTotal Cost: "<<Cost_Of_Ticket_Lonavala;
        a2=ID_1(len).c_str();
        cout<<"\nYour Ticket Number: "<<a2<<"\n";


        for(j=0;j<Number_Of_Tickets_Lonavala;j++)
        {
            Booking_Lonavala();
        }

        Seat_No();
        Display_Lonavala();

        while(Value_For_Cancelling!=4)
        {

		Main_0();
            	switch(Value_For_Cancelling)
                {

            case 1:
                cout<<"\nTicket Booked For: LONAVALA";
                cout<<"\nAmount To Be Paid: "<<Cost_Of_Ticket_Lonavala;
                cout<<"\nTicket Number: "<<a2;
                break;

            case 2:
                cout<<"\nEnter Number Of Tickets To Cancel: ";
                cin>>Number_Of_Tickets_Cancel_Lonavala;

                if(Number_Of_Tickets_Cancel_Lonavala>Number_Of_Tickets_Lonavala)
                {
                    cout<<"Cannot Cancel More Than Booked...\n";
                    Main_0();
                }

                else
                {

                    Refund_Of_Ticket_Lonavala=Number_Of_Tickets_Cancel_Lonavala*450;

                    cout<<"Refund: "<<Refund_Of_Ticket_Lonavala;

                    for(j=0;j<Number_Of_Tickets_Cancel_Lonavala;j++)
                    {
                        Cancelling_Lonavala();
                    }
                    Seat_No();
                    Display_Lonavala();
                }
                break;

            case 3:
                cout<<"\t\t\t---BACK---\n";
                Main_1();
                break;

            }
        }
        break;


    case 3:

        cout<<"\n\t\t\t\t---BOOKING FOR AMBY VALLEY---\n";
        cout<<"\nCost Per Ticket: 550\n";
        cout<<"Enter Number Of Tickets To Book: ";
        cin>>Number_Of_Tickets_Amby_Valley;

        Cost_Of_Ticket_Amby_Valley=550*Number_Of_Tickets_Amby_Valley;

        cout<<"\nTotal Cost: "<<Cost_Of_Ticket_Amby_Valley;
        a3=ID_1(len).c_str();
        cout<<"\nYour Ticket Number: "<<a3<<"\n";


        for(j=0;j<Number_Of_Tickets_Amby_Valley;j++)
        {
            Booking_Amby_Valley();
        }

        Seat_No();
        Display_Amby_Valley();

        while(Value_For_Cancelling!=4)
        {

		Main_0();
            	switch(Value_For_Cancelling)
                {

            case 1:
                cout<<"\nTicket Booked For: AMBY VALLEY";
                cout<<"\nAmount To Be Paid: "<<Cost_Of_Ticket_Amby_Valley;
                cout<<"\nTicket Number: "<<a3;
                break;

            case 2:
                cout<<"\nEnter Number Of Tickets To Cancel: ";
                cin>>Number_Of_Tickets_Cancel_Amby_Valley;

                if(Number_Of_Tickets_Cancel_Amby_Valley>Number_Of_Tickets_Amby_Valley)
                {
                    cout<<"Cannot Cancel More Than Booked...\n";
                    Main_0();
                }

                else
                {

                    Refund_Of_Ticket_Amby_Valley=Number_Of_Tickets_Cancel_Amby_Valley*550;

                    cout<<"Refund: "<<Refund_Of_Ticket_Amby_Valley;
                    for(j=0;j<Number_Of_Tickets_Cancel_Amby_Valley;j++)
                    {
                        Cancelling_Amby_valley();
                    }
                    Seat_No();
                    Display_Amby_Valley();
                }
                break;


            case 3:
                cout<<"\t\t\t---BACK---\n";
                Main_1();
                break;


            }
        }
        break;

 case 4:
cout<<"\t\t\t---AL TICKETS BOOKED IN THE BUS---\n";
Seat_No();
Display_Pune();
Display_Lonavala();
Display_Amby_Valley();

break;

    	}
    }
}


int main()
{
    Displaying_Title();
    Main_1();
}
