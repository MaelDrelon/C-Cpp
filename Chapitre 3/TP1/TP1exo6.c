#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>

void inverse();
void main(int argc, char *argv[]) {

	inverse();

getch ();
}

void inverse(){
	char mot[100], tmp;
	int i, j, compteur;

	printf("Entrez un mot ou une phrase: \n");
	gets(mot);
	compteur=0;
	while(mot[compteur]!='\0'){
		compteur++;
	}

	for (i=strlen(mot)-1, j=0; i>j; j++, i--){
		tmp=mot[j];
		mot[j]=mot[i];
		mot[i]=tmp;
	}

	printf("\n%s\n", mot);
}
