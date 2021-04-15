// To Find The Count Of White Spaces In Given String .
#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = {'\0'};
    int Ret = 0;

    printf("\n Enter  A String : ");
    gets(Str);

   Ret = W_Spaces(&Str);

   printf("\n White Spaces In Given String Is : %d",Ret);

   printf("\n\n Thanks !!!!");
   getch();
   return 0;
}
int W_Spaces(char *Str)
{
    int W_Cnt = 0 , i = 0;

    while(Str[i] != '\0')
    {
        if(Str[i] == 32)
        {
            W_Cnt++;
        }
        i++;
    }
    return W_Cnt;
}
