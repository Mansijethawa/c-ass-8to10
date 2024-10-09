
#include<iostream.h>
#include<conio.h>
class alpha
{
int x;
public:
alpha(int i)
{
x=i;
cout<<"alpha intialized:";
}
void showx()
{
cout<<"x="<<x<<endl;
}
};
class beta
{
float y;
public:
beta(float j)
{
y=j;
cout<<"beta intialized:";
}
void showy()
{
cout<<"y="<<y<<endl;
}
};
class gamma:public beta,public alpha
{
int m,n;
public:
gamma(int a,float b,int c,int d):alpha(a),beta(b)
{
m=c;
n=d;
cout<<"gamma intialized:";
}
void showmn()
{
cout<<"m="<<m<<"n="<<n<<endl;
}
};
void main()
{
clrscr();
gamma g(5,10.5,20,100);
g.showx();
g.showy();
g.showmn();
getch();
}