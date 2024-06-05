#include <stdio.h>
#include <ctype.h> // For isalpha()

int main(){
    char str[] = "hello";
    int vowels = 0, consonants = 0;

    for(int i = 0; str[i] != '\0'; i++){
        char c = tolower(str[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
            vowels++;
        }
        else if (isalpha(c))
        {
            consonants++;
        }
        
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants %d\n", consonants);

    return 0;
}