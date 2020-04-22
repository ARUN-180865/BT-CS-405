/* Multiple inheritance */

# include<iostream.h>
# include<conio.h>

class cse
{
  protected:
  int cse_f,cse_s;
 };

class civil
{
  protected:
  int civil_f,civil_s;
};
class soet: public cse,public civil
{
  int total_f,total_s;
  public:
  void getdata()
  {
    cout<<"Enter the no. of faculty and student of cse and civil dept. respectively\n";
    cin>>cse_f>>cse_s>>civil_f>>civil_s ;
  }

  void total()
  {
    total_f= cse_f+civil_f;
    total_s= cse_s+civil_s;
  }
  void display()
  {
    total();
    cout<<"No of faculty in cse: "<<cse_f<<"\n";
    cout<<"No of students in cse: "<<cse_s<<"\n";
    cout<<"No of faculty in civil: "<<civil_f<<"\n";
    cout<<"No of students in civil: "<<civil_s<<"\n";
    cout<<"Total no of faculty in soet: "<<total_f<<"\n";
    cout<<"Total no of students in soet: "<<total_s<<"\n";
  }
};

void main()
{
  clrscr();
  soet s;
  s.getdata();
  s.display();
  getch();
}
