/*
    Passing class objects to functions
*/
#include<iostream>
using namespace std;

class complex_num
{
private:
    int a,b;
public:
    void setData(int num1,int num2)
    {
        a = num1;
        b = num2;
        printData();
    }
    void addObjects(complex_num o1, complex_num o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        printSumData();
    }

    void printData(void)
    {
        cout << a <<"+"<<b<<"i"<<endl;
    }
    void printSumData(void)
    {
        cout<<"Sum is : "<< a <<"+"<<b<<"i"<<endl;
    }
};



int main(){
    complex_num num1,num2,num3;
    num1.setData(1,2);
    num2.setData(3,4);
    num3.addObjects(num1,num2);
    
    return 0;
}