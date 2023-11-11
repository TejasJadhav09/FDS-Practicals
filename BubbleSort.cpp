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
  void bubble()
  {
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
    if(a[j]>a[j+1])
    {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
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
  obj.bubble();
  obj.display();
  return 0;
  }
  