#include <stdio.h>
#include <stdint.h>

#define SIZE 5

uint8_t arr1[SIZE];
uint8_t arr2[SIZE];

void print_arr(uint8_t *ptr, uint8_t size);
void _swap(uint8_t *ptr1, uint8_t *ptr2, uint8_t size);

int main(void) {
    printf("**** Swap arrays ****\n");
    
    /* Fill arr1 from user */
    for (uint8_t idx = 0; idx < SIZE; idx++) {
        printf("Enter number for arr1, index %d: ", idx);
        scanf("%hhu", &arr1[idx]);
    }

    /* Fill arr2 from user */
    for (uint8_t idx = 0; idx < SIZE; idx++) {
        printf("Enter number for arr2, index %d: ", idx);
        scanf("%hhu", &arr2[idx]);
    }

    printf("Before swap\n");
    printf("arr1: ");
    print_arr(arr1, SIZE);
    printf("arr2: ");
    print_arr(arr2, SIZE);

    _swap(arr1, arr2, SIZE);

    printf("After swap\n");
    printf("arr1: ");
    print_arr(arr1, SIZE);
    printf("arr2: ");
    print_arr(arr2, SIZE);

    return 0;
}

void print_arr(uint8_t *ptr, uint8_t size) {
    for (uint8_t i = 0; i < size; i++) {
        printf("%d\t", ptr[i]);
    }
    printf("\n");
}

void _swap(uint8_t *ptr1, uint8_t *ptr2, uint8_t size) {
    uint8_t temp;
    for (uint8_t i = 0; i < size; i++) {
        temp = ptr1[i];
        ptr1[i] = ptr2[i];
        ptr2[i] = temp;
    }
}
