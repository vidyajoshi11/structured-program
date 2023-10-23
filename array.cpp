#include<iostream>
using namespace std;
class Analysis
{
 int id;
 int res;
 public:
 void setData(int sid,int sres)
 {
 id=sid;
 res=sres;
}
 void display()
{
 cout<<"\t"<<id<<"\t"<<res<<"\n";
}
};
int main()
{
Analysis a[10];
int i;
int sres,sid;
int pass=0;
int fail=0;
 for(i=0;i<10;i++)
{
 cout<<"Enter Student ID : ";
 cin>>sid;
 cout<<"Enter 1 for pass and 2 for Fail : ";
 cin>>sres;
if(sres==1)
pass++;
else
 fail++;
a[i].setData(sid,sres);
}
cout<<"\tID "<<"Result \n";
for(i=0;i<10;i++)
{
a[i].display();
}
cout<<"\tNo of Passed student :\t"<<pass;
cout<<"\tNo of Failed student :\t"<<fail;
if(pass>8)
  cout<<"\n\tRaise Tution..!";
return 0;
}
  
