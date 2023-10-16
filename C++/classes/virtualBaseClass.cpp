/*
    Virtual Base Class : It ensures to not occure an Ambiguaty
    When Grand child class (D) use variables/functions of Grand father class (A).

    e.g :  A --> {B,C} --> D
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int marks = 0;

public:
    void SetMarks(int m)
    {
        marks = m;
    }
    void getMarks(void)
    {
        cout << "Your Marks is  : " << marks << endl;
    }
};
class Test : virtual public Student
{
protected:
    int phy, math = 0;

public:
    void SetTest(int p, int m)
    {
        phy = p;
        math = m;
    }
    void GetTest(void)
    {
        cout << "Your phy  marks is :  " << phy << endl
             << "Your math marks is :  " << math << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int cricket = 0;

public:
    void SetCr(int cr)
    {
        cricket = cr;
    }
    void getCr(void)
    {
        cout << "Your Cricket marks is  : " << cricket << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    int total = 0;

public:
    void getTotal(void)
    {
        total = marks + phy + math + cricket;
        getMarks();
        GetTest();
        getCr();
        cout << "Your total marks is  : " << total << endl;
    }
};

int main()
{
    Result Aizaz;
    Aizaz.SetMarks(100);
    Aizaz.SetTest(90, 95);
    Aizaz.SetCr(10);
    Aizaz.getTotal();

    return 0;
}