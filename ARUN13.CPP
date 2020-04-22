/* Multilevel inheritance */

# include<iostream.h>
# include<conio.h>

class University
{
  char name[10];
  long int rollno;

  public:
  void getdata_u()
  {
    cout<<"Enter the name and rollno\n";
    cin>>name>>rollno;
  }

  void display_u()
  {
    cout<<"Name: "<<name<<"\n";
    cout<<"Rollno: "<<rollno<<"\n";
  }
};

class Department : private University
{
  int sem,credit;

  public:
  void getdata_d()
  {
    getdata_u();
    cout<<"enter the semester and total credit of student\n";
    cin>>sem>>credit;
  }

  void display_d()
  {
    display_u();
    cout<<"Semester: "<<sem<<"\n";
    cout<<"Total credit: "<<credit<<"\n";
  }
};

class Year : private Department
{
  float percentage;
  char grade;

  public:
  void getdata()
  {
    getdata_d();
    cout<<"Enter the percentage and grade\n";
    cin>>percentage>>grade;
  }

  void display()
  {
    display_d();
    cout<<"Percentage: "<<percentage<<"\n";
    cout<<"Grade: "<<grade<<"\n";
  }
};

void main()
{
  clrscr();
  Year y;
  y.getdata();
  y.display();
  getch();
}


