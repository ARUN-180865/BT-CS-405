# include<iostream.h>
# include<conio.h>

class Addtion
{
  int a,b,sum;

public:
  Addtion(int x,int y)
  {
    a=x;
    b=y;
  }

  void add()
  {
    sum=a+b;
  }

  void display()
  {
    cout<<"The Sum of"<<a<<" and "<<b<<" is:\n"<<sum<<"\n";
  }
};

void main()
{
  clrscr();
  int a,b;
  cout<<"Enter any two number\n";
  cin>>a>>b;
  Addtion num(a,b);
  num.add();
  num.display();
  getch();
}
