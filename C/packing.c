#include<stdio.h>
int main(void){
    unsigned char a = 'a';
    unsigned char b = 'b';
    unsigned char c = 'c';
    unsigned char d = 'd';

    unsigned int data=0;
    data =        (unsigned int)a;
    data = data | (unsigned int)b<<8; 
    data = data | (unsigned int)c<<16; 
    data = data | (unsigned int)d<<24; 

    //unpacking
    unsigned char a1,b1,c1,d1; 
    a1 = (unsigned char) data & 0xff;
    b1 = (unsigned char) ((data>>8) & 0xff);
    c1 = (unsigned char) ((data>>16) & 0xff);
    d1 = (unsigned char) ((data>>24) & 0xff);
    return 0;
}