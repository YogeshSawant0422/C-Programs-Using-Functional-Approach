// Given String Is Palindrome  Or NOT (V2)
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = {} ;

    int i = 0 , j = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i-- ;

    while( i >= j)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }
        i--;
        j++;
    }

    if( i <= j)
    {
        printf("\n Given String Is Palindrome !!!!");
    }
    else
    {
        printf("\n Given String Is NOT Palindrome !!!!");
    }

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
