/**
 *      Function pointer pointing to the base address of 
 *      function, where first instruction of that function 
 *      
 *      Syntax:
 *      Declaration:
 *             return_type (*func_ptr)(arg)
 *      Assignment:
 *              our_ptr = &func_ptr;
 *                  or
 *              our_ptr = func_ptr; // direct name will also give you its base address
 * 
 *      Dereferencing:
 *              (*func_ptr)(arg); if we used (our_ptr = &func_ptr);
 *              func_ptr(arg);   if we used (our_ptr = func_ptr);
 */

#include <stdio.h>

int add(int a, int b){return a+b;}

void main(void){
    printf("\nFunction pointer testing\n");

    /* declare func ptr */
    int(*func_ptr)(int,int);
    func_ptr = &add;

    int result = (*func_ptr)(5,5);

    printf("result is %d\n",result);

}