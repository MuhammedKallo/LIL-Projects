#include <stdio.h>
#include <unistd.h>

void Find_target(char target)
{
    char current;

    if (target >= 'A' && target <= 'Z')          //(8,0.10) finds if the target is Uppercase or Lowercase and declares the current as the starting point of the target
        current = 'A';
    else if (target >= 'a' && target <= 'z')
        current = 'a';
    else
    {
        write(1, &target, 1);                    //(14) if the target is not a letter, it will print the target and return
        return;
    }

    while (current != target)                   //(20-23) loop writes and erases the current character until it reaches the target
    {
        write(1, &current, 1);
        usleep(10000);                  //delay of 10ms
        write(1, "\b \b", 3);           //earse the current character \b means (backspace)
        current++;
    }
    write(1, &target, 1);
}

int main(void)
{
    char message[] = "Hello, World";
    int i = 0;

    while (message[i] != '\0')
    {
        Find_target(message[i]);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}

/*
    The code only prints animated ( Hello, World ).
*/