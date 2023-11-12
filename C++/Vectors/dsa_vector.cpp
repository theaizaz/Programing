#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<double> v;

    for (int i = 10; i <= 20; i++)
    {
        v.push_back(i);
    }
    
    for (int i = 0; i < int(v.size()); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    vector<double> :: iterator itr = v.begin();
    for (int i = 0; i < int(v.size()); i++)
    {
        v.erase(itr);
        itr++;
    }
    
    for (int i = 0; i < int(v.size()); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}