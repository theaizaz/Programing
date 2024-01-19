/*
    change size and copy its contents 
*/
#include<iostream>
using namespace std;

int main(){
    int *darr = new int [5];
    int i=0;
    while (i<5)
    {
        darr[i] = i;
        i++;
    }
    // change size
    int *n_darr = new int [10];
    for (auto i = 0; i < 10; i++)
    {
        if (i<5)
        {
            n_darr[i] = darr[i];
        }
        
        else
        {
            n_darr[i] = i;
        }
    }
    delete [] darr;
    for (auto i = 0; i < 10; i++)
    {
        cout<<n_darr[i]<< " ";
    }
    delete [] n_darr;
    
    return 0;
}