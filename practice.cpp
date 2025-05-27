#include<iostream>
using namespace std;

bool isPrime(int n){

int i;
if(n<=1){
    return false;
}
for(i=2;i<n;i++)
{
    if(n%i == 0)
    {
        return false;
    }
}
return true;

}
int main()
{
    int number;
    cout<<"Enter number: \n";
    cin>> number;
    if(isPrime(number))
    {
        cout<<"Prime\n";
    }
else
    cout<<"Is not prime\n";
for(number=300;number<=500;number++)
{


    if(isPrime(number))
    {
        cout<<number<<" "<<endl;
    }

}

    return 0;
}
