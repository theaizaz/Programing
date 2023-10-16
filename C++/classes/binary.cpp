/*
    Example of Nesting and Member Function
*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void getData(void);
    void chk_bin(void);
    void display(void);
    void ones_complement(void);
};

void binary ::getData(void)
{
    cout << "Enter a binary number : ";
    cin >> s;
}
void binary :: chk_bin(void)
{
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout <<endl<< "Number is not in binary formate! "<<endl;
            exit(0);
        }

    }
    cout<<"Number is in binary formate..."<<endl;

}

void binary :: ones_complement(void)
{
      chk_bin();
    cout << "Converting into ones complemant..."<<endl;  
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
        
    }
    cout << endl;
}

void binary :: display(void)
{
    for (int i = 0; i < int(s.length()); i++)
    {
        cout<<s.at(i);
    }
    cout << endl;
}

int main()
{

    binary number;
    number.getData();
    
    number.ones_complement();
    number.display();

    return 0;
}