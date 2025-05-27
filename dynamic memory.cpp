#include<iostream>
using namespace std;
int main()
{

    int *a = new int[5];
    for(int i=0; i<5; i++)
    {
        a[i] = i*5;
    }
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    delete []a;
    return 0;
}
