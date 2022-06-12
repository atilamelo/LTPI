#include <stdio.h>
int num;

int func(int a, int b) {
    a = (a+b)/2; 
    // A value = 25

    num -= a;
    // Num = -15

    return a;
}

main() {
    int first = 0, sec = 50;
    num = 10;
    // Num = 10 - First = 0 - Sec = 50
    num += func(first, sec);
    // Num = 10 - First = 0 - Sec = 50
    printf("\n\nConfira! num = %d\tfirst = %d\tsec = %d",num, first, sec);
}