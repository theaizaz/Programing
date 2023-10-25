#include<iostream>
#include<list>
using namespace std;

void display(list<int> &list1){
    list<int> :: iterator itr;
    for (itr = list1.begin() ; itr != list1.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
}

int main(){
    list<int> list1; // Create an empty list
    list1.push_front(2);
    list1.push_front(3);
    list1.push_front(6);

    // list<int> ::iterator iter = list1.begin();
    // cout<<*iter<< " ";
    // iter++;
    // cout<<*iter<< " ";
    // iter++;
    // cout<<*iter<< " ";

    ////////////////// OR ////////////////////
    list1.sort();
    display(list1);

    list<int> list2(3); // List of 3 Empty nodes
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 23; iter++;
    *iter = 65; iter++;
    *iter = 87; iter++;

    display(list2);
    list2.pop_back(); //pop 87
    display(list2);
    list2.remove(23); // remove 23. if value is not present it will do nothing
    display(list2);

    cout<<"\nList 1 after merging "<<endl;
    list1.merge(list2);
    display(list1); 

    cout<<"\nReverseing list1 "<<endl;
    list1.reverse();
    display(list1); 
    return 0;
}