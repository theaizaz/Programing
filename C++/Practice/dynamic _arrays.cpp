#include<iostream>
using namespace std;

int main(){
    int* darr = new int [5];
    for (int i = 0; i < 5; i++)
    {
        darr[i] = i;
    }
    for (auto i = 0; i < 5; i++)
    {
        cout<<darr[i]<<" ";
    }
    delete [] darr;  
    return 0;
}