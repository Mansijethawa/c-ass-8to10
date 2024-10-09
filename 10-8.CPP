#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
    float PI = 3.14;
    int num = 100;
    cout << "Entering a new line." << endl;
    cout << setw(10) << "Output" << endl;
    cout << setprecision(10) << PI << endl;
    cout << setbase(16) << num << endl;
getch();
return 0;
}