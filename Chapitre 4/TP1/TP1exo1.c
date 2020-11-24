#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	float *adr1, *adr2;

	adr1 = malloc(sizeof(float));
	*adr1 = 45.78;

	adr2 = malloc(sizeof(float));
	*adr2 = 678.89;

	printf("adr1 \nadresse : %ld \n", adr1);
	printf("valeur : %f\n", *adr1);

	printf("adr2 \nadresse : %ld \n", adr2);
	printf("valeur : %f", *adr2);


	getch();


	return 0;
}
