/* To display the element of an array */

# include<iostream.h>
# include<conio.h>

class Array
{
  int a,list[];

  public:
  Array(int x)
  {
   a=x;
  }
  void getdata();
  void display();
};

  void Array:: getdata()
  {
    cout<<"Enter the elements in array\n";
    for(int i=0;i<a;i++)
    {
      cin>>list[i];
    }
   }

  void Array::display()
  {
   cout<<"Elements in Array\n";
     for(int i=0;i<a;i++)
     {
       cout<<list[i]<<" ";
     }
   }


 void main()
 {
   clrscr();
   int n;
   cout<<"Enter the size of array\n";
   cin>>n;
   Array l(n);
   l.getdata();
   l.display();
   getch();
 }
