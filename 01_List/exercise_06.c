#include <stdio.h> 
#define NUMBER_NUMS 10

int main(){
    int nums[NUMBER_NUMS], temp_sort;
    int *p_nums = &nums[0];

    for(int i = 0; i < NUMBER_NUMS; i++){
        scanf(" %d", p_nums+i);
    }

    // Method of sorting: Insertion sort  
    for(int i = 1; i < NUMBER_NUMS; i++){
        while(i > 0 && *(p_nums+i) < *(p_nums+i-1)){
            temp_sort = *(p_nums+i);

            // Swap nums[i] and nums[i-1]
            *(p_nums+i) = nums[i-1];
            *(p_nums+i-1) = temp_sort;

            i--;
        }
    }

    // Print the results
    for(int i = 0; i < NUMBER_NUMS; i++){
        printf("\n%do:%d // Adress: %p", i+1, *(p_nums+i), p_nums+i);
    }

}