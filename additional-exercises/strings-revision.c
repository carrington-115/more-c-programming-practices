#include <stdio.h>
#include <string.h>

int main(void){
    char word1[20], word2[20];
    char words[5][20];
    // operations on the string

    printf("Enter a word: ");
    fgets(word1, sizeof(word1), stdin);
    printf("%s \n", word1);

    printf("Enter 5 words: ");
    for (int i = 0; i < 5; i++){
        fgets(words[i], sizeof(words[i]), stdin);
    }
    

    // concatenating 2 strings
    strcat(words[1], words[2]);
    strncat(words[2], words[3], 4);
    strcpy(words[0], words[4]);

    printf("\n\nHere are the words\n");
    for (int i = 0; i < 5; i++){
        printf("Word %d: %s \n", i+1, words[i]);
    }


    return 0;
}