//Find The String Length Using printf();
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Str_Len(char cSrc[])
{
    int Lenght = printf("%s",cSrc);
    //system("cls");
    return Lenght;
}
int main()
{
    char Str[20] = {'\0'};
    int Len = 0;

    printf("\n Enter A String : ");
    gets(Str);

    Len = Str_Len(Str);
    printf("\n\n Length Of Given String Is : %d", Len);

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
