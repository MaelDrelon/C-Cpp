#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
    int i;
	char * chaine;

	chaine = malloc(100 * sizeof(char));
	scanf("%s",chaine);
	for(i = 0; i < strlen(chaine); i++)
	{
		printf("%p : %c \n", &chaine[i], chaine[i]);
	}
													free(chaine);
													getch();



	return 0;
}
