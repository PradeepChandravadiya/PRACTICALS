#include<iostream>
using namespace std;
class A 
{
private:
  float exp;
  int temp,emp;
public:
  a()
{
  exp=0;
}
void getdata();
void putdata();
};
void A:: getdataA()
{
  cout<<"enter employee experience";endl;
  cin>>exp;
}
void A:: putdataA()
{
  cout<<"Entered employee experience is :"<<endl;
  temp=exp;
  emp=((exp-temp)/2);
  Cout<<"employee experience is"<<temp<<"year and "<<emp<<months.""<< endl;
}
int main()
{
  class A n1;
  n1.getdataA();
  n1.putdataA();
}
