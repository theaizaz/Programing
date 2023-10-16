#include <iostream>
using namespace std;
class test
{
private:
    int num;

public:
    void setData(int a) {
        num = a;
    }
    void getData(void){
        cout << "Value of num is : "<< num<<endl;
    }
};

int main()
{
    test *ptr = new test;
    ptr ->setData(20);  // or *(ptr).setData(20);
    ptr ->getData();
    delete ptr;

    return 0;
}