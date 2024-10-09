#include<iostream.h>
#include<conio.h>
class B
{
public:
void display()
{
cout<<"base class display"<<endl;
}
};
class D:public B
{
public:
void display()
{
cout<<"derived class display"<<endl;
}
};
int main()
{
clrscr();
B* b=new D;
D* d=(D*)b;
if(d!=0)
{
cout<<"works"<<endl;
d->display();
}
else
{
cout<<"cast failed"<<endl;
}
getch();
return 0;
}