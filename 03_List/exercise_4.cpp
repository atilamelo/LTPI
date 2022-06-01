#include <stdio.h> 

// Return module of number
    int module(int n){
        if(n < 0)
            return n * -1;
        else
            return n;
    }

int main(){
    int num1, num2; 

    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    printf("\nModular sum: %d", module(num1) + module(num2));
}