#include<stdio.h>
#include <string.h>

char str1[7] = "hello\n";
char str2[7] = "Aizaz\n";

void swap(char *str1, char *str2);

void main(void){
    printf("Hello\n");
    printf("str is %s",str1);
    swap(str1,str2);
    printf("str is %s",str1);
}

void swap(char *str1, char *str2){
    char temp[7];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    
}