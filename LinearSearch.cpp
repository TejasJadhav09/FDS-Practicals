#include <iostream>
using namespace std;

class search
{
public:
int i,n,key,a[1000],m,l,h;
 void input()
 {

    cout<<"enter the Size  of array"<<endl;
    cin>>n;
    cout<<"enter the actual element of array"<<endl;
    for( i=0;i<n;i++)
    {
      cin>>a[i];
    }
 }
 void Lsearch()
    {
 
   cout<<"enter the key to search"<<endl;
   cin>>key;
   for(i=0;i<n;i++)
   {
    if(key==a[i])
    {
   cout<<"The element is present"<<endl;
   break;
    } } 
    if(i==n)
   {
    cout<<"The element is Absent"<<endl;
   }
   

    }
};
int main()
{
    search obj;
    obj.input();
   obj.Lsearch();
   
    return 0;
}