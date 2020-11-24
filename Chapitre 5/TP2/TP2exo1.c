#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{

FILE *Alphabet;
int c;

Alphabet = fopen(".\\Alphabet.txt","a");
{
fputs("Bonsoir je suis l'alphabet xd", Alphabet);
}
return 0;
}
