/* To check the number is odd or even */

# include<iostream.h>
# include<conio.h>

class Number
{
  int a,flag;

  public:

  Number(int x)
  {
    a=x;
  }

  void even()
  {
    if(a%2==0)
    flag=0;
    else
    flag=1;
  }

  void display()
  {
    if(flag==0)
    cout<<"The number is even\n";
    else
    cout<<"The number is odd\n";
   }
};

void main()
{
  clrscr();
  int a;
  cout<<"Enter the number \n";
  cin>>a;
  Number num(a);
  num.even();
  num.display();
  getch();
}


