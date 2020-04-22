/* containership */

# include<iostream.h>
# include<conio.h>

class Electronic
{
  public:
  char brand[10];
  int m_year;
};

class Laptop
{
  Electronic e;
  int size,ram,memory;

  public:

  void getdata()
  {
    cout<<"Enter the brand, manufacture year and size of screen,ram,memory of laptop respectivly\n";
    cin>>e.brand>>e.m_year>>size>>ram>>memory;
  }

  void display()
  {
   cout<<"Details of laptop are:\n";
   cout<<"Brand: "<<e.brand<<"\n";
   cout<<"Manufacture year: "<<e.m_year<<"\n";
   cout<<"Screen Size: "<<size<<"\n";
   cout<<"Ram size: "<<ram<<"\n";
   cout<<"Memory: "<<memory<<"\n";
  }
};

void main()
{
  clrscr();
  Laptop l;
  l.getdata();
  l.display();
  getch();
}

