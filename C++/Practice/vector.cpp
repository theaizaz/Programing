#include <iostream>
#include <vector>
#include <stdexcept> // Include the header for std::out_of_range
using namespace std;

int main() {

    vector<int> v1(5);
    vector<int>::iterator iter = v1.begin();

    for (int i = 0; i < 5; i++) {
        *iter = i;
        iter++;
    }

    for (int i = 0; i < 5; i++) {
        cout << v1.at(i) << "   ";
    }

    cout << "capacity is " << v1.capacity() << endl;
    cout << "size is     " << v1.size() << endl;
    cout << "max size is " << v1.max_size() << endl;

    try {
        // Try to access an element beyond the vector size
        int value = v1.at(6);
        cout << "Value at index 6: " << value << endl;
    }
    catch (const out_of_range& oor) {
        cerr << "Out of Range error: " << oor.what() << endl;
    }

    return 0;
}
