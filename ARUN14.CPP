/* Hybrid inheritance */

# include<iostream.h>
# include<conio.h>

class Student
{
  protected:
  char name[10];
  long int rollno;
};

class Exam : virtual public Student
{
  protected:
  int sem,e_marks;
};

class Sport : virtual private  Student
{
   protected:
   char game[10];
   int s_marks;
};

class Result : private Exam,private Sport
{
  int f_marks;

  public:
  void getdata()
  {
    cout<<"Enter the name,rollno,semester,sports name and marks of exam and sports respectively\n";

    cin>>name>>rollno>>sem>>game>>e_marks>>s_marks;
  }

  void final()
  {
    f_marks= e_marks+s_marks;
  }

  void display()
  {
    final();
    cout<<"Detail of student: \n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll no: "<<rollno<<"\n";
    cout<<"Semester: "<<sem<<"\n";
    cout<<"Sports: "<<game<<"\n";
    cout<<"Marks in Exam: "<<e_marks<<"\n";
    cout<<"Marks in Sports: "<<s_marks<<"\n";
    cout<<"Final Marks: "<<f_marks<<"\n";
   }
};

void main()
{
  clrscr();
  Result f;
  f.getdata();
  f.display();
  getch();
}