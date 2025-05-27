#include<iostream>
using namespace std;
int main()
{

int num1,num2;
cout<<"Enter two numbers\n";
cin>>num1>>num2;
char op;
cout<<"Enter operator'+/-/*'\n";
cin>>op;
if(op == '+')
{
cout<<num1+num2;

}
if(op == '-')
{
cout<<num1-num2;
}
if(op == '*')
{
cout<<num1*num2;
}

return 0;
}
