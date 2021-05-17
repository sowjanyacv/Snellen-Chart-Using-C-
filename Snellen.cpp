#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void readvalues();
void displaychart();
void calculateresult(int,int);
int main()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
int y;
char ch,name[50];
y=getmaxy()/2;
setcolor(12);
settextstyle(1,0,5);
outtextxy(10,y-30,"Welcome to Visual Acuity Test\n");
settextstyle(1,0,4);
outtextxy(150,y+50,"Press Enter to Continue\n");
ch=cin.peek();
if(ch=='\n')
{
readvalues();
}
getch();
return 0;
}
void readvalues()
{
int gdriver = DETECT,gmode;
int gd1 = DETECT,gm1;
int x,y,age,line;
char name[50];
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
cout<<"Enter Patient's Name\n";
gets(name);
cout<<"Enter Patient's Age\n";
cin>>age;

displaychart();
clrscr();
initgraph(&gd1,&gm1,"C:\\Turboc3\\BGI");
cout<<"\nEnter the no of lines you can read\n";
cin>>line;
cout<<"Name : ";
puts(name);
cout<<"Age : "<<age<<endl;
switch(line)
{
case 0: cout<<"You are considered legally blind\n";break;
case 1: cout<<"Visual Acuity: 20/200\n"; break;
case 2: cout<<"Visual Acuity: 20/100\n"; break;
case 3: cout<<"Visual Acuity: 20/70\n"; break;
case 4: cout<<"Visual Acuity: 20/50\n"; break;
case 5: cout<<"Visual Acuity: 20/40\n"; break;
case 6: cout<<"Visual Acuity: 20/30\n"; break;
case 7: cout<<"Visual Acuity: 20/25\n"; break;
case 8: cout<<"Visual Acuity: 20/20\n"; break;
default: cout<<"Wrong option\n";
}
calculateresult(age,line);
}
void displaychart()
{
int gdriver = DETECT,gmode;
int x,y;
y=getmaxy()/2;
x=getmaxx()/2;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setcolor(15);
settextstyle(0,0,15);
outtextxy(x-47,y-150,"E");
settextstyle(0,0,8);
outtextxy(x-75,y,"F P");
delay(5000);
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
settextstyle(0,0,5);
outtextxy(x-95,y-100,"T O Z");
settextstyle(0,0,4);
outtextxy(x-100,y,"L P E D");
delay(5000);
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
settextstyle(0,0,3);

outtextxy(x-115,y-100,"P E C F D");
settextstyle(0,0,2);
outtextxy(x-100,y,"E D F C Z P");
delay(5000);
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
settextstyle(0,0,2.5);
outtextxy(x-100,y-50,"F E L O P Z D");
settextstyle(0,0,2);
outtextxy(x-120,y,"D E F P O T E C");
delay(5000);
}
void calculateresult(int age,int line)
{
if(age<=4)
{
switch(line)
{
case 1:
case 2:
case 3:
case 4:cout<<"You have Myopia\n";break;
case 5:
case 6:
case 7:
case 8:cout<<"You don't have Myopia\n";break;
default:cout<<"Thank You for using this software\n";break;
}
}
if(age==5)
{
switch(line)
{
case 1:
case 2:
case 3:
case 4:
case 5:cout<<"You have Myopia\n";break;
case 6:
case 7:
case 8:cout<<"You don't have Myopia\n";break;
default:cout<<"Thank You for using this software\n";break;
}
}
if(age>5)
{

switch(line)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:cout<<"You have Myopia\n";break;
case 8:cout<<"You don't have Myopia\n";break;
default:cout<<"Thank You for using this software\n";break;
}
}
}
