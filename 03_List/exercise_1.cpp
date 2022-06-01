#include <stdio.h> 

// Return the big number between num1 and num2
int big_number(int num1, int num2){
    if(num1 > num2)
        return num1;
    else if(num2 > num1)
        return num2;
    else
        return 0;
}

int main(){
    int num1, num2; 

    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    printf("Big number: %d", big_number(num1, num2));

}

