//Find The Length Of Given String
#include<stdio.h>
#include<conio.h>

int String_Len(char cSrc[])
{
    int i = 0;

    for( i = 0 ; cSrc[i] != '\0' ; i++);

    return i ;
}
int main()
{
    char Str[20] = {'\0'};
    int i = 0 , Len = 0;

    printf("\n Enter A String : ");
    gets(Str);

   Len = String_Len(Str);

    printf("\n The Length Of Given String Is : %d",Len);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
