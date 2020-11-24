#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <conio.h>
#include <limits.h>0

#ifdef _WIN32
#include <tchar.h>

#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[])
{
	int i,j, index_min, min, tmp;
	int * adr_deb;
	adr_deb = malloc(6*sizeof(int));

	for(i=0; i<6; i++)
	{
		scanf("%d",&adr_deb[i]);
	}

	for(i=0; i<6; i++)
	{
		index_min= -1;
		min= INT_MAX;

		for(j=i+1; i<6; i++)
		{
			if(adr_deb[j]<min)
			{
				min = adr_deb[j];
				index_min=j;
			}
		}


		if(min<adr_deb[i])
		{
			tmp = adr_deb[i];
			adr_deb[i] = adr_deb[index_min];
			adr_deb[index_min] = tmp;
		}
	}

	printf("%p %d %d", &adr_deb[5],6,adr_deb[5]);
	free(adr_deb);

	getch();
	return 0;
}
