#include <iostream>
using namespace std;

class matrix{
int a[10][10],b[10][10],c[10][10],i,j,k,ar,ac,br,bc;
public:
void setdata(){
cout<<"Enter no rows of matrix A"<<endl;
cin>>ar;
cout<<"Enter no column of matrix A"<<endl;
cin>>ac;
cout<<"Enter the element in matrix A"<<endl;
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 cin>>a[i][j];
}
}
cout<<"A matrix is"<<endl;
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 cout<<a[i][j]<<" ";
}
cout<<endl;
}

cout<<"Enter no rows of matrix B"<<endl;
cin>>br;
cout<<"Enter no column of matrix B"<<endl;
cin>>bc;
cout<<"Enter the element in matrix B"<<endl;
for(i=0;i<br;i++)
{
for(j=0;j<bc;j++){
 cin>>b[i][j];
}
}
//print
cout<<"B matrix is"<<endl;
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 cout<<b[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
}
void add(){
if(ar==br && ac==bc){
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 c[i][j]=a[i][j]+b[i][j];
}
}
cout<<"Addition of A and B is"<<endl;
}

cout<<"Additon of A and B matrix is"<<endl;
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 cout<<c[i][j]<<" ";

}
cout<<endl;
}
cout<<endl;
}
void sub(){
if(ar==br && ac==bc){
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 c[i][j]=a[i][j]-b[i][j];
}
}
cout<<"subtraction of A and B is"<<endl;
}

cout<<"subtraction of A and B matrix is"<<endl;
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 cout<<c[i][j]<<" ";
}
cout<<endl;
}
}

void mul(){
if( ac==br ){
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
c[i][j]=0;
for(k=0;k<ac;k++){
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
cout<<"multiplication of A and B matrix is"<<endl;
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++){
 cout<<c[i][j]<<" ";
}
cout<<endl;
}
}

}


};
int main()
{
matrix m;
int c;
while(1)
{
cout<<"menu"<<endl;
cout<<"Enter 1 for addition of matrix" <<endl;
cout<<"Enter 2 for subtraction of matrix" <<endl;
cout<<"Enter 3 for multiplication of matrix" <<endl;

cout<<"Enter your choice"<<endl;
cin>>c;
switch(c)
{
case 1:m.setdata();
       m.add();
       break;
case 2:m.setdata();
       m.sub();
       break;
case 3:m.setdata();
       m.mul();
       break;
}

}
return 0;
}












