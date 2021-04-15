//Convert Given String Is In UpperCase Letters
#include<stdio.h>
#include<conio.h>
void Uppercase(char cSrc[]);
int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A String : ");
    gets(Str);

    Uppercase(Str);

    printf("\n The Uppercase String Is : %s",Str);

    printf("\n Thanks !!!!");
    getch();
    return 0;
}
void Uppercase(char cSrc[])
{
    int i = 0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >='a' && cSrc[i] <= 'z')
        {
            cSrc[i] = cSrc[i] - 32 ;
        }
        i++;
    }
    return;
}
