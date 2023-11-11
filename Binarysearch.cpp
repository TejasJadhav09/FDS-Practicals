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
 
void Bsearch()
{
  l=0;
   h=n-1;
   cout<<"enter the key to search"<<endl;
   cin>>key;

  do
  {
    m=(l+h)/2;
 if(key>a[m])
  l=m+1;
   else if(key==a[m])
    {
    
         cout<<"key is present"; 
        break;
    }
    
    else
    {
        h=m-1;
    
    }}while(l<=h);
  
    if(l>h)
    {
        cout<<"key is absent"<<endl;
    }
}
};
int main()
{
    search obj;
    obj.input();
 
    obj.Bsearch();
    return 0;
}