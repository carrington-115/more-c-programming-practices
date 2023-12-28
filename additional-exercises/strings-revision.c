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

    // copying of a string
    strcpy(words[0], words[4]);
    // strncpy(words[0], words[4], 4);

    // comparing 2 strings
    int first_comparison = strcmp(words[0], words[4]);
    int second_comparison = strcmp(words[1], words[2]);
    printf("\nFirst comparison: %d and second comparison: %d\n", first_comparison, second_comparison);

    // upper and lowercase
    char lower_case_words[5][20];
    char upper_case_words[5][20];

    printf("\n\nHere are the words\n");
    for (int i = 0; i < 5; i++){
        printf("Word %d: %s \n", i+1, words[i]);
    }

    // learning upper and lower case
    printf("\nLower case of word %s: %s", words[0], strlwr(words[0]));
    printf("\nUpper case of word %s: %s", words[0], strupr(words[0]));

    // getting the length
    printf("\n\n");
    for (int i = 0; i < 5; i++){
        printf("The word length of %s is %d\n", words[i], strlen(words[i]));
    }

    printf("\n\n");
    for (int i = 0; i < 5; i++){
        printf("The word reverse of %s is %s\n", words[i], strrev(words[i]));
    }


    // printf("\nThe words in lower case: \n");
    // for (int i = 0; i < 5; i++){
    //     strcpy(strlwr(words[i]), lower_case_words[i]);
    // }

    // // printing .....
    // for (int i = 0; i < 5; i++){
    //     printf("Word %d in lower case: %s \n", i+1, lower_case_words[i]);
    // }

    // printf("\nThe words in uppercase\n");
    // for (int i = 0; i < 5; i++){
    //     strcpy(strupr(words[i]), upper_case_words[i]);
    // }

    // // printing .....
    // for (int i = 0; i < 5; i++){
    //     printf("Word %d in upper case: %s \n", i+1, upper_case_words[i]);
    // }
    


    return 0;
}