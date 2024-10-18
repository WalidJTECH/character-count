
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[1000]; 
    int counts[26] = {0};  

    printf("Please enter a string: ");
    fgets(input, sizeof(input), stdin);  

    for (int i = 0; i < strlen(input); i++) {
        char ch = input[i];
      
        if (isalpha(ch)) {
            ch = tolower(ch);  
            counts[ch - 'a']++;  
        }
    }

    printf("\nCharacter counts:\n");
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", i + 'a', counts[i]);t
        }
    }

    return 0;
}
