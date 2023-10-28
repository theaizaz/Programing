#include <stdio.h>

// Define a structure with two integer variables
typedef struct
{
    int month;
    int day;

} birthDay;

// Function prototypes

void printByRefrence(birthDay* person);
void printByValue(birthDay person);


int main(void)
{
    // Declare a variable of type birthDay
    birthDay Aizaz;

    // Assign values to the structure members
    Aizaz.day   = 10;
    Aizaz.month = 12;

    // Call the print function by reference
    printByRefrence(&Aizaz);

    // Call the print function by value
    printByValue(Aizaz);

    return 0;
}

// Function definitions
void printByRefrence(birthDay* person){
    printf("passed by refernce, day   : %d  \n", person->day  );
    printf("passed by refrence, month : %d  \n", person->month);
}

void printByValue(birthDay person){
    printf("\n");
    printf("passed by value, day   : %d  \n",person.day   );
    printf("passed by value, month : %d    ",person.month );
}