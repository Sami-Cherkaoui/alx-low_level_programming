#include <unistd.h>

/**
* print_alphabet - Prints the alphabet in lowercase using _putchar
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
