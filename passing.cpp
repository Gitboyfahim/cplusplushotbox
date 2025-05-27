#include<iostream>
using namespace std;
void pass(int a,int *p,int &x){



int **q = &p;
cout<<"Inside main "<<endl<<endl;
cout<<"value of a "<<a<<endl;
cout<<"Adress of a "<<&a<<endl;
cout<<"Value of p "<<p<<endl;
cout<<"Adress of x "<<&x<<endl;
cout<<"Access a through p "<<*p<<endl;


}
int main(){
int a = 100;
int *p = &a;

int **q = &p;
cout<<"Inside main "<<endl<<endl;
cout<<"value of a "<<a<<endl;
cout<<"Adress of a "<<&a<<endl;
cout<<"Value of p "<<p<<endl;
cout<<"Adress of p "<<&q<<endl;
cout<<"Access a through p "<<*p<<endl;
pass(a,p,a);
return 0;

}
