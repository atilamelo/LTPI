#include <stdio.h> 
#define NUMBER_NUMS 3

int main(){
    int nums[NUMBER_NUMS], num_sort; 
    int temp_sort;

    for(int i = 0; i < NUMBER_NUMS; i++){
        scanf(" %d", &nums[i]);
    }

    // Method of sorting: Insertion sort  
    for(int i = 1; i < NUMBER_NUMS; i++){
        while(i > 0 && nums[i] < nums[i-1]){
            temp_sort = nums[i];

            // Swap nums[i] and nums[i-1]
            nums[i] = nums[i-1];
            nums[i-1] = temp_sort;

            i--;
        }
    }

    for(int i = 0; i < NUMBER_NUMS; i++){
        printf("\n%do:%d // Adress: %p", i+1, nums[i], &nums[i]);
    }

}