#include<iostream>
using namespace std;
int main()
{
    int **p = new int*[5];
    for(int i=0;i<5;i++)
    {

        p[i] = new int[5];

    }
        for(int i=0;i<5;i++)
        {
           for(int j=0;j<5;j++)
           {
               p[i][j] = i+j;
           }
        }
        for(int i=0;i<5;i++)
        {
           for(int j=0;j<5;j++)
           {
               cout<<p[i][j]<<" ";
           }
        cout<<endl;
        }

    return 0;
}
