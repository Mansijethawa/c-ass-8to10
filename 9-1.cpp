#include<iostream.h>
#include<conio.h>

class Item
{
 int code;
 float price;

 public:
 void getdata(int a, float b)
 {
  code=a;
  price=b;
 }
 void show()
 {
   cout << "Item Code : " << code << endl;
   cout << "Item Price : " << price << endl;
}
};

void main()
{
 clrscr();
 Item *p=new Item[2];
 Item *d=p;
 int x,i;
 float y;
 for(i=0;i<2;i++)
 {
  cout << "Enter code : "; cin >> x;
  cout << "Enter Price : "; cin >> y;
  p->getdata(x,y);
  p++;
}

  for(i=0;i<2;i++)
 {
  cout<<"Item: "; d->show();
  d++;
 }

getch();

}

