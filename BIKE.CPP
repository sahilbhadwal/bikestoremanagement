#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
#include<dos.h>
#define line"컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴"

class GROUP
{
private:
	struct date
	{
		short dd,mm,yy;
	};
	struct BIKE
	{
		char flag,bikecode[5],bikename[20];date rel;
		float cost;
		int stock;
	}B;
	struct EMP
	{
		char flag,job[7],empname[20],empcode[5];
		float salary;
	}E;
public:
	void ADDREC();
	void LISTREC();
	void MODIREC();
	void DELREC();
	void SEARCHREC();
	void EXIT();
};

void main()
{
clrscr();
GROUP G;
char choice;
clrscr();
for(int i=2;i<=80;i++)
{
gotoxy(i,2);
cout<<"*";
}
for(i=2;i<=23;i++)
{
gotoxy(2,i);
cout<<"*";
}
for(i=2;i<=23;i++)
{
gotoxy(80,i);
cout<<"*";
}
for(i=2;i<=80;i++)
{
gotoxy(i,23);
cout<<"*";
}
gotoxy(24,4); textcolor(6+BLINK); cprintf("A PROJECT OF COMPUTER SCIENCE ON: ");
gotoxy(24,6); textcolor(4+BLINK); cprintf("BIKE SHOWROOM MANAGEMENT SYSTEM");
gotoxy(37,10); textcolor(3); cprintf("BY");
gotoxy(28,12); textcolor(4+BLINK); cprintf("  SAHIL BHADWAL & RITIKA");
gotoxy(23,13); textcolor(7+BLINK); cprintf("ROLL NO :    1303211 & 1303204");
gotoxy(23,16); textcolor(5); cprintf("BRANCH:COMPUTER SCIENCE ENGINEERING");
gotoxy(20,19); textcolor(6+BLINK); cprintf("2013-2014");
gotoxy(27,29); textcolor(3); cprintf(" UNDER THE GUIDANCE OF-");
gotoxy(30,31); textcolor(4+BLINK); cprintf(" MISS NANCY");
getch();


{
delay(2000);
clrscr();
for(i=18;i<=62;i++)
{
gotoxy(i,9);
cout<<"*";
}
for(i=20;i<=60;i++)
{
gotoxy(i,10);
cout<<"*";
}
for(i=9;i<=15;i++)
{
gotoxy(20,i);
cout<<"*";
}
for(i=10;i<=14;i++)
{
gotoxy(18,i);
cout<<"*";
}
gotoxy(28,12);
textcolor(4); cprintf("WELCOME TO THE BIKE's WORLD");
for(i=20;i<=60;i++)
{
gotoxy(i,14);
cout<<"*";
}
for(i=18;i<=62;i++)
{
gotoxy(i,15);
cout<<"*";
}
for(i=9;i<=15;i++)
{
gotoxy(60,i);
cout<<"*";
}
for(i=10;i<=14;i++)
{
gotoxy(62,i);
cout<<"*";
}
delay(3000);
clrscr();
delay(1500);
}

{
do
{
textcolor(YELLOW);
clrscr();
gotoxy(5,3);
cout<<line<<endl;
gotoxy(30,4);
cout<<"MAIN MENU"<<endl;
gotoxy(5,5);
cout<<line<<endl;
gotoxy(30,7);
cout<<"1.ADD RECORD"<<endl;
gotoxy(30,9);
cout<<"2.LIST RECORD"<<endl;
gotoxy(30,11);
cout<<"3.MODIFY RECORD"<<endl;
gotoxy(30,13);
cout<<"4.DELETE RECORD"<<endl;
gotoxy(30,15);
cout<<"5.SEARCH RECORD"<<endl;
gotoxy(30,17);
cout<<"0.EXIT"<<endl;
gotoxy(5,20);
cout<<line<<endl;
gotoxy(30,21);
cout<<"ENTER YOUR CHOICE\t:\t";
cin>>choice;
clrscr();
switch(choice)
{
case'1':
	G.ADDREC();
	break;
case'2':
	G.LISTREC();
	break;
case'3':
	G.MODIREC();
	break;
case'4':
	G.DELREC();
	break;
case'5':
	G.SEARCHREC();
	break;
case'0':
	G.EXIT();
	exit(1);
}
}while(choice!=0);
}
}


void GROUP::ADDREC()
{
char c,ch;
do
{
gotoxy(5,6);
cout<<line<<endl;
gotoxy(30,7);
cout<<"ADD RECORD";
gotoxy(5,8);
cout<<line<<endl;
gotoxy(30,10);
cout<<"1.BIKE's RECORD";
gotoxy(30,12);
cout<<"2.EMPLOYEE's RECORD";
gotoxy(30,14);
cout<<"0.EXIT";
gotoxy(5,17);
cout<<line<<endl;
gotoxy(30,18);
cout<<"ENTER YOUR CHOICE \t:\t";
cin>>c;
ofstream file;
clrscr();
switch(c)
{
case '1':
      {
	file.open("has.dat",ios::binary|ios::app);
	do
	{
	gotoxy(5,6);
	cout<<line <<endl;
	gotoxy(30,7);
	cout<<"BIKE's RECORD ";
	gotoxy(5,8);
	cout<<line <<endl;
	cout<<"\n ENTER THE BIKE's CODE \t\t\t\t:\t";
	cin>>B.bikecode;
	cout<<"\n ENTER THE BIKE's NAME \t\t\t\t:\t";
	gets(B.bikename);
	cout<<"\n ENTER THE BIKE's COST \t\t\t\t:\t";
	cin>>B.cost;
	cout<<"\n ENTER THE BIKE's DATE OF RELEASE  \t\t:\t  Day : ";
	cin>>B.rel.dd;
	cout<<"\t\t\t\t\t\t\tMonth : ";
	cin>>B.rel.mm;
	cout<<"\t\t\t\t\t\t\t Year : ";
	cin>>B.rel.yy;
	cout<<"\n ENTER THE STOCK OF BIKE's \t\t\t:\t";
	cin>>B.stock;
	B.flag='o';
	cout<<endl<<line<<endl<<endl;
	file.write((char*)&B,sizeof(B));
	clrscr();
	gotoxy(25,10);
	textcolor(BLUE);
	cprintf("ADD ANOTHER RECORD(Y/N) : ");
	cin>>ch;
	file.close();
	clrscr();
	gotoxy(25,10);textcolor(RED);
	cprintf("RECORD IS ADDED...................");
	getch();
	delay(1500);
	clrscr();
	}while(ch=='y'||ch=='Y');
      };
	break;
case'2':
      {
	file.open("mas.dat",ios::binary|ios::app);
	do
	{
	gotoxy(5,6);
	cout<<line <<endl;
	gotoxy(30,7);
	cout<<"EMPLOYEE's RECORD";
	gotoxy(5,8);cout<<line<<endl;
	cout<<"\n ENTER THE EMP's CODE \t\t\t\t:\t";
	cin>>E.empcode;
	cout<<"\n ENTER THE EMP's JOB \t\t\t\t:\t";
	gets(E.job);;
	cout<<"\n ENTER THE EMP's NAME \t\t\t\t:\t";
	gets(E.empname);
	cout<<"\n ENTER THE EMP's SALARY \t\t\t:\t";
	cin>>E.salary;
	E.flag='o';
	cout<<endl<<line<<endl<<endl;
	file.write((char*)&E,sizeof(E));  clrscr();
	gotoxy(25,10);textcolor(RED);
	cprintf("ADD ANOTHER RECORD/(Y/N)    :   ");
	cin>>ch;
	file.close();
	clrscr();
	gotoxy(25,10);textcolor(RED);
	cprintf("RECORD IS ADDED...................");
	getch();
	delay(1500);
	clrscr();
	}while(ch=='y'||ch=='Y');
      };
	break;
case'0':
	return;
}
}while(c!=0);
}

void GROUP::LISTREC()
{
int j=1,a;
char c;
do
{
gotoxy(5,6);
cout<<line <<endl;
gotoxy(30,7);
cout<<"LIST RECORD";
gotoxy(5,8);
cout<<line<<endl;
gotoxy(30,10);
cout<<"1.BIKE's RECORD ";
gotoxy(30,12);
cout<<"2.EMPLOYEE's RECORD ";
gotoxy(30,14);
cout<<"0.EXIT ";
gotoxy(5,17);
cout<<line<<endl;
gotoxy(30,18);
cout<<"ENTER YOUR CHOICE \t:\t";
cin>>c;
ifstream file;
clrscr();
switch(c)
{
case'1':
     {
       file.open("has.dat",ios::binary);
       cout<<line <<endl;
       cout<<"S.NO."<<"\t"<<setw(3)<<"BIKE CODE"<<setw(14)<<"BIKE NAME \t"<<setw(4)<<"DATE OF RELEASE\t    "<<
       setw(8)<<"BIKE COST  "<<setw(3)<<"   "<<"STOCK"<<endl<<line<<endl;
       //position get pointer at the beginning of the file
       file.seekg(0,ios::beg);
       //so long as the end of file is not reached,
       //read each record & display it
       while(file.read((char*)&B,sizeof(B)))
       {
	 if(B.flag!='*')
	 {
	 cout<<endl<<j++<<"\t"<<setw(4)<<B.bikecode<<setw(14)<<B.bikename<<setw(6)
	 <<"\t"<<B.rel.dd<<"/"<<B.rel.mm<<"/"<<B.rel.yy<<setw(4)
	 <<"\t\t"<<B.cost<<"      "<<setw(3)<<B.stock ;
	 }
       cout<<endl;
       }
       file.close();
       cout<<endl<<"PRESS ANY KEY TO CONTINUE.......";
       getch();
     };
       return;
case'2':
     {
       file.open("mas.dat",ios::binary);
       cout<<line <<endl;
       cout<<"S.NO."<<"\t"<<setw(3)<<"EMPCODE"<<"\t"<<setw(8)<<"     JOB   "<<"\t";
       cout<<setw(14)<<"EMP'S NAME"<<" \t "<<setw(6)<<"SALARY"<<endl<<line<<endl;
       while(file.read((char*)&E,sizeof(E)))
       {
	if(E.flag!='*')
	{
	cout<<endl<<j++<<"\t"<<setw(4)<<E.empcode<<"\t"<<setw(6)<<E.job;
	cout<<"\t"<<setw(14)<<E.empname<<"\t"<<setw(5)<<E.salary;
	}
       cout<<endl;
       }
       file.close();
       cout<<endl<<"PRESS ANY KEY TO CONTINUE.......";
       getch();
     }
       return;
case'0':
       return;
}
}while(c!=0);
}

void GROUP::MODIREC()
{
char c;
char code[5];
do
{
int count=0;
gotoxy(5,6);
cout<<line<<endl;
gotoxy(30,7);
cout<<"MODIFY RECORD";
gotoxy(5,8);
cout<<line<<endl;
gotoxy(30,10);
cout<<"1.BIKE's RECORD";
gotoxy(30,12);
cout<<"2.EMPLOYEE's RECORD";
gotoxy(30,14);
cout<<"0.EXIT";
gotoxy(5,17);
cout<<line<<endl;
gotoxy(30,18);
cout<<"ENTER YOUR CHOICE \t\t:\t";
cin>>c;
fstream file;
delay(2500);
clrscr();
switch(c)
{
case'1':
	{
	file.open("has.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,10);
	textcolor(RED);
	cprintf("ENTER THE BIKE CODE   :    ");
	cin>>code;
	cout<<endl;
	delay(2000);
	clrscr();
	while(file.read((char*)&B,sizeof(B)))
	{
	 if(strcmp(B.bikecode,code)==0)
	 {
	 gotoxy(5,6);
	 cout<<line<<endl;
	 gotoxy(30,7);
	 cout<<"ENTER THE NEW BIKE's RECORD";
	 gotoxy(5,8);
	 cout<<line<<endl;
	 cout<<"\n ENTER THE NEW BIKE's CODE \t\t\t:\t";
	 cin>>B.bikecode;
	 cout<<"\n ENTER THE NEW BIKE's NAME \t\t\t:\t";
	 gets(B.bikename);
	 cout<<"\n ENTER THE BIKE's DATE OF RELEASE  \t\t:\t  Day : ";
	 cin>>B.rel.dd;
	 cout<<"\t\t\t\t\t\t\tMonth : ";
	 cin>>B.rel.mm;
	 cout<<"\t\t\t\t\t\t\t Year : ";
	 cin>>B.rel.yy;
	 cout<<"\n ENTER THE NEW BIKE's DATE OF RELEASE \t\t:\t";
	 cin>>B.rel.dd>>B.rel.mm>>B.rel.yy;
	 cout<<"\n ENTER THE NEW BIKE's COST \t\t\t:\t";
	 cin>>B.cost;
	 cout<<"\n ENTER THE NEW STOCK OF BIKE's \t\t\t:\t";
	 cin>>B.stock;
	 B.flag='o';
	 file.seekp(count*sizeof(B),ios::beg);
	 file.write((char*)&B,sizeof(B));
	 file.close();
	 clrscr();
	 gotoxy(25,10);
	 textcolor(RED);
	 cprintf("RECORD IS MODIFIED...................");
	 getch();
	 delay(1500);
	 return;
	 }
	 else
	 {
	 cout<<"NO BIKE IN FILE WITH THIS CODE \t=\t"<<code;
	 cout<<endl<<endl<<"\n PRESS ANY KEY TO CONTINUE......";
	 getch();
	 file.close();
	 return;
	 }
	}count++;
	};
	return;
case'2':
	{
	file.open("mas.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,10);
	textcolor(RED);
	cprintf("ENTER THE EMPLOYEE CODE   :    ");
	cin>>code;
	cout<<endl;
	delay(2000);
	clrscr();
	while(file.read((char*)&E,sizeof(E)))
	{
	 if(strcmp(E.empcode,code)==0)
	 {
	 gotoxy(5,6);
	 cout<<line<<endl;
	 gotoxy(30,7);
	 cout<<"ENTER THE NEW EMPLOYEE RECORD ";
	 gotoxy(5,8);
	 cout<<line<<endl;
	 cout<<"\nENTER THE NEW EMPLOYEE CODE  \t\t\t\t:\t";
	 cin>>E.empcode;
	 cout<<"\nENTER THE NEW EMPLOYEE JOB  \t\t\t\t:\t";
	 gets(E.job);
	 cout<<"\nENTER THE NEW EMPLOYEE NAME   \t\t\t\t:\t";
	 gets(E.empname);
	 cout<<"\nENTER THE NEW EMPLOYEE SALARY\t\t\t\t:\t";
	 cin>>E.salary;
	 E.flag='o';
	 file.seekp(count*sizeof(E),ios::beg);
	 file.write((char*)&E,sizeof(E));
	 file.close();
	 clrscr();
	 gotoxy(25,10);textcolor(RED);
	 cprintf("RECORD IS MODIFIED...................");
	 getch();
	 delay(1500);
	 return;
	 }
	 else
	 {
	 cout<<"NO EMPLOYEE IN FILE WITH THIS CODE\t=\t"<<code;
	 cout<<endl<<endl<<"\n PRESS ANY KEY TO CONTINUE......";
	 getch();
	 file.close();
	 }count++;
	}
	};
	return;
case'0':
	return;
}
}while(c!=0);
}

void GROUP::DELREC()
{
char c;
char code[5];
int count=0;
do
{
gotoxy(5,6);
cout<<line<<endl;
gotoxy(30,7);
cout<<"DELETE RECORD";
gotoxy(5,8);
cout<<line<<endl;
gotoxy(30,10);
cout<<"1.BIKE RECORD";
gotoxy(30,12);
cout<<"2.EMPLOYEE RECORD";
gotoxy(30,14);
cout<<"0.EXIT";
gotoxy(5,17);
cout<<line<<endl;
gotoxy(30,18);
cout<<"ENTER YOUR CHOICE \t\t:\t";
cin>>c;
fstream file;
delay(2500);
clrscr();
switch(c)
{
case'1':
	{
	file.open("has.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,10);
	textcolor(RED);
	cprintf("ENTER THE BIKE CODE   :   ");
	cin>>code;
	cout<<endl;
	while(file.read((char*)&B,sizeof(B)))
	{
	 if(strcmp(B.bikecode,code)==0)
	 {
	 B.flag='*';
	 file.seekp((count*sizeof(B)),ios::beg);
	 file.write((char*)&B,sizeof(B));
	 file.close();
	 clrscr();
	 gotoxy(25,10);
	 textcolor(RED);
	 cprintf("RECORD IS DELETED....................");
	 getch();
	 delay(1500);
	 return;
	 }
	 else
	 {
	 cout<<endl<<"NO BIKE IN FILE WITH THIS CODE ="<<code;
	 cout<<endl<<endl<<"\n PRESS ANY KEY TO CONTINUE......";
	 getch();
	 file.close();
	 return;
	 }
	} count++;
	};
	return;
case'2':
	{
	file.open("mas.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,10);
	textcolor(RED);
	cprintf("ENTER THE EMPLOYEE CODE  :  ");
	cin>>code;
	cout<<endl;
	while(file.write((char*)&E,sizeof(E)))
	{
	 if(strcmp(E.empcode,code)==0)
	 {
	 E.flag='*';
	 file.seekp((count*sizeof(E)),ios::beg);
	 file.write((char*)&E,sizeof(E));
	 file.close();
	 clrscr();
	 gotoxy(25,10);
	 cout<<"RECORD IS DELETED...................."<<E.flag;
	 getch();
	 delay(1500);
	 return;
	 }
	 else
	 {
	 cout<<endl<<"NO EMPLOYEE WITH THIS CODE = "<<code;
	 cout<<endl<<endl<<"\n PRESS ANY KEY TO CONTINUE......";
	 getch();
	 file.close();
	 return;
	 }
	} count++;
	};
	return;
case'0':
	return;
}
}while(c!=0);
}

void GROUP::SEARCHREC()
{
char c;
char code[5];
int count=0;
do
{
gotoxy(5,6);
cout<<line<<endl;
gotoxy(30,7);
cout<<"SEARCH RECORD";
gotoxy(5,8);
cout<<line<<endl;
gotoxy(30,10);
cout<<"1.BIKE RECORD";
gotoxy(30,12);
cout<<"2.EMPLOYEE RECORD";
gotoxy(30,14);
cout<<"0.EXIT";
gotoxy(5,17);
cout<<line<<"\n";
gotoxy(30,18);
cout<<"ENTER YOUR CHOICE \t\t:\t";
cin>>c;
fstream file;
delay(2500);
clrscr();
switch(c)
{
case'1':
	{
	file.open("show.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,10);
	textcolor(RED);
	cprintf("ENTER THE BIKE CODE  :   ");
	cin>>code;
	cout<<"\n";
	clrscr();
	file.seekg(0,ios::beg);
	while(file.read((char*)&B,sizeof(B)))
	{
	 if(strcmp(B.bikecode,code)==0)
	 {
	 B.flag='o';
	 file.seekp(count*sizeof(B),ios::beg);
	 file.write((char*)&B,sizeof(B));
	 file.close();
	 clrscr();
	 gotoxy(25,10);
	 cout<<"RECORD IS SEARCH...................."<<E.flag;
	 getch();
	 delay(1500);
	 return;
	 }
	 else
	 {
	 cout<<"\n NO BIKE IN FILE WITH CODE\t=\t"<<code;
	 getch();
	 file.close();
	 return;
	 }
	}count++;
	};
	return;
case'2':
	{
	file.open("man.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,10);
	textcolor(RED);
	cprintf("ENTER THE EMPLOYEE CODE  :   ");
	cin>>code;cout<<endl;clrscr();
	file.seekg(0,ios::beg);
	while(file.read((char*)&E,sizeof(E)))
	{
	 if(strcmp(E.empcode,code)==0)
	 {
	 E.flag='o';
	 file.seekp(count*sizeof(E),ios::beg);
	 file.write((char*)&E,sizeof(E));
	 file.close();
	 clrscr();
	 gotoxy(25,10);
	 cout<<"RECORD IS SEARCH...................."<<E.flag;
	 getch();
	 delay(1500);
	 return;
	 }
	 else
	 {
	 cout<<"\n NO EMPLOYEE IN FILE WITH CODE\t=\t"<<code;
	 getch();
	 file.clear();
	 return;
	 }
	}count++;
	};
	return;
case'0':
	return;
}
}while(c!=0);
}

void GROUP::EXIT()
{
return;
}