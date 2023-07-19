#include "main.h"

void print_alphabet_10_times(void)
{
    char letter = 'a';

    for (int i = 0; i < 10; i++)
    {
        while (letter <= 'z')
        {
            putchar(letter);
            letter++;
        }

        putchar('\n');
        letter = 'a'; // Reset letter to 'a' for the next iteration
    }
}

int main()
{
    print_alphabet_10_times();
    return 0;
}

