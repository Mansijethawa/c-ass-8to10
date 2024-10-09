#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
char s[30];
cout<<"enter a string:";
cin.get(s,30);
int len=strlen(s);
for(int i=0;i<len;i++)
{
cout.write(&s[i],1);
cout<<endl;
}
getch();
}