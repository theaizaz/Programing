/*
    vector<int> vect(2 , 3); // inalize with 3 3
*/
#include<iostream>
#include<vector>

using namespace std;
template <class t>

void display(vector<t> v){
    for (int i = 0; i < int(v.size()); i++)
    {
        // cout<<v[i] << " ";
        // or
        cout<<v.at(i)<< " ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int element, size;
    cout<<"Enter Size of vector : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<i<<"th"<<" element : "; cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    cout<<"Max size  : "<<vec1.size()<<endl;
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 100);
    /*
    This will insert 100 at iter postion, 
    In this case iter(pointer) is pointer to vector begin. 
    */

    display(vec1);
    cout<<"Max size  : "<<vec1.size()<<endl;
    vec1.insert(iter+2, 10, 200);
    /*
    insert 10 copyies at iter+2 (0+2 = 2) position
    */
    display(vec1);
    cout<<"Max size  : "<<vec1.size()<<endl;
    return 0;
}