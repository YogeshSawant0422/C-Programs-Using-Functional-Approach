//Toggle Case String
#include<stdio.h>
#include<conio.h>

void Toggle_Case(char cSrc[]);

int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A String : ");
    gets(Str);

    Toggle_Case(Str);

    printf("\n The Toggle String Is : %s",Str);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
void Toggle_Case(char cSrc[])
{
    int i = 0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >='A' && cSrc[i] <= 'Z')
        {
            cSrc[i] = cSrc[i] + 32 ;
        }
        else if(cSrc[i] >='a' && cSrc[i] <= 'z')
        {
             cSrc[i] = cSrc[i] - 32 ;
        }
        i++;
    }
    return;
}
