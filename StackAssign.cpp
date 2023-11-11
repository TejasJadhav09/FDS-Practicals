#include <iostream>
using namespace std;
int main()
{
int i;
char e[10];
int top=-1;
cout<<"enter the expression"<<endl;
cin>>e;
for(i=0;e[i]!='\0';i++)
{
if(e[i]=='(')
{
top++;
}
else if(e[i]==')')
{
top--;
}
}
if(top==-1)
{
cout<<"valid"<<endl;
}
else
{
cout<<"not valid"<<endl;
}
return 0;
}