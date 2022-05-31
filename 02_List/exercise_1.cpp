#include <stdio.h> 
#define NUMBER_NUMS 6

int main(){
    int nums[NUMBER_NUMS];
    int *p_nums = &nums[0];
    
    for(int i = 0; i < NUMBER_NUMS; i++){
        scanf(" %d", p_nums+i);
    }

    // Print the results
    for(int i = 0; i < NUMBER_NUMS; i++){
        printf("\n%do:%d // Adress: %p", i+1, *(p_nums+i), p_nums+i);
    }

}