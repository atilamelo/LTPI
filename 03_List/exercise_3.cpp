#include <stdio.h> 

// Conversion from Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius){
    return celsius * 1.8 + 32;
}

int main(){
    float celsius, fahrenheit;

    printf("Temperature (Celsius): ");
    scanf("%f", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);
    printf("\n%.1f Celsius is equivalent to %.1f Fahrenheit.", celsius, fahrenheit);

}