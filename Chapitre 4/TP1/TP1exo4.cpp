#include <stdio.h>
#include <stdlib.h>

void affiche(int * tab, int line, int col)
{
	int i, j;
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%4d, ", tab[(i * col) + j]);
		}
		printf("\n");
	}
}


int main(int argc, char ** argv)
{
	int tab1[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int tab2[] = { -19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0 };
	int i, j;

	int sizeTab1 = sizeof(tab1) / sizeof(int);
	int sizeTab2 = sizeof(tab2) / sizeof(int);

	int * result = (int*)malloc(sizeof(tab1) * sizeof(tab2));
	system("mode con lines=50 cols=130");

	printf("sizeof(tab1) => %d\n", sizeof(tab1));	// 80
	printf("sizeof(tab2) => %d\n", sizeof(tab2));	// 80
	printf("sizeof(int) => %d\n", sizeof(int));		// 4
	printf("sizeTab1 => %d\n", sizeTab1);			// 20
	printf("sizeTab2 => %d\n", sizeTab2);			// 20
	printf("sizeof(result) => %d\n", sizeof(result)); // 1600 ??? Non ! => 4 (taille en mémoire d'un pointeur)

	for (i = 0; i < sizeTab1; i++)
	{
		for (j = 0; j < sizeTab2; j++)
		{
			result[(i * sizeTab2) + j] = tab1[i] * tab2[j];
		}
	}

	affiche(result, sizeTab1, sizeTab2);

	free(result);

	return 0;
}
