#include <iostream>
void affiche (int tab1[20], int tab2[20],int i,int j)
{
	for (i=0; i<20; i++)
        printf ("\n%d = %d\n",i, tab1[i]);

    printf("\n\n");

	for (j=0; j<20; j++)
        printf ("\n%d = %d\n",j, tab2[j]);
}




int main(int argc, char** argv) {

	int tab1[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int tab2[20]={-19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2,-1,0};
	int	i;
	int j;

	affiche(tab1, tab2, i, j);


	return 0;
}
