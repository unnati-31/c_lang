#include <stdio.h>
#include <string.h>

int main() {
    int size;
    printf("Enter the number of words: ");
    scanf("%d", &size);

    int total_characters = 0;
    int max_length = 0;

    for(int i = 0; i < size; i++) {
        char word[50];
        scanf("%s", word);
        int length = strlen(word);
        total_characters += length;
        printf("Word: %s - Length: %d\n", word, length);

        if(length > max_length) {
            max_length = length;
        }
    }

    printf("Total characters: %d\n", total_characters);
    printf("Longest word length: %d\n", max_length);
}