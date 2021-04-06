// String Reverse In main Using While Loop
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] ={};
    int i = 0 , j = 0 ;

    printf("\n Enter A String = ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i = i - 1;

    while(i >= 0)
    {
        cDest[j] = cSrc[i];
        j++;
        i--;
    }

    cDest[j] = '\0';
    printf("\n Given Entered String Is  = %s",cSrc);

    printf("\n\n OUTPUT : Reverse Received String Is = %s",cDest);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
