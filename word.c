#include <stdio.h>
#include <string.h>

//takes word pairs as input and processes different string functions

int main() {
    int size;
    printf("Enter number of word pairs: ");
    scanf("%d", &size);
    
    char word1[100];
    char word2[100];
    char combined[200];
    char longest_combined[200] = "";
    
    for(int i = 0; i < size; i++) {
        scanf("%s", word1);
        scanf("%s", word2);
        int l1 = strlen(word1);
        int l2 = strlen(word2);
        int r1 = strcmp(word1, word2);
        printf("Word 1: %s (Length: %d)\n", word1, l1);
        printf("Word 2: %s (Length: %d)\n", word2, l2);
        
        if(r1 == 0) {
            printf("Comparison: identical\n");
        } else {
            printf("Comparison: different\n");
        }

        strcpy(combined, word1);
        strcat(combined, " ");
        strcat(combined, word2);
        printf("Combined: %s\n", combined);

        if(strlen(combined) > strlen(longest_combined)) {
            strcpy(longest_combined, combined);
        }
    }
    printf("Longest combined string: %s\n", longest_combined);
    return 0;
}