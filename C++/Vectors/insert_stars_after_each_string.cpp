#include<iostream>
#include<vector>
using namespace std;
void addStars(vector<string> &v){
    int size = v.size();
    for (int i = 1; i < size*2; i+=2)
    {
        v.insert(v.begin()+i,"*");
    }
}

int main(){
    vector<string> v;
    v.push_back("the");
    v.push_back("quick");
    v.push_back("brown");
    v.push_back("fox");
    int size = int(v.size());
    for (int i = 0; i <size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    addStars(v);
    for (int i = 0; i <int(v.size()); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}