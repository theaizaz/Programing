/*
    Map: stores data in key values fome
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

void display(map<string, int> &marks)
{
    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
}

int main()
{
    map<string, int> marks;
    marks["Aizaz"] = 100;
    marks["Umar"] = 65;
    marks["jamal"] = 87;
    display(marks);
    cout<<"\nAfter insertion\n";
    marks.insert({"abid", 54});
    display(marks);
    return 0;
}