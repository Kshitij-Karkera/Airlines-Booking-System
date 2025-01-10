#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<direct.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

using namespace std;

void gotoxy(int x, int y) 
{ 
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void date()
{
 gotoxy(20,10);
 cout<<"Your flight is on Date : "<<__DATE__;
 gotoxy(20,12);
 cout<<"Your flight is on Time : "<<__TIME__;
}
void box0(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		gotoxy(i,b);
		cout<<"\xcd";
		gotoxy(i,d);
		cout<<"\xcd";
	}
	for(j=b;j<d;j++)
	{
		gotoxy(a,j);
		cout<<"\xba";
		gotoxy(c,j);
		cout<<"\xba";
	}
		gotoxy(a,b);
		cout<<"\xc9";
		gotoxy(c,b);
		cout<<"\xbb";
		gotoxy(a,d);
		cout<<"\xc8";
		gotoxy(c,d);
		cout<<"\xbc";
}
void boxl(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		gotoxy(i,b);
		cout<<"\xcd";
		gotoxy(i,d);
		cout<<"\xcd";
	}
	for(j=b;j<d;j++)
	{
		gotoxy(a,j);
		cout<<"\xba";
		gotoxy(c,j);
		cout<<"\xba";
	}
		gotoxy(a,b);
		cout<<"\xc9";
		gotoxy(c,b);
		cout<<"\xbb";
		gotoxy(a,d);
		cout<<"\xc8";
		gotoxy(c,d);
		cout<<"\xbc";
}
void cls(){
  cleardevice();
}
void box(){
  line(0,100,600,100);
  line(0,100,0,400);
  line(600,100,600,400);
  line(0,400,600,400);
}
void box1(){
  line(100,340,500,340);
  line(100,380,100,340);
  line(500,380,500,340);
  line(100,380,500,380);
  gotoxy(13,23);
  cout<<"*";
}
class main_menu
{
long int choice,dep_choice,arr_choice,len4,ab,i,speeda3,manage_choice,len1,len2,slogin,gender;
long int nationchoice,a,strle,ans,visacon,nation,login,cpu,about_choice,other_choice;
 char flightcode[10],pnr[20],p[20],ui[20],seatno[5],sflightcode[10],sui[20],name[20],mobile[10],lval[20],cardmon[2],cardyear[2],cvv[3],debit[19],credit[19];
 char surname[10],passportnumber[10],password[20],password1[20],question[20],ansquestion[20],medical[50],passport[8],upi[10],visanumber[17],temp2,user[20],pass3[20];
 FILE *fp,*fi,*ch,*pr,*ur,*pp;
public:
   void mainmenu();
   void slog();
};
void main_menu:: slog()
{
  visacon=1;
  slog:
  cls();
  box();
  gotoxy(2,10);
  cout<<"\t---------------[ Welcome to AKS Airlines ]---------------" ;
  gotoxy(4,11);
  delay(50);
  cout<<"\t\t\t1> Sign Up\t\t2> sign in ";
  gotoxy(2,23);
  delay(50);
  box1();
  cout<<"\t\tEnter your choice  : ";
  cin>>slogin;
    switch(slogin)
  {

     case 1:
	cls();
	box0(7,6,73,22);
	fp= fopen("id.xlsx","a");
	gotoxy(10,12);
	cout<<"ENTER USER ID";
	gotoxy(58,12);
	cout<<"=";
	gotoxy(60,12);
	cin>>ui;
	cls();
	box0(7,6,73,22);
	gotoxy(8,3);
	cout<<"*--------------------0--------------------0--------------------0";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(7,6,73,22);
		fi=fopen(ui,"a");
		gotoxy(10,18);
		cout<<"NOTE: you can't change your name,last name, gender,";
		gotoxy(15,19);
		cout<<" mobile number after signing up.so be careful while";
		gotoxy(15,20);
		cout<<" entering your data";

		gotoxy(10,7);
		cout<<"ENTER YOUR FIRST NAME";
		gotoxy(58,7);
		cout<<"=";
		gotoxy(60,7);
		cin>>name;
		gotoxy(10,9);
		cout<<"ENTER YOUR LAST NAME";
		gotoxy(58,9);
		printf("=");
		gotoxy(60,9);
		cin>>surname;
		gotoxy(10,11);
		cout<<"ENTER GENDER 1.MALE";
		gotoxy(24,12);
		cout<<"2.FEMALE";
		gotoxy(24,13);
		cout<<"3.OTHER";
		gotoxy(58,11);
		cout<<"=";
		gotoxy(60,11);
		cin>>gender;
		gotoxy(10,15);
		mobile:
		cout<<"ENTER YOUR MOBILE NUMBER";
		gotoxy(58,15);
		cout<<"=";
		gotoxy(60,15);
		cin>>mobile;
		ab=strlen(mobile);
		if(ab==10)
		{
			a=1;
			if(gender==1)
			{
				cout<<"\tMALE"<<a<<name<<mobile;
				cout<<"\tMALE"<<ui<<name<<mobile;

			}
			else if(gender==2)
			{
				cout<<"\tFEMALE"<<a<<name<<mobile;
				cout<<"\tFEMALE"<<ui<<name<<mobile;

			}
			else if(gender==3)
			{
				cout<<"OTHER "<<a<<name<<mobile;
				cout<<"OTHER"<<ui<<name<<mobile;
			}

			goto information;
		}
		else
		{
			gotoxy(10,17);
			printf("Enter correct mobile number:");
			goto mobile;
		}


	information:
	cls();
	gotoxy(8,3);
	cout<<"0--------------------*--------------------0--------------------0";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(1,6,80,8);
	gotoxy(2,7);
	delay(50);cout<<" No. Place                                                                 Code";
	box0(1,6,80,21);
	gotoxy(2,9);
	delay(50);cout<<" 1.  Australia.............................................................BNE";
	gotoxy(2,10);
	delay(50);cout<<" 2.  China.................................................................BJS";
	gotoxy(2,11);
	delay(50);cout<<" 3.  Dubai.................................................................DXB";
	gotoxy(2,12);
	delay(50);cout<<" 4.  England...............................................................LHR";
	gotoxy(2,13);
	delay(50);cout<<" 5.  France................................................................CDG";
	gotoxy(2,14);
	delay(50);cout<<" 6.  Germany...............................................................FRA";
	gotoxy(2,15);
	delay(50);cout<<" 7.  India.................................................................BOM";
	gotoxy(2,16);
	delay(50);cout<<" 8.  Japan.................................................................KIX";
	gotoxy(2,17);
	delay(50);cout<<" 9.  Malaysia..............................................................KUL";
	gotoxy(2,18);
	delay(50);cout<<" 10. Singapore.............................................................SIN";
	gotoxy(2,19);
	delay(50);cout<<" 11. United States of America..............................................JFK";
	gotoxy(2,20);
	delay(50);
	box0(1,22,80,24);
	gotoxy(5,23);
	cout<<"ENTER YOUR NATIONALITY: [0-11]: ";
	cin>>nationchoice;
	ch=fopen(ui,"a");
	fp=fopen("id.xlsx","a");
       pass:
      cls();
		gotoxy(10,18);
		cout<<"NOTE: You can't change your passport number";
		gotoxy(15,19);
		cout<<" After signing up. so be careful while entering your data";
	gotoxy(8,3);
	cout<<"0--------------------*--------------------0--------------------0";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(7,6,73,22);
	gotoxy(10,8);
	cout<<"ENTER YOUR PASSPORT NUMBER:[8 char] ";
	gotoxy(58,8);
	cout<<"=";
	ab=nationchoice;
	gotoxy(60,8);
	cin>>passportnumber;
	strle=strlen(passportnumber);
	if(strle==8)
	{
		gotoxy(10,10);
		visa:
		cout<<"DO YOU HAVE AN VISA OF ANY COUNTRY: 1. YES";
		gotoxy(10,11);
		cout<<"                                    2. NO";
		gotoxy(58,10);
		cout<<"=";
		gotoxy(60,10);
		cin>>ab;
		if(ab==1)
		{
		    goto bvisa;
		}
		else if(ab==2)
		{
			 gotoxy(10,14);
			 cout<<"YOU NEED A VISA NUMBER TO PROCEED";
		}

		else
		{
			gotoxy(10,0);
			cout<<"ENTER CORRECT CHOICE";
	}
	}
	else
	{
		cls();
		box0(7,6,73,22);
		gotoxy(10,15);
		cout<<"PLEASE ENTER VALID PASSPORT NUMBER";
		delay(2000);
		goto pass;
	}


	security:
	cls();
	gotoxy(8,3);
	cls();
	gotoxy(8,3);
	cout<<"0--------------------0--------------------*--------------------0";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(7,6,73,22);
        ch=fopen(ui,"a");
	gotoxy(10,8);
	cout<<"SET YOUR PASSWORD";
	gotoxy(58,8);
	cout<<"=";
	gotoxy(60,8);
	cin>>password;
	gotoxy(10,10);
	cout<<"RE-ENTER YOUR PASSWORD";
	gotoxy(58,10);
	cout<<"=";
	gotoxy(60,10);
	cin>>password1;
	ans=1;
	ans=strcmp(password,password1);
	if(ans==0)
	{
		gotoxy(28,12);
		cout<<"SECURITY QUESTION:  MAKE YOUR QUESTION";
		gotoxy(10,14);
		cout<<"WHAT IS YOUR FAVOURITE  ";
		gotoxy(35,14);
		cout<<"=";
		gotoxy(37,14);
		cout<<"___________";
		gotoxy(37,14);
		cin>>question;
		gotoxy(10,16);
		cout<<"ANSWER OF YOUR QUESTION:";
		gotoxy(35,16);
		cout<<"=";
		gotoxy(37,16);
		cout<<"___________";
		gotoxy(37,16);
		cin>>ansquestion;
		goto additional;
	}
	else
	{
		gotoxy(10,12);
		cout<<"ENTER CORRECT PASSWORD:";
		delay(500);
		goto security;
	}


		additional:
		cls();
		gotoxy(10,18);
		cout<<"NOTE: You can't change your medical condition status";
		gotoxy(15,19);
		cout<<" After signing up.so be careful while entering your data";

	gotoxy(8,3);
	cout<<"0--------------------0--------------------0--------------------*";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(7,6,73,22);
        ch=fopen(ui,"a");
	gotoxy(10,8);
	cout<<"DO YOU HAVE ANY MEDICAL CONDITION";
	gotoxy(45,8);
	cout<<"1.YES";
	gotoxy(45,9);
	cout<<"2.NO";
	gotoxy(58,8);
	cout<<"=";
	gotoxy(60,8);
	cin>>ab;
	if(ab==1)
	{
		gotoxy(10,12);
		cout<<"GIVE US SHORT DESCRIPTION ABOUT YOUR MEDICAL CONDITION OR NAME";
		gotoxy(10,13);
		cin>>medical;
		gotoxy(39,18);
		goto payment;
	 }
	 if(ab==2)
	 {
		goto payment;
	 }
	     payment:
	     cls();
	     gotoxy(10,18);
	     cout<<"NOTE: you can't change your credit card no, debit card no and UPI";
	     gotoxy(15,19);
	     cout<<"After signing up. so be careful while entering your data";

	gotoxy(8,3);
	cout<<"0--------------------0--------------------0--------------------*";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(7,6,73,22);
        ch=fopen(ui,"a");
	gotoxy(10,8);
	cout<<"DO YOU WANT TO SAVE YOUR CREDIT CARD / DEBIT CARD / UPI : ";
	gotoxy(42,9);
	cout<<"1. YES";
	gotoxy(42,10);
	cout<<"2. NO";
	gotoxy(42,11);
	cin>>ans;
	if(ans==1)
	{
		bmenu:
		cls();
		gotoxy(8,3);
		cout<<"0--------------------0--------------------0--------------------*";
		gotoxy(5,4);
		cout<<"personal detail    information           security         additional";
		box0(7,6,73,22);
		gotoxy(10,8);
		cout<<"WHAT DO YOU WANT TO SAVE : ";
		gotoxy(35,9);
		cout<<"1.CREDIT CARD";
		gotoxy(35,10);
		cout<<"2.DEBIT CARD";
		gotoxy(35,11);
		cout<<"3.UPI";
		gotoxy(35,12);
		cin>>ab;
		if(ab==1)
		{
			goto creditfun ;
		}
		else if(ab==2)
		{
			goto debitfun;
		}
		else if(ab==3)
		{
			goto upifun;
		}

       else if(ans==2)
	{
		gotoxy(35,12);
		printf("OK NO PROBLEM:");
		delay(1000);
		goto slog;
	}


	   creditfun:
		cls();
		gotoxy(10,18);
		cout<<"NOTE: You can't change your credit card number ";
		gotoxy(10,19);
		cout<<"After signing up. so be careful while entering your data";

			gotoxy(8,3);
			cout<<"0--------------------0--------------------0--------------------*";
			gotoxy(5,4);
			cout<<"personal detail    information           security         additional";
			box0(7,6,73,22);
                        ch=fopen(ui,"a");
			gotoxy(10,8);
			cout<<"ENTER YOUR CREDIT CARD NUMBER";
			gotoxy(48,8);
			cout<<"=";
			gotoxy(50,8);
			cin>>credit;
			ans=strlen(credit);
			if(ans==16)
			{
				creditmon:
				gotoxy(10,10);
				cout<<"MONTH";
				gotoxy(58,10);
				cout<<"=";
				gotoxy(60,10);
				cin>>cardmon;
				ans=strlen(cardmon);
				if(ans==2||ans==1)
				{
					credityear:
					gotoxy(10,12);
					cout<<"YEAR";
					gotoxy(58,12);
					cout<<"=";
					gotoxy(60,12);
					cin>>cardyear;
					ans=strlen(cardyear);
					if(ans==4)
					{
						cvv:
						gotoxy(10,14);
						cout<<"ENTER YOUR CVV";
						gotoxy(58,14);
						cout<<"=";
						gotoxy(60,14);
						cin>>cvv;
						ans=strlen(cvv);
						if(ans==3)
						{

							cls();
							box0(7,2,73,22);
							gotoxy(20,10);
							cout<<"THANK YOU FOR JOINING AKS AIRLINE";
							goto casego;

						}
						else
						{
							gotoxy(10,10);
						cout<<"please Enter correct cvv number";
						goto cvv;
						}
					}
					else
					{
						gotoxy(10,10);
						cout<<"please Enter correct credit card year";
						goto credityear;
					}
				}
				else
					{
					gotoxy(10,10);
					cout<<"please Enter correct credit card number";
					goto creditmon;

				}
			}
			else
			{
				gotoxy(10,10);
				cout<<"please Enter correct credit card number";
				goto creditfun;
			}

		debitfun:
		cls();
		gotoxy(10,18);
		cout<<"NOTE: you can't change your debit card number";
		gotoxy(15,19);
		cout<<" after signing up.so be careful while entering your data";

			gotoxy(8,3);
			cout<<"0--------------------0--------------------0--------------------*";
			gotoxy(5,4);
			cout<<"personal detail    information           security         additional";
			box0(7,6,73,22);
                        ch=fopen(ui,"a");
			gotoxy(10,8);
			cout<<"ENTER YOUR DEBIT CARD NUMBER";
			gotoxy(48,8);
			cout<<"=";
			gotoxy(50,8);
			cin>>debit;
			ans=strlen(debit);
			if(ans==16)
			{
				debitmon:
				gotoxy(10,10);
				cout<<"MONTH";
				gotoxy(58,10);
				cout<<"=";
				gotoxy(60,10);
				cin>>cardmon;
				ans=strlen(cardmon);
				if(ans==2||ans==1)
				{
					debityear:
					gotoxy(10,12);
					cout<<"YEAR";
					gotoxy(58,12);
					cout<<"=";
					gotoxy(60,12);
					cin>>cardyear;
					ans=strlen(cardyear);
					if(ans==4)
					{
						cvvd:
						gotoxy(10,14);
						cout<<"ENTER YOUR CVV";
						gotoxy(58,14);
						cout<<"=";
						gotoxy(60,14);
						cin>>cvv;
						ans=strlen(cvv);
						if(ans==3)
						{

							cls();
							box0(7,2,73,22);
							gotoxy(20,10);
							cout<<"THANK YOU FOR JOINING AKS AIRLINE";
							goto casego;
						}
						else
						{
						gotoxy(10,10);
						cout<<"please Enter correct cvv number";
						goto cvvd;
						}
					}
					else
					{
						gotoxy(10,10);
						cout<<"please Enter correct credit card year";
						goto debityear;
					}
				}
				else
					{
					gotoxy(10,10);
					cout<<"please Enter correct credit card number";
					goto debitmon;

				}
			}
			else
			{
				gotoxy(10,10);
				cout<<"please Enter correct credit card number";
				goto debitfun;
			}

			upifun:
			cls();
			gotoxy(10,18);
			cout<<"NOTE: you can't change your upi after signing up.";
			gotoxy(15,19);
			cout<<"so be careful while entering your data";
			gotoxy(8,3);
			cout<<"0--------------------0--------------------0--------------------*";
			gotoxy(5,4);
			cout<<"personal detail    information           security         additional";
			box0(7,6,73,22);
			 ch=fopen(ui,"a");
			gotoxy(10,10);
			cout<<"DO YOU WANT TO ADD UPI:";
			gotoxy(42,10);
			cout<<"1. YES";
			gotoxy(42,11);
			cout<<"2. NO";
			gotoxy(42,12);
			cin>>a;
			if(a==1)
			{
				upi:
				gotoxy(10,14);
				cout<<"ENTER YOUR MOBILE NUMBER";
				gotoxy(38,14);
				cout<<"=";
				gotoxy(60,14);
				cout<<"@BLANK";
				gotoxy(43,14);
				cin>>upi;
				ab=strlen(upi);
				if(ab==10)
				{
				   cls();
				   box0(7,2,73,22);
				   gotoxy(20,10);
				   cout<<"THANK YOU FOR JOINING AKS AIRLINE";
				   goto casego;
				}
				else
				{
				 gotoxy(10,20);
				cout<<"ENTER VALID NUMBER:";
				goto upi;

				}
			}
	       else if(a==2)
		{
				   cls();
				   box0(7,2,73,22);
				   gotoxy(20,10);
				   cout<<"THANK YOU FOR JOINING AKS AIRLINE";
		}
		else
		{
			gotoxy(20,13);
			printf("PLEASE ENTER CORRECT CHOICE");
			goto payment;
		}
       bvisa:
	cls();
	gotoxy(8,3);
	cout<<"0--------------------*--------------------0--------------------0";
	gotoxy(5,4);
	cout<<"personal detail    information           security        additional";
	box0(1,6,80,8);
	gotoxy(2,7);
	delay(50);cout<<" No. Place                                                                Code";
	box0(1,6,80,21);
	gotoxy(2,9);
	delay(50);cout<<" 1.  Australia.............................................................BNE";
	gotoxy(2,10);
	delay(50);cout<<" 2.  China.................................................................BJS";
	gotoxy(2,11);
	delay(50);cout<<" 3.  Dubai.................................................................DXB";
	gotoxy(2,12);
	delay(50);cout<<" 4.  England...............................................................LHR";
	gotoxy(2,13);
	delay(50);cout<<" 5.  France................................................................CDG";
	gotoxy(2,14);
	delay(50);cout<<" 6.  Germany...............................................................FRA";
	gotoxy(2,15);
	delay(50);cout<<" 7.  India.................................................................BOM";
	gotoxy(2,16);
	delay(50);cout<<" 8.  Japan.................................................................KIX";
	gotoxy(2,17);
	delay(50);cout<<" 9.  Malaysia..............................................................KUL";
	gotoxy(2,18);
	delay(50);cout<<" 10. Singapore.............................................................SIN";
	gotoxy(2,19);
	delay(50);cout<<" 11. United States of America..............................................JFK";
	gotoxy(2,20);
	delay(50);
	box0(1,22,80,24);
	gotoxy(5,23);
	cout<<"ENTER YOUR VISA COUNTRY: [0-11]: ";
	cin>>visacon;
	ch=fopen(ui,"a");
	fp=fopen("userid1.xlsx","w");
	if(visacon>=1&&visacon<=11)
	{
	cout<<visacon;
	if(nationchoice!=visacon)
	{
	cls();
	gotoxy(10,18);
	cout<<"NOTE: You can't change your passport number";
	gotoxy(15,19);
	cout<<" After signing up. so be careful while entering your data";

	gotoxy(8,3);
	cout<<"0--------------------*--------------------0--------------------0";
	gotoxy(5,4);
	cout<<"personal detail    information           security         additional";
	box0(7,6,73,22);
	gotoxy(10,8);
	cout<<"ENTER YOUR VISA NUMBER [8 NUM]: ";
	gotoxy(58,8);
	cout<<"=";
	if(visacon==1)
	{
		gotoxy(60,8);
		cout<<"AUS";
		visacon=1;
	}
	if(visacon==2)
	{
		gotoxy(60,8);
		cout<<"CHI";
		visacon=2;
	}
	if(visacon==3)
	{      	gotoxy(60,8);
		cout<<"DUB";
		visacon=3;
	}
	if(visacon==4)
	{
		gotoxy(60,8);
		cout<<"ENG";
		visacon=4;
	}
	if(visacon==5)
	{
		gotoxy(60,8);
		cout<<"FRA";
		visacon=5;
	}
	if(visacon==6)
	{
		gotoxy(60,8);
		cout<<"GER";
		visacon=6;
	}
	if(visacon==7)
	{
		gotoxy(60,8);
		cout<<"IND";
		visacon=7;
	}
	if(visacon==8)
	{
		gotoxy(60,8);
		cout<<"JAP";
		visacon=8;
	}
	if(visacon==9)
	{
		gotoxy(60,8);
		cout<<"MAL";
		visacon=9;
	}
	if(visacon==10)
	{
		gotoxy(60,8);
		cout<<"SIN";
		visacon=10;
	}
	if(visacon==11)
	{
		gotoxy(60,8);
		cout<<"USA";
		visacon=11;
	}
	gotoxy(63,8);
	cin>>visanumber;
	strle=strlen(visanumber);
	if(strle==8)
	{
		goto security;
	}


}
       else
	{
	gotoxy(5,10);
	cout<<"ENTER RIGHT CHOICE:";
	goto bvisa;
    }
}
case 2:
			casego:
			cls();
			box0(7,2,73,22);
			gotoxy(10,6);
			cout<<"ENTER YOUR USER ID:";
			gotoxy(59,6);
			box0(48,5,70,7);
			gotoxy(50,6);
			cin>>ui;
		      //	fi=fopen(ui,"r");
			if(ui==NULL)
			{
				gotoxy(10,10);
				cout<<"Enter right user id\n";
				goto casego;
			}
			else
			{
				gotoxy(10,9);
				cout<<"ENTER YOUR PASSWORD: \n";
				box0(48,8,70,10);
				gotoxy(50,9);
   while(1)
   {
	temp2=getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			cout<<"\b \b";
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		cout<<"*";
	}
   }
   ab=strcmp(password,password1);
			if(ab==0)
			{       login=1;
				gotoxy(10,12);
					cout<<"NAME               :"<<name;
				gotoxy(10,13);
					cout<<"PASSPORT NUMBER    :"<<passportnumber;
					gotoxy(10,14);
					cout<<"MOBILE NUMBER      :"<<mobile;
					gotoxy(10,15);
					cout<<"GENDER             :"<<gender;
				if(nation==1)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : Australia";
				}
				if(nation==2)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : China";
				}
				if(nation==3)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : Dubai";
				}
				if(nation==4)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : England";
				}
				if(nation==5)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : France";
				}
				if(nation==6)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : Germany";
				}
				if(nation==7)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : India";
				}
				if(nation==8)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : Japan";
				}
				if(nation==9)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : Malaysia";
				}
				if(nation==10)
				{
					gotoxy(10,16);
					cout<<"NATIONALITY        : Singapore";
				}
				if(nation==11)
					{
					gotoxy(10,16);
					cout<<"NATIONALITY        : United States of America";
				}
					gotoxy(10,17);
					cout<<"MEDICAL CONDITION  : "<<medical;

				 if(ans==1)
				 {
					gotoxy(10,18);
					cout<<"CREDIT CARD NUMBER :"<<credit;
				 }
				 else if(ans==2)
				 {
					gotoxy(10,18);
					cout<<"DEBIT CARD NUMBER  :"<<credit;
				 }

				 else if(ans==3)
				 {
					gotoxy(10,18);
					cout<<"UPI                :"<<credit ;

				 }

				if(visacon==1)
				{
					gotoxy(10,19);
					cout<<"VISA NUMBER        : AUS"<<visanumber;
					visacon=1;
				}
				if(visacon==2)
				{
					gotoxy(10,19);
					cout<<"VISA NUMBER        : CHI"<<visanumber;
					visacon=2;
				}
			if(visacon==3)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : DUB"<<visanumber;
				visacon=3;
			}
			if(visacon==4)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : ENG"<<visanumber;
				visacon=4;
			 }
			 if(visacon==5)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : FRA"<<visanumber;
				visacon=5;
			}
			if(visacon==6)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : GER"<<visanumber;
				visacon=6;
			}
			if(visacon==7)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : IND"<<visanumber;
				visacon=7;
			}
			if(visacon==8)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : JAP"<<visanumber;
				visacon=8;
			}
			if(visacon==9)
			{
			gotoxy(10,19);
				cout<<"VISA NUMBER        : MAL"<<visanumber;
				visacon=9;
			}
			if(visacon==10)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : SIN"<<visanumber;
				visacon=10;
			}
			if(visacon==11)
			{
				gotoxy(10,19);
				cout<<"VISA NUMBER        : USA"<<visanumber;
				visacon=11;
			}
			 delay(5000);
			 mainmenu();
		  }

				else
			{
			gotoxy(10,12);
			cout<<"enter correct userid or password";
			goto casego;
			}
	 }

default:
	     cout<<"Invalid choice";
	     goto slog;

	}
     }
  }

void main_menu:: mainmenu()
{
about_choice=0;
other_choice=0;
dep_choice=0;
arr_choice=0;
manage_choice=0;
speeda3=100;
 main_menu:
 cls();
 box();
 delay(150);
 gotoxy(16,9);
 cout<<"1. Book a Flight";
 delay(150);
 gotoxy(48,9);
 cout<<"2. Check In";
 delay(150);
 gotoxy(16,12);
 cout<<"3. Manage Flight";
 delay(150);
 gotoxy(48,12);
 cout<<"4. Check Status";
 delay(150);
 gotoxy(16,15);
 cout<<"5. Account";
 delay(150);
 gotoxy(48,15);
 cout<<"6. About BlankAir";
 delay(150);
 gotoxy(16,18);
 cout<<"7. Other";
 delay(150);
 gotoxy(48,18);
 cout<<"8. Exit";
 delay(150);
 gotoxy(2,23);
 box1();
 cout<<"\t\tEnter Your Choice [1-8]: ";
 cin>>choice;
if (login!=1)
 {
	cls();
	box0(1,6,80,21);
	gotoxy(10,10);
	cout<<"PLEASE SIGH IN TO PROCEED";
	delay(3000);
	slog();
 }

 if(login==1);
 {
 switch(choice)
 {
 case 1:
 departure:
 cls();
 fi=fopen(ui,"a");
 gotoxy(2,8);
 delay(50);
 cout<<"         -----------------[DEPARTURE]-----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  Germany............Frankfurt International Airport.............FRA";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,18);
 delay(50);
 cout<<" 9.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. Singapore..........Changi Airport.............................SIN";
 gotoxy(2,20);
 delay(50);
 cout<<" 11. US.................John F Kennedy International Airport.......JFK";
 gotoxy(2,21);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>dep_choice;
 arrival:
		switch(dep_choice)
		  {
 case 1:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"           ----------------[ ARRIVAL ]-----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  England............Heathrow Airport...........................LHR";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  Germany............Frankfurt International Airport.............FRA";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore..........Changi Airport..............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	  switch(arr_choice)
	   {
		 case 1:
			   strcpy(pnr,p);
			  strcpy(pnr,"BNEBJS");
			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;

			    delay(2000);
			    goto main_menu;
		 case 2:
			   strcpy(pnr,p);
			   strcpy(pnr,"BNEDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:
			    strcpy(pnr,p);
			   strcpy(pnr,"BNELHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:
			  strcpy(pnr,p);
			  strcpy(pnr,"BNECDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			   strcpy(pnr,"BNEFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy(pnr,"BNEBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			   strcpy(pnr,"BNEKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			   strcpy(pnr,"BNEDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			   strcpy(pnr,"BNESIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			   strcpy(pnr,"BNEJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;

	    }
case 2:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"          -----------------[ ARRIVAL ]------------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  England............Heathrow Airport...........................LHR";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  Germany............Frankfurt International Airport............FRA";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore..........Changi Airport..............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			   strcpy(pnr,"BJSBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			   strcpy(pnr,"BJSDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			   strcpy(pnr,"BJSLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy(pnr,"BJSCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			 strcpy( pnr,"BJSFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy (pnr,"BJSBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			  strcpy (pnr,"BJSKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy (pnr,"BJSDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			  strcpy (pnr,"BJSSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			  strcpy (pnr,"BJSJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;
		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;
	     }
case 3:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"          -----------------[ ARRIVAL ]------------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  England............Heathrow Airport...........................LHR";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  Germany............Frankfurt International Airport............FRA";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore..........Changi Airport..............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			  strcpy (pnr,"DXBBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			  strcpy (pnr,"DXBBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			  strcpy (pnr,"DXBLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy (pnr,"DXBCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			  strcpy (pnr,"DXBFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy (pnr,"DXBBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			  strcpy (pnr,"DXBKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy (pnr,"DXBDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			  strcpy (pnr,"DXBSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			  strcpy(pnr,"DXBJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:strcpy(pnr,p);
			   goto departure;

		 default:strcpy(pnr,p);
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }
case 4:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"         ------------------[ ARRIVAL ]------------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  Germany............Frankfurt International Airport............FRA";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore..........Changi Airport..............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA...............John F Kennedy International Airport........JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			  strcpy (pnr,"LHRBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			  strcpy (pnr,"LHRBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			  strcpy (pnr,"LHRDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy (pnr,"LHRCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			  strcpy (pnr,"LHRFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy (pnr,"LHRBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			  strcpy (pnr,"LHRKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy(pnr,"LHRDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			  strcpy (pnr,"LHRSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			  strcpy (pnr,"LHRJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }
case 5:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"            ---------------[ ARRIVAL ]-----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  Germany............Frankfurt International Airport............FRA";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore...........Changi Airport.............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			  strcpy (pnr,"CDGBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			  strcpy (pnr,"CDGBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			  strcpy (pnr,"CDGDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy (pnr,"CDGLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			  strcpy (pnr,"CDGFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy (pnr,"CDGBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			  strcpy (pnr,"CDGKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy (pnr,"CDGDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			  strcpy (pnr,"CDGSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			  strcpy (pnr,"CDGJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }

case 6:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"          ------------------[ ARRIVAL ]-----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore...........Changi Airport.............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			  strcpy( pnr,"FRABNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			  strcpy (pnr,"FRABJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			  strcpy (pnr,"FRADXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy (pnr,"FRALHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			  strcpy (pnr,"FRACDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy (pnr,"FRABOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			  strcpy( pnr,"FRAKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy (pnr,"FRADME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			  strcpy (pnr,"FRASIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			 strcpy  (pnr,"FRAJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }

case 7:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"           ----------------[ ARRIVAL ]----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  Germany............Frankfurt International Airport............FRA";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore.......... Changi Airport.............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			  strcpy (pnr,"BOMBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			 strcpy  (pnr,"BOMBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			 strcpy (pnr,"BOMDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			 strcpy(pnr,"BOMLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			 strcpy(pnr,"BOMCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			  strcpy (pnr,"BOMFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			 strcpy (pnr,"BOMKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy (pnr,"BOMDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			 strcpy ( pnr,"BOMSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			 strcpy  (pnr,"BOMJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }
case 8:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"           -----------------[ ARRIVAL ]---------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  Germany............Frankfurt International Airport............FRA";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore...........Changi Airport.............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			strcpy(pnr,"KIXBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			 strcpy( pnr,"KIXBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			 strcpy(pnr,"KIXDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			 strcpy  (pnr,"KIXLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			 strcpy ( pnr,"KIXCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			 strcpy  (pnr,"KIXFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			 strcpy ( pnr,"KIXBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			 strcpy ( pnr,"KIXDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			 strcpy ( pnr,"KIXSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			 strcpy ( pnr,"KIXJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }
case 9:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"            ---------------[ ARRIVAL ]----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  Germany............Frankfurt International Airport.............FRA";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA.................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			strcpy  ( pnr,"SINBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			 strcpy ( pnr,"SINBJS");
						   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			 strcpy ( pnr,"SINDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy (pnr,"SINLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			  strcpy (pnr,"SINCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			 strcpy ( pnr,"SINFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			 strcpy ( pnr,"SINBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			 strcpy ( pnr,"SINKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			 strcpy(pnr,"SINDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			  strcpy(pnr,"SINJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }
case 10:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"           ----------------[ ARRIVAL ]----------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  Germany............Frankfurt International Airport.............FRA";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,18);
 delay(50);
 cout<<" 9. Singapore..........Changi Airport.............................SIN";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. USA.................John F Kennedy International Airport.......JFK";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			 strcpy(pnr,"DMEBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			 strcpy(pnr,"DMEBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			strcpy(pnr,"DMEDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			  strcpy(pnr,"DMELHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			 strcpy  (pnr,"DMECDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			 strcpy ( pnr,"DMEFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			  strcpy (pnr,"DMEBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			  strcpy(pnr,"DMEKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			 strcpy( pnr,"DMESIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			  strcpy(pnr,"DMEJFK");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;


	     }
case 11:
 cls();
 gotoxy(2,8);
 delay(50);
 cout<<"           ----------------[ ARRIVAL ]------------------";
 box();
 gotoxy(2,9);
 delay(50);
 cout<< " No. Place               Airport                                 Code";
 box();
 gotoxy(2,10);
 delay(50);
 cout<<" 1.  Australia..........Brisbane Airport...........................BNE";
 gotoxy(2,11);
 delay(50);
 cout<<" 2.  China..............Beijing Capital International Airport......BJS";
 gotoxy(2,12);
 delay(50);
 cout<<" 3.  Dubai..............Dubai International Airport................DXB";
 gotoxy(2,13);
 delay(50);
 cout<<" 4.  England............Heathrow Airport...........................LHR";
 gotoxy(2,14);
 delay(50);
 cout<<" 5.  France.............Charles de Gaulle Airport..................CDG";
 gotoxy(2,15);
 delay(50);
 cout<<" 6.  Germany............Frankfurt International Airport.............FRA";
 gotoxy(2,16);
 delay(50);
 cout<<" 7.  India..............Chhatrapati Shivaji International Airport..BOM";
 gotoxy(2,17);
 delay(50);
 cout<<" 8.  Japan..............Kansai International Airport...............KIX";
 gotoxy(2,18);
 delay(50);
 cout<<" 9.  Russia.............Moscow Domodedovo Airport..................DME";
 gotoxy(2,19);
 delay(50);
 cout<<" 10. Singapore..........Changi Airport.............................SIN";
 gotoxy(2,20);
 delay(50);
 cout<<" 0.  To Go Back To Main Menu.";
 box1();
 gotoxy(17,23);
 cout<<"Enter Your Choice [0-11]: ";
 cin>>arr_choice;
	switch(arr_choice)
	   {
	       case 1:strcpy(pnr,p);
			 strcpy(pnr,"JFKBNE");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 2:strcpy(pnr,p);
			strcpy(pnr,"JFKBJS");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 3:strcpy(pnr,p);
			strcpy(pnr,"JFKDXB");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 4:strcpy(pnr,p);
			 strcpy(pnr,"JFKLHR");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 5:strcpy(pnr,p);
			   strcpy(pnr,"JFKCDG");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 6:strcpy(pnr,p);
			   strcpy(pnr,"JFKFRA");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 7:strcpy(pnr,p);
			   strcpy(pnr,"JFKBOM");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 8:strcpy(pnr,p);
			   strcpy(pnr,"JFKKIX");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 9:strcpy(pnr,p);
			   strcpy(pnr,"JFKDME");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 10:strcpy(pnr,p);
			   strcpy(pnr,"JFKSIN");

			   cls();
			   box();
			   gotoxy(10,10);
			   cout<<"YOUR PNR IS :"<<pnr;
			    delay(2000);
			    goto main_menu;
		 case 0:
			   goto departure;

		 default:
			   cout<<"INPUT ERROR. Re-running Arrival Function";
			   goto arrival;
	     }
   case 0:
	   goto main_menu;
  default:
     cout<<"INPUT ERROR. Re-running Arrival Function";
     goto departure;
}
case 2:

 cls();
 boxl(1,6,80,21);
 gotoxy(8,8);
 cout<<"ENTER YOUR FLIGHT CODE";
 gotoxy(10,9);
 cout<<"[Flight code is first 6 digit of you PNR]";
 gotoxy(58,8);
 cout<<"=";

 gotoxy(60,8);
 cin>>flightcode;

 gotoxy(8,10);
 cout<<"ENTER YOUR USERNAME";
 gotoxy(58,10);
 cout<<"=";
 gotoxy(60,10);
 cin>>ui;
 cls();
 box0(2,4,78,21);

 gotoxy(10,5);
 cout<<"A";

 gotoxy(18,5);
 cout<<"B";

 gotoxy(33,5);
 cout<<"C";

 gotoxy(41,5);
 cout<<"D";

 gotoxy(49,5);
 cout<<"E";

 gotoxy(65,5);
 cout<<"F";

 gotoxy(73,5);
 cout<<"G";

 gotoxy(5,7);
 cout<<"1";

 gotoxy(5,10);
 cout<<"2";

 gotoxy(5,13);
 cout<<"3";

 gotoxy(5,16);
 cout<<"4";

 gotoxy(5,19);
 cout<<"5";



 boxl(9,6,12,8);     boxl(16,6,19,8);
 boxl(9,9,12,11);    boxl(16,9,19,11);
 boxl(9,12,12,14);   boxl(16,12,19,14);
 boxl(9,15,12,17);   boxl(16,15,19,17);
 boxl(9,18,12,20);   boxl(16,18,19,20);


 boxl(32,6,35,8);   boxl(40,6,43,8);   boxl(48,6,51,8);
 boxl(32,9,35,11);  boxl(40,9,43,11);  boxl(48,9,51,11);
 boxl(32,12,35,14); boxl(40,12,43,14); boxl(48,12,51,14);
 boxl(32,15,35,17); boxl(40,15,43,17); boxl(48,15,51,17);
 boxl(32,18,35,20); boxl(40,18,43,20); boxl(48,18,51,20);


 boxl(64,6,67,8);   boxl(72,6,75,8);
 boxl(64,9,67,11);  boxl(72,9,75,11);
 boxl(64,12,67,14); boxl(72,12,75,14);
 boxl(64,15,67,17); boxl(72,15,75,17);
 boxl(64,18,67,20); boxl(72,18,75,20);



boxl(2,22,78,24);

 gotoxy(3,23);


 cout<<"ENTER SEAT NUMBER (EX:A1)     :";
 cin>>seatno;
 ab=strlen(seatno);
 if(ab==2)
 {
	 cls();
 for(i=0;i<=4;i++)
 {
  gotoxy(1,10);
  cout<<"              _";
  gotoxy(27,12);
  cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(1,10);
  cout<<"               _";
  gotoxy(27,12);
  cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(1,10);
  cout<<"\n";
  cout<<"                 \\";
  gotoxy(27,12);
  cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(1,10);
  cout<<"\n\n";
  cout<<"                  |";
  gotoxy(27,12);
 cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(1,10);
  cout<<"\n\n\n";
  cout<<"                 /";
  gotoxy(27,12);
 cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(30,10);
  cout<<"\n\n\n";
  cout<<"               _";
  gotoxy(27,12);
 cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(30,10);
  cout<<"\n\n\n";
   cout<<"               _";
  gotoxy(27,12);
 cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(30,10);
  cout<<"\n\n\n";
  cout<<"             \\";
  gotoxy(27,12);
 cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(30,10);
  cout<<"\n\n";
  cout<<"            |";
  gotoxy(27,12);
  cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  cls();
  gotoxy(30,10);
  cout<<"\n";
  cout<<"             /";
  gotoxy(27,12);
 cout<<"WE ARE SENDING YOUR BOARDING PASS BY EMAIL PLEASE WAIT";
  delay(speeda3);
  }
  fi=fopen(pnr,"w");
 cls();
 box0(1,6,80,21);
 gotoxy(17,12);
 cout<<"YOUR BOARDING PASS IS SEND SUCCESSFULLY";
 gotoxy(17,14);
 cout<<"THANK YOU OF CHOOSING AKS Airlines";
 fp=fopen(ui,"r");
 delay(1000);
 goto main_menu;

case 3:
    manage:
     cls();
     gotoxy(10,8);
 cout<<"--------------------[ MANAGE FLIGHT ]------------------- ";
 box0(1,6,80,21);
 gotoxy(10,10);
 cout<<"1. Facilities";
 gotoxy(10,13);
 cout<<"2. Cancel Booking";
gotoxy(10,16);
 cout<<"3. Go Back";
 box0(1,22,80,24);
 delay(150);
 gotoxy(10,23);
 cout<<"Choose from the above: ";
 cin>>manage_choice;
   switch(manage_choice)
 {
   case 1:
  cls();
  gotoxy(10,8);
  cout<<"-------------------[ FACILITIES ]----------------";
   gotoxy(10,10);
  cout<<"1> First Class";
   gotoxy(10,11);
  cout<<" AKS Airlines First Class. The new definition of luxury.";
    gotoxy(10,13);
  cout<<"2> Executive Class";
   gotoxy(10,14);
  cout<<" AKS Airlines Executive Class. A haven for business & leisure \n\ttravellers.";
   gotoxy(10,16);
  cout<<"3> Economy Class";
   gotoxy(10,17);
  cout<<" AKS Airlines Economy Class. For our budget minded travellers.";
  box0(1,6,80,21);
   gotoxy(22,19);
  system("pause");
  delay(3000);
 goto manage;
 case 2:
       cls();
       boxl(1,6,80,21);
       gotoxy(8,8);
       cout<<"ENTER YOUR FLIGHT CODE";
       gotoxy(10,9);
       cout<<"[flight code is first 6 digit of you PNR]";
       gotoxy(58,8);
       cout<<"=";

       gotoxy(60,8);
       cin>>flightcode;
       gotoxy(8,10);
       cout<<"ENTER YOUR USERNAME";
       gotoxy(58,10);
       cout<<"=";
       gotoxy(60,10);
       cin>>ui;
	cls();
       for(i=0;i<=4;i++)
	{
       gotoxy(1,10);
       cout<<"              _";
       gotoxy(27,12);
       cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
       delay(speeda3);
       cls();
       gotoxy(1,10);
       cout<<"               _";
       gotoxy(27,12);
       cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
       delay(speeda3);
       cls();
       gotoxy(1,10);
       cout<<"\n";
       cout<<"                 \\";
       gotoxy(27,12);
      cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
      delay(speeda3);
      cls();
      gotoxy(1,10);
      cout<<"\n\n";
      cout<<"                  |";
      gotoxy(27,12);
      cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
      delay(speeda3);
      cls();
      gotoxy(1,10);
      cout<<"\n\n\n";
      cout<<"                 /";
      gotoxy(27,12);
      cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
      delay(speeda3);
      cls();
      gotoxy(30,10);
      cout<<"\n\n\n";
      cout<<"               _";
      gotoxy(27,12);
      cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
      delay(speeda3);
      cls();
     gotoxy(30,10);
     cout<<"\n\n\n";
     cout<<"               _";
     gotoxy(27,12);
     cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
     delay(speeda3);
      cls();
      gotoxy(30,10);
      cout<<"\n\n\n";
      cout<<"             \\";
      gotoxy(27,12);
      cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
      delay(speeda3);
      cls();
     gotoxy(30,10);
     cout<<"\n\n";
     cout<<"            |";
     gotoxy(27,12);
    cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
    delay(speeda3);
    cls();
    gotoxy(30,10);
    cout<<"\n";
    cout<<"             /";
    gotoxy(27,12);
    cout<<"WE ARE CANCELING YOUR TICKET PLEASE WAIT";
    delay(speeda3);
  }
       cls();
       boxl(1,6,80,21);
       gotoxy(17,12);
       cout<<"YOUR TICKET IS SUCCESFULLY CANCELED";
       delay(1000);
       goto manage;
  case 3:
       goto main_menu;
   }
 case 4:
	status:
	cls();
	 boxl(1,6,80,21);
	 gotoxy(8,8);
	 cout<<"ENTER YOUR FLIGHT CODE";
	 gotoxy(10,9);
	 cout<<"[flight code is first 6 digit of you PNR]";
	 gotoxy(58,8);
	 cout<<"=";

	 gotoxy(60,8);
	 cin>>sflightcode;

	 gotoxy(8,10);
	 cout<<"ENTER YOUR USERNAME";
	 gotoxy(58,10);
	 cout<<"=";
	 gotoxy(60,10);
	 cin>>sui;
	 len1=strlen(sflightcode);
	 len2=strlen(sui);
	 while(i<=len1)
	 {
	 if(sflightcode[i]==flightcode[i])
	 {
	   i++;
	  }
	  else
	  {
	   cls();
	   box0(1,6,80,21);
	   gotoxy(3,10);
	   cout<<"Username or flightcode is wrong please enter correct";
	   goto status;
	  }
	 }
	 cls();
	 box0(1,6,80,21);
	 gotoxy(20,12);
	 date();
	 gotoxy(22,19);
	 delay(2000);
	 goto main_menu;

  case 5:
	 otherfu:
	 cls();
	box0(7,2,73,22);
	delay(200);
	gotoxy(30,8);
	cout<<"1. Change User Info";
	delay(250);
	gotoxy(30,10);
	cout<<"2. LogOut";
	delay(300);
	gotoxy(30,12);
	cout<<"3. Go Back ";
	box0(7,23,73,25);
	delay(300);
	gotoxy(10,24);
	delay(300);
	cout<<"Enter Your Choice [1-3] :   ";
	cin>>a;
	switch(a)
	 {

case 1:
	otherfui:
	cls();
	box0(7,2,73,22);
	delay(200);
	gotoxy(30,10);
	cout<<"1. Change your Password";
	delay(200);
	gotoxy(30,12);
	cout<<"2. Change your Username";
	delay(300);
	gotoxy(30,14);
	cout<<"3. Go Back ";
	box0(7,23,73,25);
	delay(300);
	gotoxy(10,24);
	delay(300);
	cout<<"Enter Your Choice [1-3] :   ";
	cin>>cpu;
	  switch(cpu)
	       {
    case 1:     cls();
		fi=fopen(user,"a");
		box0(7,2,73,22);
		gotoxy(10,6);
		cout<<"your current password is:"<<password;
		gotoxy(10,8);
		cout<<"set your new password";
		gotoxy(60,8);
		cin>>password;
		remove(user);
		pr=fopen(user,"a");
		gotoxy(10,12);
		 cls();
		 box0(7,2,73,22);
		 gotoxy(20,10);
		 cout<<"THANK YOU FOR JOINING AKS AIRLINE";
		fclose(pr);
		goto otherfui;
     case 2:

	cls();
	box0(7,2,73,22);
	pr=fopen(user,"r");
	gotoxy(10,8);
	cout<<"your current user id is:"<<ui;
	gotoxy(10,10);
	cout<<"set your new user id";
	gotoxy(60,10);
	cin>>ui;
	ch=fopen(pass3,"r");
	cls();
	box0(7,2,73,22);
	gotoxy(20,10);
	cout<<"THANK YOU FOR JOINING AKS AIRLINE";
	goto otherfui;
  case 3:
	      goto otherfu;
  default:
	   cout<<"INPUT ERROR. Re-running About Function.";
	   goto otherfui;
		}
  case 2:
	   gotoxy(20,10);
	   cout<<"THANK YOU FOR JOINING AKS AIRLINE";
	   delay(2000);
	   exit(0);
  case 3:
	   goto main_menu;
  default:
	   cout<<"INPUT ERROR. Re-running About Function.";
	   goto otherfui;
	  }

case 6:
 about:
 cls();
 gotoxy(10,8);
 cout<<"-------------------[ ABOUT ]--------------- ";
 box0(1,6,80,21);
 delay(150);gotoxy(10,9);
 cout<<"1. About Us.";
 delay(150);gotoxy(10,12);
 cout<<"2. Services.";
 delay(150);gotoxy(10,15);
 cout<<"3. Go Back To The Main Menu.";
 box0(1,22,80,24);
 delay(150);gotoxy(10,23);
 cout<<"Choose from the above: ";
 cin>>about_choice;
 switch(about_choice)
 {
case 1:
  cls();
  gotoxy(10,8);
  delay(150);cout<<"--------------------[ AKS Airlines ]---------------------";
  box0(1,6,80,21);
  delay(50);gotoxy(2,9);
  cout<<"         AvianAIR is an international aviation group founded in 1995,";
  delay(50);gotoxy(2,10);
  cout<<"          serving millions of passengers with global connections in  ";
  delay(50);gotoxy(2,11);
  cout<<"         over 11 countries.In 2017, it generated about 31.7 Million  ";
  delay(50);gotoxy(2,12);
  cout<<"           USD and had over 40000 hardworking staff members. This    ";
  delay(50);gotoxy(2,13);
  cout<<"          revolutionary idea was started by 4 individuals aspiring   ";
  delay(50);gotoxy(2,14);
  cout<<"          for an inexpensive and luxurious way to travel the world.  ";
  delay(50);gotoxy(2,15);
  cout<<"         When you fly with us, we guarantee that you will experience ";
  delay(50);gotoxy(2,16);
  cout<<"           something unlike ever before. Have a fantastic journey.   ";
  delay(50);gotoxy(2,17);
  cout<<"                       -The AKS Airlines Team                      ";
  delay(7000);
  goto about;

case 2:
  cls();
  gotoxy(10,8);
  delay(150);cout<<"--------------------[ SERVICES ]---------------------";
  box0(1,6,80,21);
  delay(150);gotoxy(10,9);
  cout<<"1> Handicap services like Wheelchairs,";
  delay(150);gotoxy(10,11);
  cout<<"2> Medical Services/Emergency landing,";
  delay(150);gotoxy(10,13);
  cout<<"3> High Security,";
  delay(150);gotoxy(10,15);
  cout<<"4> Personal Information Privacy,";
  delay(150);gotoxy(10,17);
  cout<<"5> In-flight Food & Entertainment.";
  delay(150);gotoxy(10,19);
  cout<<"6> and much more.";
  delay(7000);
  goto about;

case 3:
    goto main_menu;

default:
  cls();
  box0(1,6,80,21);
  gotoxy(10,10);
  cout<<"INPUT ERROR. Re-running About Function.";
  delay(1000);
  goto about;
    }

case 7:
other:
 cls();
 gotoxy(10,8);
 delay(150);cout<<"--------------------[ OTHER ]-------------------";
 box0(1,6,80,21);
 delay(150);gotoxy(10,9);
 cout<<"1. Rules/Disciplines.";
 delay(150);gotoxy(10,13);
 cout<<"2. Contact Us.";
 delay(150);gotoxy(10,17);
 cout<<"3. Go Back To The Main Menu.";
 box0(1,22,80,24);
 delay(150);
 gotoxy(10,23);
 cout<<"Choose from the above: ";
 cin>>other_choice;
    switch(other_choice)
      {
	case 1:
	      cls();
	      gotoxy(10,8);
	      delay(150);cout<<"       ------------------[ RULES ]-----------------";
	      box0(1,6,80,21);
  delay(150);gotoxy(3,9);
  cout<<"As per Government Regulations, all passengers at airports will be frisked   ";
  delay(150);gotoxy(3,10);
  cout<<"and their hand baggage checked by the security staff before boarding the    ";
  delay(150);gotoxy(3,11);
  cout<<"flight.                                                                     ";
  delay(150);gotoxy(3,13);
  cout<<"In case of damaged or lost baggage, the passenger should immediately report ";
  delay(150);gotoxy(3,14);
  cout<<"it to our ground staff on arrival, before leaving the terminal building.    ";
  delay(150);gotoxy(3,16);
  cout<<"The boarding gate closes 25 minutes prior to departing time.Please check the";
  delay(150);gotoxy(3,17);
  cout<<"flight information screen to get the latest updates.                        ";
  delay(150);gotoxy(3,19);
  cout<<"Passengers are requested to co-operate with AKS Airline and the relevant  ";
  delay(150);gotoxy(3,20);
  cout<<"authorities. Have a pleasant flight.                                        ";
  delay(7000);
  goto other;

case 2:
  cls();
  gotoxy(10,8);
  delay(150);cout<<"  ----------------[ CONTACT ]-----------------";
  box0(1,6,80,21);
  delay(150);gotoxy(10,9);
  cout<<"WEBSITE: AKS Airline.com";
  delay(150);gotoxy(10,12);
  cout<<"EMAIL: blank.support@gmail.com , blankair@gmail.com";
  delay(150);gotoxy(10,15);
  cout<<"PHONE: 2889402176";
  delay(5000);
  goto other;

case 3:
  goto main_menu;

default:
  cls();
  box0(1,6,80,21);
  gotoxy(10,10);
  cout<<"INPUT ERROR. Re-running Other Function.";
  delay(1000);
  goto other;
       }
case 8:

     exit (0);
default:
  cls();
  box0(1,6,80,21);
  gotoxy(10,10);
  cout<<"INPUT ERROR. Re-running Other Function.";
  delay(1000);
  goto main_menu;
 }
 }
}
}
int main() {
	main_menu mm;
	mm.slog();
	mm.mainmenu();
	getch();
	closegraph();
}
