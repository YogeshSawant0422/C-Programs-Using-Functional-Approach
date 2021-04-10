// Convert Given String into Lower Case Letters
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0 ;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z' )
        {
            cSrc[i] = cSrc[i] +32;
        }
        i++;
    }

    printf("\n Converted Given String In Lower Case Letter Is = %s",cSrc);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
