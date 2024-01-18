#include<stdio.h>
typedef union {
unsigned int   num;
   unsigned short num1, num2;
}test;
int  main (void){
    printf("hello\n");
    test t;
    t.num = 10;
    printf("After init ...\n");
    printf("value of num  is : %d\n", t.num);
    printf("value of num1 is : %d\n", t.num1);
    printf("value of num2 is : %d\n", t.num2);
    return 0;
}