#include<stdio.h>
#include <stdbool.h>
typedef unsigned char uint8_t;
bool flags[32];
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

void unpack_32_bits(uint8_t data[])
{
    int j =0;
    // for (int l = 0; l < 32; l++)
    // {
    //     printf("%d ",l);
    // }
    printf("\n");   
    for(int i=0; i<4; i++ )
    {   
        for(int k = 7; k>=0; k--)
        {
            printf("%d ",(data[i] & (1<<k) ? 1 : 0));
            flags [j] =data[i] & (1<<k) ? 1 : 0; 
            j++;
        }
        printf("   ");
    }
    printf("\n");
    for (int i = 0; i < 32; i++)
    {
        // printf("%d ",flags[i]);
    }
}

int main(void){
    unsigned char data;
    data = 0x28;
    print_unpacked_data(&data);
    uint8_t arr[] = {0b11001100, 0b10101010, 0b11110000, 0b00001111};
     unpack_32_bits(arr);
    return 0;
}