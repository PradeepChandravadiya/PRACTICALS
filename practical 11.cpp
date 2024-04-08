#include<iostream>
using namespace std;
class empexp
{
private:
  float exp,temp;
  int year,month;
public:
  voidgetdata()
  voidputdata()
};
void empexp ::putdata()
{
cout<<"ENTER THE EMPLOYEE DATA"<<endl;
cout<<"Years :";
cin>>year;
cout<<"Month :";
cin>>month;
}
void empexp :: putdata()
{
temp=month/12.0;
exp=year+temp;
cout>>"Employee experience is :"<<exp<<endl;
}
int main()
{
   class empexp n1;
n1.getdata();
n2.getdata();
return 0;
}
