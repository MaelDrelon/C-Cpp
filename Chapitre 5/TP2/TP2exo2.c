#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    FILE *Alphabet;
    int i;

    Alphabet = fopen(".\\Alphabet.txt","r");

    do
    {
        i = getc(Alphabet);
        printf ("%c", i);
    }
    while (i != EOF);

    return 0;
}
