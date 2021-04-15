// To Find The Count Of Small Letters In Given String.
#include<conio.h>
#include<stdio.h>

int main()
{
    char Str[20] = {'\0'};
    int Ret = 0 ;

    printf("\n Enter A String : ");
    gets(Str);

    Ret = Small_Count(Str);
   printf("\n Count Of Small Letters In Given String : %d",Ret);

   printf("\n\n Thanks !!!!");

   getch();
   return 0;
}
int Small_Count(char cSrc[])
{
    int S_Cnt = 0  , i = 0;
    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >='a' && cSrc[i] <= 'z')
        {
            S_Cnt++;
        }
        i++;
    }
    return S_Cnt;
}
