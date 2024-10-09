
#include<iostream.h>
#include<conio.h>
class Student
{
protected:
int rno;
public:
void getNumber(int r)
{
rno=r;
}
void putNumber()
{
cout<<"Roll No:"<<rno<<endl;
}

};
class Test:virtual public Student
{
protected:
float part1, part2;
public:
void getMarks(float m1, float m2)
{
part1=m1;
part2=m2;
}
void putMarks()
{
cout<<"Part1:"<<part1<<endl;
cout<<"Part2:"<<part2<<endl;
}

};
class Sports:public virtual Student
{
protected:
float mark;
public:
void getMark(float m)
{
mark=m;
}
void putMark()
{
cout<<"Sports Mark="<<mark<<endl;
}
};
class Result:public Test, public Sports
{
float total;
public:
void show()
{
total=part1+part2+mark;
putNumber();
putMarks();
putMark();
cout<<"Total Marks:"<<total<<endl;
}
};
void main()
{
Result r;
clrscr();
r.getNumber(1);
r.getMarks(78,65);
r.getMark(88);
r.show();
getch();
}