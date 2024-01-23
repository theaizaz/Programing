#include<stdio.h>
void print_unpacked_data(unsigned char *data){
printf("first   bit is %d\n",(*data & 0x1));
printf("second  bit is %d\n",(*data & 0x2));
printf("third   bit is %d\n",(*data & 0x4));
printf("forth   bit is %d\n",(*data & 0x8));

printf("fifth   bit is %d\n",(*data & 0x10));
printf("sixth   bit is %d\n",(*data & 0x20));
printf("seventh bit is %d\n",(*data & 0x40));
printf("eight   bit is %d\n",(*data & 0x80));



}
int main(void){
    unsigned char data;
    data = 0x28;
    print_unpacked_data(&data);
    return 0;
}