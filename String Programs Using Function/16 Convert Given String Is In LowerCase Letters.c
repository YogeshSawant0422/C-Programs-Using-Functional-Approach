//Convert Given String Is In LowerCase Letters
#include<stdio.h>
#include<conio.h>

void Lowercase(char cSrc[]);

int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A String : ");
    gets(Str);

    Lowercase(Str);

    printf("\n The Lowercase String Is : %s",Str);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
void Lowercase(char cSrc[])
{
    int i = 0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >='A' && cSrc[i] <= 'Z')
        {
            cSrc[i] = cSrc[i] + 32 ;
        }
        i++;
    }
    return;
}
