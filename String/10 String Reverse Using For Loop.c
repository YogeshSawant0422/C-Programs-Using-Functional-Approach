// String Reverse Using For Loop
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] ={};
    int i = 0 , j = 0;

    printf("\n Enter A String = ");
    gets(cSrc);

    for( i = 0 ; cSrc[i] != '\0';i++);

    i = i - 1;

    for( j = 0 ; i >=0 ; j++,i--)
    {
        cDest[j] = cSrc[i];
    }

    cDest[j] = '\0';

    printf("\n Given Entered String Is = %s",cSrc);
    printf("\n\n OUTPUT :  Reverse String Is  = %s ",cDest);

    printf("\n\n Thanks  !!!!!");

    getch();
    return 0;
}
