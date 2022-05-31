#include <stdio.h> 

int main(){
    int var1 = 5; 
    int *ptr1 = &var1;

    printf("Value of var1: %d", var1);
    printf("\nAdress of var1: %p", &var1); 
    printf("\nValue of ptr1: %p", ptr1);
    printf("\nContent of ptr1: %d", *ptr1); 

    var1 = 7; 

    printf("\n\nAfter changing the value for 7:\n\n");

    printf("Value of var1: %d", var1);
    printf("\nContent of ptr1: %d", *ptr1); 

    var1 = 13;

    printf("\n\nAfter changing the value for 13:\n\n");

    printf("Value of var1: %d", var1);
    printf("\nContent of ptr1: %d", *ptr1); 



}