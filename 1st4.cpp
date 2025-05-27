#include<iostream>
using namespace std;
bool isPrime(int n){

if(n<=1){
return false;
}
for(int i=2;i<n;i++){
if(n%i == 0)
{
return false;
}
}
{
return true;
}
}
int main()

{

int number;
cout<<"Enter yout number\n";
cin>>number;
if(isPrime(number))
{
cout<<"Preime\n";
}
else
cout<<"Not Prime\n";

for(number=300;number<=500;number++)
{
if(isPrime(number))
cout<<number<<" ";
}

return 0;
}
