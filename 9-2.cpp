#include<iostream.h>
#include<conio.h>
#include<string.h>

class City
{
     protected:
       char *name;
       int len;
     public:
      City()
      {
	len=0;
	name=new char[len+1];
      }

void getname()
{
   char *s;
   s=new char[30];
   cout << "Enter city name : ";
   cin>>s;
   len=strlen(s);
   name=new char[len+1];
   strcpy(name,s);
}

  void putname()
  {
  cout << "City Name : " << name << endl;
  }
};

int main()
{
 clrscr();

 City *cp[2];
 cp[0] = new City;
 cp[0]->getname();

 cp[1] = new City;
 cp[1]->getname();

 cp[0]->putname();
 cp[1]->putname();
 getch();
 return 0;
}

                                                     
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
