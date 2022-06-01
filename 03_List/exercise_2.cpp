#include <stdio.h> 

#define NUM_RECTANGLE 2

// Calculate area of rectlange
int calculate_area(int base, int height){
    return base * height;
}

int main(){
    int rectangle[NUM_RECTANGLE][2];
    int rectangle_area[NUM_RECTANGLE];

    for(int i = 0; i < NUM_RECTANGLE; i++){
        printf("\nRectangle %d\n", i+1);

        printf("Base (cm): ");
        scanf("%d", &rectangle[i][0]);
        printf("Heigh (cm): ");
        scanf("%d", &rectangle[i][1]);

    }

    for(int i = 0; i < NUM_RECTANGLE; i++){
        rectangle_area[i] = calculate_area(rectangle[i][0], rectangle[i][1]);

        printf("\nArea of Rectangle %d: %dcm", i+1, rectangle_area[i]);
    }

    if(rectangle_area[0] > rectangle_area[1])
        printf("\n\nRectangle 1 is the bigger in area.");
    else if(rectangle_area[1] > rectangle_area[0])
        printf("\n\nRectangle 2 is the bigger in area.");
    else
        printf("\n\nRectangle 1 and 2 are equal in area.");
        




}