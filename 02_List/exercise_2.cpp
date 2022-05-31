#include <stdio.h> 
#define NUMBER_NUMS 4

int main(){
    int nums[NUMBER_NUMS], small, larger;
    int *p_nums = &nums[0], *p_small = &small, *p_larger = &larger;

    // Scan the numbers
    for(int i = 0; i < NUMBER_NUMS; i++){
        scanf(" %d", p_nums+i);
    }

    for(int i = 0; i < NUMBER_NUMS; i++){
        // If is the first loop define this number as small and larger number found until then
        if(i == 0){
            p_larger = p_nums;
            p_small = p_nums;
        }else{
            // Larger numbers
            if(*(p_nums+i) < *p_small)
                p_small = p_nums+i;
            
            // Smallest numbers
            if(*(p_nums+i) > *p_larger)
                p_larger = p_nums+i;
        }
    }

    // Print the results
    printf("\nThe biggest number: %d", *p_larger);
    printf("\nThe smallest number: %d", *p_small);

}