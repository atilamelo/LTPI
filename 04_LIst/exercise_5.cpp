#include <stdio.h>
#define VEC_DIMENSAO 5

void lerVetor(int *vet, int dimensao);

int main(){
    int vec[VEC_DIMENSAO];
    lerVetor(&vec[0], VEC_DIMENSAO);
    
    printf("\n");
    for(int i = 0; i < VEC_DIMENSAO; i++){
        printf("%d\t", vec[i]);
    }
}


void lerVetor(int *vet, int dimensao){
    for(int i = 0; i < dimensao; i++)
        scanf("%d", vet+i);
}

