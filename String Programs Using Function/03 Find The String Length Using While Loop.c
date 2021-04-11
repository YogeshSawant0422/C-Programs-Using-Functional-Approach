//Find The String Length Using While Loop
#include<stdio.h>
#include<conio.h>

int Str_Len(char cSrc[])
{
    int i = 0;

    while(cSrc[i] != '\0')
    {
        i++;
    }
    return i ;
}
int main()
{
    char Str[50] = {'\0'};
    int Len = 0;

    printf("\n Enter A String : ");
    gets(Str);

    Len = Str_Len(Str);

    printf("\n Length Of Given String Is : %d",Len);

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
