#include<iostream.h>
#include<conio.h>
class Animal
{
public:
virtual void sound()
{
cout<<"animal makes a sound."<<endl;
}
};
class dog:public Animal
{
public:
void sound()
{
cout<<"dog barks."<<endl;
}
};
class cat:public Animal
{
public:
void sound()
{
cout<<"cat meows."<<endl;
}
};
int main()
{
Animal *animal1=new dog();
Animal *animal2=new cat();
animal1->sound();
animal2->sound();
getch();
return 0;
}