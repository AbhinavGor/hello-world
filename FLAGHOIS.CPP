#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>

void india()
{
	textcolor(BLUE);
	cout<<"\t\t\t";
	textbackground(6);
	cprintf("            ");
	cout<<"\n\t\t\t";
	textbackground(7);
	cprintf("     0      ");
	cout<<"\n\t\t\t";
	textbackground(2);
	cprintf("            ");
	textbackground(0);
}

void main()
{
	clrscr();
	cout<<"\nlets start: ";
	char a;
	cin>>a;

	clrscr();
	cout<<"\n\n\n\n\n\n\n\n";//8
	india();
	delay(100);

	clrscr();
	cout<<"\n\n\n\n\n\n\n";//7
	india();
	delay(100);

	clrscr();
	cout<<"\n\n\n\n\n\n";//6
	india();
	delay(100);

	clrscr();
	cout<<"\n\n\n\n\n";//5
	india();
	delay(100);

	clrscr();
	cout<<"\n\n\n\n";//4
	india();
	delay(100);

	clrscr();
	cout<<"\n\n\n";//3
	india();
	delay(100);

	clrscr();
	cout<<"\n\n";//2
	india();
	delay(100);

	clrscr();
	cout<<"\n";//1
	india();
	delay(100);

	clrscr();//0
	india();
	delay(100);
getch();
}