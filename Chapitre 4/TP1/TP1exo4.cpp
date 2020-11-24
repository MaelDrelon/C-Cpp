#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void affiche (int tab1[20], int tab2[20])
{
    int i;
    int j;
	for (i=0; i<20; i++)
	printf ("\n%d\n", tab1[i]);
}




int main(int argc, char** argv) {

	int tab1[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int tab2[20]={-19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2,-1,0};
	int	i;
	int j;

	affiche(tab1, tab2);


	return 0;
}
