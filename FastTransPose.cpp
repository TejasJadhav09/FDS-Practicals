#include<iostream>
using namespace std;

class transpose
{
    public:
    int a[10][3],c[10][3],ar,ac,i,j;
    public:
void input()
{  
    cout<<"Enter a size of  matrix  row :";
    cin>>ar;
    cout<<"Enter a size of  matrix  column :";
    cin>>ac;
    cout<<"Enter the matrix element :";
    for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Your A matrix is:"<<endl;
    for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
}
void fasttranspose()
{
int c[10][3],x[10],y[10],n,t;
c[0][0]=a[0][1];
c[0][1]=a[0][0];
c[0][2]=a[0][2];
n=a[0][1],t=a[0][2];
for(i=0;i<n;i++)
{
x[i]=0;
}
for(i=1;i<=t;i++)
{
x[a[i][1]]++;
}
y[0]=1;
for(i=1;i<n;i++)
{
y[i]=y[i-1]+x[i-1];
}
for(i=1;i<=t;i++)
{
j=y[a[i][1]];
c[j][0]=a[i][1];
c[j][1]=a[i][0];
c[j][2]=a[i][2];
y[a[i][1]]++;
}
cout<<"Your transpose matrix is:"<<endl;
    for(i=0;i<ac;i++)
    {
        for(j=0;j<ar;j++)
        {
            cout<<c[i][j]<<" ";
        }
    cout<<endl;
    }
cout<<endl;
}};
int main()
{
transpose obj;
obj.input();
obj.fasttranspose();
return 0;
}