#include <stdio.h> 

int EhDivisivel(int a, int b);

int main(){
    int a, b; 

    scanf("%d", &a);
    scanf("%d", &b);

    if(EhDivisivel(a, b))
        printf("A is divisible by B.");
    else
        printf("A is not divisible by B.");

}

int EhDivisivel(int a, int b){
    if(a % b == 0)
        return 1;
    else
        return 0;
}