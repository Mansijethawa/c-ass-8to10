#include<iostream.h>
#include<conio.h>
class Engine
{
public:
void start()
{
cout<<"Engine started"<<endl;
}
};
class Car
{
private:
Engine engine; 
public:
void drive()
{
engine.start(); 
cout << "Car is driving" << endl;
}
};
int main()
{
clrscr();
Car myCar;
myCar.drive(); 
getch();
return 0;
}