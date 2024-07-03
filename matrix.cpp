#include<iostream>
using namespace std;
int main()
{
  int a[10][10],b[10][10],i,j,r1,r2,c1,c2,c[10][10];
  cout<<"enter no.of rows and columns for matrix 1: ";
cin>>r1>>c1;
cout<<"enter values for first matrix: ";
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
 cin>>a[i][j];
}}
cout<<"enter no.of rows and columns for matrix 2: ";
cin>>r2>>c2;
cout<<"enter values for second matrix: ";
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
 cin>>b[i][j];
}}
cout<<"first matrix: "<<endl;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
 cout<<a[i][j]<<"\t";
}
 cout<<endl;}
 cout<<"second matrix: "<<endl;
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
 cout<<b[i][j]<<"\t";
}
  cout<<endl;}
  if(r1==r2&&c1==c2)
  {
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
  c[i][j]=a[i][j]+b[i][j];
}}
cout<<"the addition of two matrix is: "<<endl;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
  cout<<c[i][j]<<"\t";}
 cout<<endl;
}
}
else{
    cout<<"addition not possible";
}
return 0;
}

