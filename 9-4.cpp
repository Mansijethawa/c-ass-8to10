#include<iostream.h>
#include<conio.h>
class Base
{
   public:
     int b;
  void show()
  {
    cout << "B = " << b << endl;
  }
};

class Derived : public Base
{
  public:
   int d;
     void show()
      {
	 cout << "B = " << b << endl;
	 cout << "D = " << d << endl;
      }
};


void main()
{
   clrscr();
   Base b1; 
   Base *bptr; 
   bptr=&b1; 
   bptr->b=100;
   cout << "bptr points to base object : " << endl;
   bptr->show();


   Derived d1;
   bptr=&d1;
   bptr->b=200;
   cout << "bptr now points to derived object : " << endl;
   bptr->show();

   Derived *dptr; 
   dptr=&d1;
   dptr->d=300;
   cout << "dptr is derived type pointer : " << endl;
   dptr->show();

   cout << "Using ((Derived *)bptr) " << endl;
   ((Derived *)bptr)->d=400;
   ((Derived *)bptr)->show();

   getch();
}







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











                                                                                
                                                                                
