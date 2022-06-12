#include <stdio.h>

void resetVars(int *a, int *b);

int main(){
    int a = 13, b = 23;
    resetVars(&a, &b);
    printf("A = %d\tB = %d", a, b);
}

void resetVars(int *a, int *b){
    *a = 0;
    *b = 0;
}
