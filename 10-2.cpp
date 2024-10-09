#include<iostream.h>
#include<conio.h>
int main()
{
const int MAX_LENGTH=100;
char input[MAX_LENGTH];
cout<<"enter line of text:";
cin.getline(input,MAX_LENGTH);
cout<<"you entered:"<<input<<endl;
getch();
return 0;
}
