//To Find The Given String Is Palindrome Or Not (With Case Sensitivity).
#include<stdio.h>
#include<conio.h>

int Palindrome_PStr(char *cSrc , char *cDest);

int main()
{
    char Str[20] = {'\0'};
    char PStr[20] = {};
    int Ret = 0;

    printf("\n Enter A String : ");
    gets(Str);

    Ret = Palindrome_Str(&Str , &PStr);

    if(-1 == Ret)
    {
        printf("\n Given String Is Not Palindrome .");
    }
    else
    {
        printf("\n Given String Is Palindrome .");
    }
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
int Palindrome_Str(char *cSrc , char *cDest)
{
    int i = 0 , j = 0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
             cSrc[i] = cSrc[i] - 32;
        }
        i++;
    }
    i--;
    while( i >= 0)
    {
        cDest[j] = cSrc[i];
        j++;
        i--;
    }
    for(i = 0 ; i < j ;i++)
    {
        if(cSrc[i] != cDest[i])
        {
            i = -1;
            break;
        }
    }
    return i ;
}
