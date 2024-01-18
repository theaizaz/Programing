#include<iostream>
using namespace std;

int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter "<<i<<" element : ";
        cin>>a[i];
    }
    for (int i = 0; i < 5; i++) 
    {
        cout<<a[i]<<"\t";
    }
    
    cout<<"\nSize of array is : "<<sizeof(a)/sizeof(a[0]);
    return 0;
}