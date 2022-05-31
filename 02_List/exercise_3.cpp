#include <stdio.h> 
#define NUM_CHAR 50

int main(){
    char phrase[NUM_CHAR];
    char *p_phrase = &phrase[0];
    int i, count = 0; 

    fgets(phrase, NUM_CHAR, stdin);

    for(i = 0; i < NUM_CHAR; i++){
        if(*(p_phrase+i) == '\0')
            break;
        count++;
    }

    printf("Number of characters: %d", count);
}