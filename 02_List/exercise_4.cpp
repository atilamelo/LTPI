#include <stdio.h> 
#include <string.h>
#define NUM_CHAR 50

int main(){
    char phrase[NUM_CHAR];
    char *p_phrase = phrase;
    int i, char_phrase = 0, c_word = 1;

    fgets(phrase, NUM_CHAR, stdin);

    // Count number of char in the sentence
    for(i = 0; i < NUM_CHAR; i++){
        if(*(p_phrase+i) == '\n')
            break;
        char_phrase++;
    }

    // Count number of word in the sentence
    for(i = 0; i < char_phrase; i++){
        if(*(p_phrase+i) == ' ' && i != char_phrase - 1)
            c_word++;
        
    }

    printf("Number of the words in the sentence: %d", c_word);

}