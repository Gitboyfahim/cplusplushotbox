#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter number: \n";
cin>>n;
int i,fact=1;
for(i=1;i<=n;i++)
{

fact = fact*i;

}
cout<<"factorial is "<<fact;
return 0;
}
