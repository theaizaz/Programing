/*
    Cones:
        dont us for large recursive computation it might cause stack over flow.
    factorial  n!  =  n * (n-1)!
            
            5! = 5 * 4 * 3 * 2 * 1 
*/


#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int num = 0;
    cout << "Enter a number to find factorial : ";
    cin >> num;
    cout<<"The factorial of "<<num<<" is  : "<<factorial(num)<<endl;
    
    return 0;
}
int factorial (int num)
{
    if (num<=1)
    {
        return 1;
    }
    
    return num * factorial(num-1);
}