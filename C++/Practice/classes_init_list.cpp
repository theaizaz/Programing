#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
        test():a(0),b(0){};
        test(int A,int B) : a(A), b(a+B){};
        void getData(void){
            cout<<"a is : "<<a<<endl;
            cout<<"b is : "<<b<<endl; 
        }
};

int main(){
    test t;
    t.getData();
    test t2(1,2);
    t2.getData();
    return 0;
}