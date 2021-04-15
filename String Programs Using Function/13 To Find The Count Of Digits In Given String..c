//To Find The Count Of Digits In Given String.
#include<conio.h>
#include<stdio.h>

int Digit_Count(char cSrc[]);

int main()
{
    char Str[20] = {'\0'};
    int Ret = 0 ;

    printf("\n Enter A String : ");
    gets(Str);

    Ret =Digit_Count(Str);
   printf("\n Count Of Digits In Given String : %d",Ret);

   printf("\n\n Thanks !!!!");

   getch();
   return 0;
}
int Digit_Count(char cSrc[])
{
    int D_Cnt = 0  , i = 0;
    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >='0' && cSrc[i] <= '9')
        {
            D_Cnt++;
        }
        i++;
    }
    return D_Cnt;
}
