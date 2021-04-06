// Copy The String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] ={'\0'};
    char cDest[20] = {};
    int i = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    for( i = 0 ;cSrc[i] != '\0' ; i++)
    {
        cDest[i] = cSrc[i];
    }

    cDest[i] ='\0';

    printf("\n\n Given String Is %s !!!!",cSrc);

    printf("\n\n Copied To New String Is = %s $$$",cDest);

    printf("\n\n Thanks !!!");
    getch();
    return 0;
}
