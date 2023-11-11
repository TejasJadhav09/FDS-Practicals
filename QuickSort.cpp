#include <iostream>
using namespace std;

class search
{
public:
int n,i,j,t,a[100];
  void input()
  {
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  cout<<" enter the actual element of array"<<endl;
  
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
  }
  void sort()
  {
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
    }
    }
    }
    void display()
    {
    cout<<"sorted Array is"<<endl;
     for(i=0;i<n;i++)
  {
  cout<<a[i];
  cout<<endl;
  }}};
  int main()
  {
  search obj;
  obj.input();
  obj.sort();
  obj.display();
  return 0;
  }