#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char chaine[100] = "  s a n s     _      e s p a c e ";

  printf("%s\n", chaine);

  int i;
  int j = -1;
  for (i = 0; chaine[i]; i++)
    if (chaine[i] != ' ')
        chaine[++j] = chaine[i];
  chaine[++j] = '\0';

  printf("%s\n", chaine);

  return (0);
}
