#include <stdio.h>
#define arrSize 10

struct arr{
    char name[arrSize];
};

void getName(struct arr* name);
void printName(struct arr* name);

int main(void){
    struct arr name;
    getName(&name);
    printName(&name);
    
    return 0;
}

void printName(struct arr* name ){
    int i;
    for ( i = 0; name->name[i] != '\0' ; i++)
    {
        printf("%c",name->name[i]);
    }
    printf("\n");
}

void getName(struct arr* name){
    printf("Enter your name : ");
    scanf_s("%9s",name->name, arrSize);
}