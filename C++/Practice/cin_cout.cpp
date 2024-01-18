#include<iostream>
using namespace std;

int main(){
   cout<< "Hello words!\n"<<endl;
   int a,b;
   cout<<"Enter two numbers\t: ";cin>>a>>b;
   if (a>b)
        cout<<"a > b \n";
   else if (a == b)
        cout<<"a == b \n";
   else
        cout<<"a < b \n";

    return 0;
}