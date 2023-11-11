#include<iostream>
using namespace std;

class mymatrix
{
  int A[10][10],B[10][10],ar,ac,br,bc;
  public:
  void input();
  void transpose();
  void saddle_point();
};

void mymatrix::input()
{ 
  int i,j;
  cout<<"Enter Order Of A Matrix A = "<<endl;
  cin>>ar>>ac;
  cout<<"Enter All Elements Of Matrix A = "<<endl;
  for(i=0;i<ar;i++)
  {
    for(j=0;j<ac;j++)
   {
      cin>>A[i][j];
    }
  }
  
  cout<<"A Matrix = "<<endl;
  for(i=0;i<ar;i++)
  {
    for(j=0;j<ac;j++)
    {
      cout<<A[i][j]<<"   "; 
    }
    cout<<endl;
  }
}

void mymatrix::transpose()
{
  int i,j;
  
  cout<<"Transpose Of A Matrix = "<<endl;
  for(i=0;i<ac;i++)
  {
    for(j=0;j<ar;j++)
    {
      B[i][j]=A[j][i];
      cout<<B[i][j]<<"   ";
    }
    cout<<endl;
  }
  
};

void mymatrix::saddle_point()
{
  int big[10],small[10],min,max,i,j;
  for(i=0;i<ar;i++)
  {
    big[i]=A[i][0];
      for(j=0;j<ac;j++)
      {
        if(A[i][j]>big[i])
        {
          big[i]=A[i][j];
        }
      }
     } ;
      min=big[0];
      for(i=0;i<ar;i++)
      {
         if(big[i]<min)
         min=big[i];
         };
         
    for(j=0;j<ac;j++)
  {
    small[j]=A[0][j];
      for(i=0;i<ar;i++)
      {
        if(A[i][j]<small[i])
        {
          small[i]=A[i][j];
        }
      }
      }
      
      max=small[0];
      for(j=0;j<ac;j++)
      {
         if(small[j]>max)
         {
         max=small[j];
         }
       }
       
       if(max==min)
       cout<<"Saddle Point Is "<<max<<endl;
       };
int main()
{
  mymatrix M;
  M.input();
  M.transpose();
  M.saddle_point();
}