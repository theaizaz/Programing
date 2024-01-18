#include<iostream>
using namespace std;
void call_by_value(int,int);
void call_by_refre(int*,int*);
int main(){

    int a = 10;
    int b = 20;
    call_by_value(a,b);
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    call_by_refre(&a,&b);
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    return 0;
}
void call_by_value(int a , int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void call_by_refre(int* a , int* b)
{
    cout <<a<<endl<<b<<endl;
    int* temp = a;
    *a = *b;
    *b = *temp;
}