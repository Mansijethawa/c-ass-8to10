#include<iostream.h>
#include<conio.h>
void main()
{
int item[4]={10,8,22,15};
int cost[4]={77,10,22,69};
clrscr();
cout.width(5);
cout<<"Items:";
cout.width(8);
cout<<"Cost";
cout.width(15);
cout<<"Total Value:"<<endl;
int sum=0;
for(int i=0;i<4;i++)
{
cout.width(5);
cout<<item[i];
cout.width(8);
cout<<cost[i];
int value=item[i]*cost[i];
cout.width(15);
cout<<value<<endl;
sum=sum+value;
}
cout<<"Grand Total:"<<endl;
cout.width(2);
cout<<sum<<endl;
getch();
}