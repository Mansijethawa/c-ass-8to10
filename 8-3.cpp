#include<iostream.h>
#include<conio.h>
class Student
{
 protected:
  int rno;

 public:
  void getNumber(int);
  void putNumber();
};

void Student::getNumber(int x)
{
  rno=x;
}

void Student::putNumber()
{
   cout<<"Roll number:"<<rno<<endl;
}


class Test:public Student
{
  protected:
    float sub1, sub2;

  public:
       void getMarks(float, float);
       void putMarks();
};


void Test::getMarks(float a, float b)
{
   sub1=a;
   sub2=b;
}


void Test::putMarks()
{
	cout<<"Subject 1:"<<sub1<<endl;
	cout<<"Subject 2:"<<sub2<<endl;
}

class Result:public Test
{
   float total;
   public:
     void show();
};

void Result::show()
{
     total=sub1+sub2;
     putNumber();
     putMarks();
     cout<<"Total:"<<total<<endl;
}

int main()
{
  Result r;
  clrscr();
  r.getNumber(10);
  r.getMarks(78,87);
  r.show();
  getch();
  return 0;
}

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
