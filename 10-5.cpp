#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
cout<<"Precision set to 3 digits:"<<endl;
cout.precision(3);
cout.width(10);
cout<<"Value:";
cout.width(15);
cout<<"SQRT_OF_VALUE:"<<endl;
for(int i=1;i<=5;i++)
{
cout.width(8);
cout<<i;
cout.width(13);
cout<<sqrt(i)<<endl;
}
cout<<"\nPrecision set to 5 digits:"<<endl;
cout.precision(5);
cout<<" sqrt(10)="<<sqrt(10)<<endl;
cout.precision(0);
cout<<" sqrt(10)="<<sqrt(10)<<endl;
getch();
}