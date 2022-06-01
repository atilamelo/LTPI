#include <stdio.h> 

#define NUM_GRADES 3
float media(float grades[]);
float sum_arr(float arr[], int num_ele);


int main(){
    float grades[NUM_GRADES]; 
    
    for(int i = 0; i < NUM_GRADES; i++){
        printf("Grade %d: ", i+1);
        scanf("%f", &grades[i]);
    }

    printf("\nWeighted average: %.1f", media(grades));
}


float sum_arr(float arr[], int num_ele){
    int sum = 0;

    for(int i = 0; i < num_ele; i++)
        sum += arr[i];
    
    return sum;
}

// Weighted average for the grades
float media(float grades[]){
    grades[1] *= 2;
    grades[2] *= 2;
    
    return sum_arr(grades, NUM_GRADES) / 3;
}

