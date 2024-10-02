#include <stdio.h>

char Crypticword(char *word)
{
    int i;

    i = 0;
    while (word[i] != '\0')
    {
        if (word[i] >= 'd' && word[i] <= 'z')                   //if the character given is lowercase, it will make it Uppercase subtract 3 from the ASCII value
            {
                word[i] -= 35;
                i++;
            }
        else if(word[i] >= 'A' && word[i] <= 'W')               //if the character given is Uppercase, it will make it lowercase add 3 from the ASCII value
            {
                word[i] += 35;
                i++;
            }
        else
            i++;
    }
}

int main() {
    
    char word[100];
    fgets(word, 100, stdin);                                   //gets the input from the user and store it at (word) variable {max 100 characters(including NUL)}
    Crypticword(word);
    printf("%s", word);
    return (0);
}

/*
    When the code starts runing it will ask the user to enter an input.
    it will return a secret code that no one can understand.
    write the secret code in the input and it will return the original word.
*/