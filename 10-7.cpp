#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
cout.fill('*');
cout.setf(ios::left,ios::adjustfield);
cout.width(10);
cout<<"Value";
cout.setf(ios::right,ios::adjustfield);
cout.width(15);
cout<<"SQRT_OF_VALUE"<<endl;
cout.fill('.');
cout.precision(4);
cout.setf(ios::showpoint);
cout.setf(ios::showpos);
cout.setf(ios::fixed,ios::floatfield);
for(int i=1;i<=10;i++)
{
cout.setf(ios::right,ios::adjustfield);
cout.width(5);

cout<<i;
cout.setf(ios::right,ios::adjustfield);
cout.width(20);
cout<<sqrt(i)<<endl;
}
cout.setf(ios::scientific,ios::floatfield);
cout<<"\nsqrt(100)="<<sqrt(100)<<endl;
getch();
}