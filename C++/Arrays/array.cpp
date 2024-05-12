#include<iostream>
using namespace std;
int lifo[5] = {0};
static int index = 0;

// inserting

void insert( uint16_t data )
{
    if(index == 4)
    {
       index = 0;
       cout<<"index is full resetting now!.."<<endl; 
    }
    else
    {
        lifo[index] = data;
        index++;
    }
}
 // reading
 // Reading from the lifo
void read()
{
    if(index == 0)
    {
        cout << "Lifo is empty!" << endl;
    }
    else
    {
        cout << "index : " << index;
        cout << " Reading from lifo: " << lifo[index - 1] << endl;
        index--;
    }
}

int main(){

    insert(10);
    insert(20);
    insert(30);

    insert(80);
    
    read();// 80
    read();// 30
    read();// 20
    read();// 10
    read();
    read();
    insert(80);
    read();
    read();
       insert(20);
    insert(30);

    insert(80);
       insert(20);
    insert(30);

    insert(80);
    return 0;
}