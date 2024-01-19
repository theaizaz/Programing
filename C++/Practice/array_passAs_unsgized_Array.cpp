#include<iostream>
using namespace std;
#define numOfelemets(n) int(sizeof(n)/sizeof(n[0]))
void swapArray_by_ref(int a[],int b[])
{
    int temp[5];
    for (int i = 0; i < numOfelemets(temp); i++)
    {
        temp[i] = a[i];
    }
    
    for (int i = 0; i < numOfelemets(temp); i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < numOfelemets(temp); i++)
    {
        b[i] = temp[i];
    }

}
void printElements(int a[]){
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<"   ";
    }
    cout<<endl;
}
int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,0};
    printElements(a);
    printElements(b);

    swapArray_by_ref(a,b);

    printElements(a);
    printElements(b);

    return 0;
}