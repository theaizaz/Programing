#include<stdio.h>
void print_unpacked_data(unsigned char *data){
printf("first bit is %d\n",(*data & 0x1));
printf("second bit is %d\n",(*data & 0x2));
printf("third bit is %d\n",(*data & 0x4));
printf("forth bit is %d\n",(*data & 0x8));


}
int main(void){
    unsigned char data;
    data = 8;
    print_unpacked_data(&data);
    return 0;
}