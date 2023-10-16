/*
    Ambiguity : When a class is inherited from two classes and both the classes have same function name and you call
                that function from the derived class object then there will be an ambiguity to call the function of which class.

                By defult compiler will overwite the inherited function with the function of deriverd class , if that function is present 
                in derived class with same name. 

*/
#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise ho ?"<<endl;
        }
};
class derived : public Base1 , public Base2 {
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }
}; 

int main(){
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    derived d;
    d.greet();

    return 0;
}