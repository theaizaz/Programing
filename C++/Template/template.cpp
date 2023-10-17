#include<iostream>
#include <chrono>
using namespace std;
template <class T>
class Vector{
    public:
        int size;
        T *arr;
        Vector(int s): size(s) {
            arr = new T [size];
        }
        T dotProduct(Vector &a){
            T result = 0;
            for (int i = 0; i < size; i++)
            {
                result += a.arr[i] * a.arr[i];   
            }
            return result;
        }
        ~Vector(void){
            delete [] arr;
        }
};


int main(){
    auto start = std::chrono::high_resolution_clock::now();
    Vector <int>v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    cout<< " Dot Product is " << v1.dotProduct(v1) <<endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto diff = end - start;
    std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::milliseconds>(diff).count() << " milliseconds" << std::endl;
    return 0;
}