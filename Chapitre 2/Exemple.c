#include <stdio.h>
#include <tchar.h>
#include <conio.h>

main()
{
    char ch[20];
    int i;
    printf("entrez la chaine\n");
    gets(ch);
    i=0;
    while(ch[i]!='\o')
    {
        printf("%d=%c\n",i,ch[i]);
        i++;
    }
    getch();
}
