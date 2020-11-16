#include <stdio.h>
int Mul2(int n)
{
    if (n%2) return 0;
        else return 1;
}

int Mul3(int n)
{
    if (n%3) return 0;
        else return 1;
}

void main()
{
    int Mul2 (int );
    int Mul3 (int );
    int n;
    printf("Donnez un entier :\n");
    scanf("%d",&n);
    if (Mul2(n))
    {
        printf("\nIl est pair\n");
    }
    if (Mul3(n))
    {
        printf("\nIl est multiple de 3\n");
    }
    if (Mul2(n)&& Mul3(n))
    {
        printf("\nIl est divisible par 6\n");
    }
}
