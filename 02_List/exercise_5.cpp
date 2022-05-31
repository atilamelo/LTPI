#include <stdio.h> 
#include <string.h>
#define NUM_CHAR 60

int main(){
    char phrase[NUM_CHAR];
    char *p_phrase = phrase;
    int i, word_i, char_phrase = 0, indx_space = 0;

    fgets(phrase, NUM_CHAR, stdin);

    // Count number of char in the sentence
    for(i = 0; i < NUM_CHAR; i++){
        if(*(p_phrase+i) == '\n')
            break;
        char_phrase++;
    }

    // Loop through the phrase and print word per word
    for(i = 0; i < char_phrase; i++){

        if(*(p_phrase+i) == ' ' || i == char_phrase-1){

            // Use indx_space to guard the last space found
            for(word_i = indx_space; word_i <= i; word_i++){
                printf("%c", *(p_phrase+word_i));
            }
            printf("\n");
            indx_space = i + 1;             
        }
    } 


}