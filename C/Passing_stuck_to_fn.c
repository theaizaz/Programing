#include <stdio.h>
#include <stdint.h>

/* With Padding */
// typedef struct 
// {
//     uint32_t model   ;
//     uint16_t engine  ;
// }car_t;

/* No padding */
// #pragma pack(1)
// typedef struct {
//     uint8_t model   ;  // 1 byte
//     uint32_t engine ; // 4 bytes
// } car_t;   // Total: 5 bytes (no padding).
// #pragma pack()

/* using bit fields*/
#pragma pack(1)
typedef struct {
    uint8_t model   :2;  // 2 bit
    uint32_t engine :3; // 3 bits
} car_t;   // Total: 1 byte (no padding).
#pragma pack()

/* aligned to a 4-byte boundary, regardless of the natural alignment requirements of its members. */
// typedef struct __attribute__((aligned(4))) {
//     uint8_t model;  // 1 byte
//     uint32_t engine; // 4 bytes
// } car_t;  

/* function */
void display_struct_using_ptr(const car_t *ptr){
    printf("size of struct  : %ld    bytes\n",sizeof(*ptr));
    printf("model is        : %b   binary\n",ptr->model);
    printf("engine is       : %b    binary\n",ptr->engine);

}


int main(void) {
    printf("first run!\n");
    car_t BMW, Mercerize;
    car_t *ptr = &BMW; /* ptr of type car_t */

    /* filling struct using ptr */
    ptr->model = 0b11; /* dummy values */
    ptr->engine = 0b00;
    printf("size of struct : %ld bytes\n",sizeof(BMW));
    display_struct_using_ptr(ptr);
    return 0;
}