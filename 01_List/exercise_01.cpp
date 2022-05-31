using namespace std;
#include <stdio.h>

int main(){
    float var1, var2; 
    float *ptr1 = &var1, *ptr2 = &var1;

    // Adress of var1 and var2 
    printf("Var1 Adress: %p", &var1);
    printf("\nVar2 Adress: %p", &var2);

    // Adress of ptr1 and ptr2
    printf("\nPtr1 Adress: %p", &ptr1); 
    printf("\nPtr2 Adress: %p", &ptr2); 

}