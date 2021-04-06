//Copy The String Using While Loop
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = {};
    int i = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while( cSrc[i] != '\0')
    {
        cDest[i] = cSrc[i];
        i++;
    }

    cDest[i] = '\0';

    printf("\n Your Entered String = %s",cSrc);

    printf("\n\n OUTPUT : Copied String Is = %s",cDest);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;

}
