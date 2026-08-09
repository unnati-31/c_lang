#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    char original[200];
    int vowel_count = 0;
    
    printf("Enter a sentence: ");
    scanf("%s", sentence);
    
    strcpy(original, sentence);
    
    int length = strlen(sentence);
    
    for (int i = 0; i < length; i++) {
        char c = sentence[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count++;
        }
    }
    
    for (int i = 0; i < length; i++) {
        sentence[i] = toupper(sentence[i]);
    }
    
    printf("Original: %s\n", original);
    printf("Characters: %d\n", length);
    printf("Vowels: %d\n", vowel_count);
    printf("Uppercase: %s\n", sentence);
    
    return 0;
}