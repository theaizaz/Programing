/*
    factorial => n! = n * (n-1)!
    eg => 5! = 5 x 4 x 3 x 2 x 1
*/
#include<iostream>
using namespace std;


double factorial(double num)
{
    if(num <= 1) 
    {
        return 1;
    }
    return num * factorial(num-1);
}

int main()
{
    double num = 0;
    cout<<"Enter number to find factorial : ";cin>>num;
    cout<<num<<" factorial is "<<factorial(num)<<endl;
    return 0;
}