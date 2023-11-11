#include<iostream>
using namespace std;

class sparse
{
    public:
    int a[10][3],b[10][3],c[10][3],ar,br,i,j,k;
    public:
void input()
{  
    cout<<"Enter a size of sparse matrix  row :";
    cin>>ar;
    cout<<"Enter a first matrix:";
    for(i=0;i<ar;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //print
cout<<"You enter first matrix as:"<<endl;
    for(i=0;i<ar;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
cout<<endl;
    cout<<"Enter a size of sparse matrix as row:";
    cin>>br;
    cout<<"Enter a second matrix:";
    for(i=0;i<br;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
cout<<"You enter second matrix as:"<<endl;
    for(i=0;i<br;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
    cout<<endl;
    }
cout<<endl;
}

// addition function
void add()
{
int c[10][3],i=1,j=1,k=1;
c[0][0]=a[0][0];
c[0][1]=a[0][1];
while (i<=a[0][2] && j<=b[0][2])
{
if (a[i][0]==b[j][0])
{
if(a[i][1]==b[j][1])
{
c[k][0]=a[i][0];
c[k][1]=a[i][1];
c[k][2]=a[i][2]+b[j][2];
i++,j++,k++;
}
else if (a[i][1]<b[j][1])
{
c[k][0]=a[i][0];
c[k][1]=a[i][1];
c[k][2]=a[i][2];

i++,k++;
}
else
{
c[k][0]=b[j][0];
c[k][1]=b[j][1];
c[k][2]=b[j][2];
j++,k++;
}
}

else if (a[i][0]<b[j][0])
{
c[k][0]=a[i][0];
c[k][1]=a[i][1];
c[k][2]=a[i][2];
k++,i++;
}
else
{
c[k][0]=b[j][0];
c[k][1]=b[j][1];
c[k][2]=b[j][2];
k++,j++;
}
}
while(i<=a[0][2])
{
c[k][0]=a[i][0];
c[k][1]=a[i][1];
c[k][2]=a[i][2];
i++,k++;

}
while(j<=b[0][2])
{
c[k][0]=b[j][0];
c[k][1]=b[j][1];
c[k][2]=b[j][2];
k++,j++;
}
c[0][2]=k-1;

   

cout<<"matrix addition is:"<<endl;

    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
    cout<<endl;
    }

}};
int main()
{
sparse obj;
obj.input();
obj.add();


    return 0;
}