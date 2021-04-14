// Print String And Display Its Reverse String (Using For Loop)
#include<stdio.h>
#include<conio.h>

void Reverse_String(char cSrc[] , char cDest[]);

int main()
{
    char Str[20] = {'\0'};
    char RStr[20] = {};

    printf("\n Enter A String : ");
    gets(Str);

    Reverse_String(Str,RStr);

   printf("\n\n Given String Is : %s",Str);
   printf("\n\n Reverse String Is : %s",RStr);

   printf("\n\n Thanks !!!");
   getch();
   return 0;
}
void Reverse_String(char cSrc[] , char cDest[])
{
    int i = 0 , j = 0;
    for( ; cSrc[i] != '\0' ; i++);
    i--;
    for(; i >= 0 ; j++,i--)
    {
        cDest[j]  = cSrc[i];
    }
    return ;
}
