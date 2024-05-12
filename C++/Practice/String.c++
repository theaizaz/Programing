#include <iostream>
#include <string>
#include <vector>

using namespace std;
// static bool SUPPORTED_PIDS_FLAGS[201] = {false};
uint8_t A = 0xAB;
uint8_t B = 0xFF;
uint8_t C = 0xFF;
uint8_t D = 0xAB;
uint8_t E = 0xFF;

uint8_t data[] = {A, B, C, D, E};
uint8_t instant[] = {3,4, 10,15};

vector<int> vec1;
vector<int> inst;

string BT_str;

int main() {
    int j = 1;
    for(int i=0; i<5; i++ )
    { 
        for(int k = 7; k>=0; k--)
        {
            // SUPPORTED_PIDS_FLAGS[j] = data[i] & (1<<k) ? 1 : 0; 
            if(data[i] & (1<<k))
            {
                vec1.push_back(j);
            }
            j++;
        }
    }
    vec1.shrink_to_fit();
    // for (int  i = 0; i < int(vec1.size()); i++)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
   
    for (int i = 0; i < int(vec1.size()); i++)
    {
        cout<<i<<" "<<vec1.at(i)<<"\n";
    }
    cout<<endl<<"checking instant elements\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < int(vec1.size()); j++)
        {
            if (instant[i] == vec1.at(j))
            {
                cout<<vec1.at(j)<<" ";
            }
        }
    }
    return 0;
}
