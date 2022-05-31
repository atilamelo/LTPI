#include <stdio.h> 

int main(){
    int var1;
    int *ptr1 = &var1; 

    printf("Content of *ptr1: %d", *ptr1);
}