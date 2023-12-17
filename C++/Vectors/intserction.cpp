#include<iostream>
#include<vector>
using namespace std;

void fillWithRandom(vector<int> &v){
    for (int i = 0; i < int(v.size()); i++)
    {
        v[i] = rand();
    }    
}


vector<int> intersection(vector<int> v1 , vector<int> v2){
    // int size = int( ( v1.size() < v2.size() ) ? v1.size() : v2.size() );
    vector<int> v3;
    for (int i = 0; i < int(v2.size()); i++)
    {
        for (int j = 0; j < int(v1.size()); j++)
        {
            if (v2[i]==v1[j])
            {
                v3.push_back(v2[i]);
                break;
            }
            else if(v2[i] < v1[j]){
                break;
            }

        }
        
    }
    return v3;
}

int main(){
    vector<int> v1(10), v2(11),v3;
    
    v1 =  {1,4,8,9,11,15,17,28,41,59};
    v2 =  {4,7,11,17,19,20,23,28,37,59,81};

    v3 = intersection(v1,v2);
    for (int i = 0; i < int(v3.size()); i++)
    {
        cout<<v3[i]<<" ";
    }
    
    return 0;
}