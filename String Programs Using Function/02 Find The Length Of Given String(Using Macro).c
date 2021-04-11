//Find The Length Of Given String(Using Macro)
#include<stdio.h>
#include<conio.h>
#define size 20

int String_Len(char *cSrc)
{
    int i = 0;

    for( i = 0 ; i <= size ; i++)
    {
        if(cSrc[i] == '\0')
        {
            break;
        }
    }
    return i ;
}
int main()
{
    char Str[size] = {'\0'};
    int i = 0 , Len = 0;

    printf("\n Enter A String : ");
    gets(Str);

   Len = String_Len(&Str);

    printf("\n The Length Of Given String Is : %d",Len);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
