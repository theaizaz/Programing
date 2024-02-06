#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

uint8_t data[100] = {
    /*Header       Data length     CMD(tx)   vp-adderss    string  */
    0x5A, 0xA5, 0x00, 0x82, 0x15, 0x00
};

int main() {
    string str;
    cin >> ws;
    getline(cin,str);
    int str_lenght = int(str.length());
    cout<<str<<"\nString lenght : "<<str_lenght<<endl;


    int j = 0;
    for (int i = 6; i < (int(str.length())) + 6; i++) {
        data[i] = str[j];
        j++;
    }

     data[2] = static_cast<uint8_t>(str_lenght+3); // Store data length in decimal format

    // Display the data array in hexadecimal format
    for (int i = 0; i < 6 + str_lenght; i++) {
        cout<<"index : "<<i<<" ";
        cout << hex << setfill('0') << setw(2) << int(data[i]) << " "<<endl;
    }

    return 0;
}
