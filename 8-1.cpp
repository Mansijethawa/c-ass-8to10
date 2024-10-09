#include<iostream.h>
#include<conio.h>
class B
{
  int a;
  public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a();
};


class D : public B
{
  int c;

  public:

  void mul();
  void display();
};


void B ::get_ab(void)
{
 a=5;b=10;
}

int B ::get_a()
{
  return a;
}
void B :: show_a()
{
     cout<<"A="<<a<<endl;
}
void  D :: mul()
{
   c=b*get_a();
}
void D :: display()
{
   cout<<"A="<<get_a() << endl;
  . cout<<"B="<<b  <<endl;
   cout<<"C="<<c<<endl;
}
int main()
{
 clrscr();

 D d;
 d.get_ab();

 d.mul();
 d.show_a();
 d.display();

 d.b=20;
 d.mul();
 d.display();
 getch();
 return 0;
}
