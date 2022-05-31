#include <stdio.h> 

int main(){
    char var1 = 'E';
    char *ptr1 = &var1; 

    printf("Content of var1: %c", var1);
    printf("\nAdress of var1: %p", &var1);
    printf("\nPtr1: %p", ptr1);
    printf("\nContent of ptr1: %c", *ptr1);


}