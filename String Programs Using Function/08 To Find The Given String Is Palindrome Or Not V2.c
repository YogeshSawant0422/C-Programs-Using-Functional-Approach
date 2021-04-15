//To Find The Given String Is Palindrome Or Not V2
#include<stdio.h>
#include<conio.h>

int Palindrome_String(char *cSrc);

int main()
{
    char Str[20] = {'\0'};
    int Ret = 0;

    printf("\n Enter A string : ");
    gets(Str);

    Ret = Palindrome_String(&Str);

    if( -1 == Ret)
    {
        printf("\n Given String Is Not Palindrome .");
    }
    else
    {
        printf("\n Given String Is Palindrome .");
    }

    getch();
    return 0;
}
int Palindrome_String(char *cSrc)
{
    int i = 0 , j = 0;

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;
    while(i > j)
    {
        if(cSrc[i] != cSrc[j])
        {
            i = -1;
            break;
        }
        i--;
        j++;
    }
    return i ;
}
