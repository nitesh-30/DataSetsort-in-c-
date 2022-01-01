#include<iostream>
using namespace std;
class DataSet
{
  private:
   int *p;
   int n;
  public:
     DataSet(int n)
     {
         cout<<"Enter your data one by one"<<endl;
       this->n=n;
       p=new int[n];
       for(int i=0;i<n;i++)
       {
         cin>>p[i];
       }
     }
  void print()
  {
    for(int i=0;i<n;i++)
    {
      cout<<p[i];
    }
    cout<<endl;
  }
   void sort2()
   {
     int min;
     for(int i=0;i<n-1;i++)
     {
       for(int j=0;j<(n-1-i);j++)
       {
         if(p[j]<p[j+1])
         {
           min=p[j+1];
           p[j+1]=p[j];
           p[j]=min;
         }
       }
     }
   }
  void sort1()
   {
     int min;
     for(int i=0;i<n-1;i++)
     {
       for(int j=0;j<(n-1-i);j++)
       {
         if(p[j]>p[j+1])
         {
           min=p[j+1];
           p[j+1]=p[j];
           p[j]=min;
         }
       }
     }
   }
   void operator ^(string s)
   {
       if(s=="+")
       {


        cout<<"Your data are sorted in increasing order"<<endl;
        this->sort1();
       }
       else
       {


       cout<<"Your data are sorted in decreasing order"<<endl;
        this->sort2();
       }
   }
};
int main()
{
    cout<<"Enter the no of element you want to enter=";
   int n;
   cin>>n;
   cout<<endl;
   DataSet d1(n),d2(n);
   d1.print();
   d2.print();
   d1^"+";
   d1.print();
    d1^"-";
   d1.print();
   d2^"+";
   d2.print();
   d2^"-";
   d2.print();
}
