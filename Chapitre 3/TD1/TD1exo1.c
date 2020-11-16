#include <stdio.h>
void demo () ;
void main ()
{ int x=1,y=2;
printf("\navant d appeler demo(),x=%d et y=%d\n",x,y);
demo() ;
printf("\napres avoir appele demo(),x=%d et y=%d\n",x,y);
}
void demo()
{
int x=88,y=99;
printf("\ndans la fonction demo(),x=%d et y=%d\n",x,y);
}
