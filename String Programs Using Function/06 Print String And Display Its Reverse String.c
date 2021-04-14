// Print String And Display Its Reverse String
#include<stdio.h>
#include<conio.h>

void Reverse_String(char *cSrc ,char *cDest);

int main()
{
    char Str[20] = {'\0'};
    char RStr[20] ={};

    printf("\n Enter A String : ");
    gets(Str);

    Reverse_String(&Str , &RStr);

    printf("\n The Given String Is : %s",Str);

    printf("\n\n Reverse String Is : %s",RStr);

    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
void Reverse_String(char *cSrc ,char *cDest )
{
    int i = 0 , j = 0;
     while(cSrc[i] != '\0')
     {
         i++;
     }
     i = i - 1;
     while( i >= 0)
     {
         cDest[j] = cSrc[i];
         j++;
         i--;
     }
     return 0;
}
