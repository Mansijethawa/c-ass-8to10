#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream&currency(ostream&out)
{
out<<"rs.";
return out;
}
ostream&form(ostream&out)
{
out.setf(ios::showpos);
out.setf(ios::showpoint);
out.fill('*');
out.precision(2);
out<<setiosflags(ios::fixed)<<setw(10);
return out;
}
void main()
{
clrscr();
cout<<currency<<form<<4544.33;
getch();
}