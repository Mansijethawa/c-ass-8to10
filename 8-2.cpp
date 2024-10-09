#include<iostream.h>
#include<conio.h>

class Base1
{
  protected:
   int m;

  public:
   void getM(int);
};

class Base2
{
  protected:
    int n;

  public:

    void getN(int);
};

class Derived:public Base1, public Base2
{

  public:
   void show();
};


void Base1::getM(int x)
{
  m=x;
}


void Base2::getN(int x)
{
  n=x;
}

void Derived::show()
{
   cout<<"M="<<m<<endl;
   cout<<"N="<<n<<endl;
   cout<<"M*N="<<m*n<<endl;
}


int main()
{
   Derived d;
   clrscr();
   d.getM(10);
   d.getN(20);
   d.show();
   getch();
   return 0;
}









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                









