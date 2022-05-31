#include <stdio.h> 

int main(){
    int var1, var2; 
    int *ptr1 = &var1, *ptr2 = &var2;

    printf("First number: ");
    scanf("%d", ptr1);
    printf("Second number: ");
    scanf("%d", ptr2);

    printf("\nBasic arithmetic operations:\n\n");

    printf("%d + %d = %d", *ptr1, *ptr2, (*ptr1) + (*ptr2));
    printf("\n%d - %d = %d", *ptr1, *ptr2, (*ptr1) - (*ptr2));
    printf("\n%d * %d = %d", *ptr1, *ptr2, (*ptr1) * (*ptr2));
    printf("\n%d / %d = %d", *ptr1, *ptr2, (*ptr1) / (*ptr2));




}