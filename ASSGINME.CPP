# include<iostream.h>
# include<conio.h>

class Number
{
  int a,b,c,lar;

public:
  Number(int x,int y,int z)
  {
    a=x;
    b=y;
    c=z;
  }

  void largest()
  {
    if((a>b)&&(a>c))
     lar=a;
     else
     if(b>c)
     lar=b;
     else
     lar=c;
   }
   void display()
   {
     cout<<"The Largest Number is:\n"<<lar<<"\n";
   }
};

void main()
{
  clrscr();
  int a,b,c;
  cout<<"Enter any three number\n";
  cin>>a>>b>>c;
  Number num(a,b,c);
  num.largest();
  num.display();
  getch();
}