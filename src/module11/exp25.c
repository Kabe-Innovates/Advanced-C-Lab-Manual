#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int count = 0;
    int in_word = 0;
    
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
            in_word = 0;
        } else if(in_word == 0) {
            in_word = 1;
            count++;
        }
    }
    
    printf("Number of words: %d\n", count);
    
    return 0;
}
