#include <stdio.h> 

int sum(int num1, int num2);
int num_double(int num);
int triple(int num);

int main(){
    int num1, num2; 

    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    printf("\nResult: %d", triple(sum(num_double(num1), num_double(num2))));

}
 

int sum(int num1, int num2){
    return num1 + num2;
}


int num_double(int num){
    return num * 2;
}
 
int triple(int num){
    return num * 3;
}