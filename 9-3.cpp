#include <stdio.h>
#include <conio.h>
#include <iostream.h>

class sample
{
   public:
    int a,b;

    void init(int a,int b)
    {
       this->a=a;
       this->b=b;
    }
};

int main()
{
   sample s1;
   s1.init(3,5);
   cout << "a is = " << s1.a << endl;
   cout << "b is = " << s1.b << endl;
   getch();
   return 0;
}
