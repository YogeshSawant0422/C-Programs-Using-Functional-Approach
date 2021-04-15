//Using String Digits Create A Integer Number#include<stdio.h>
#include<conio.h>

int Int_Num(char cSrc[]);

int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A String   : ");
    gets(Str);

   int Ret = Int_Num(Str);

    printf("\n Integer Number Created From Given String Is : %d",Ret);

    printf("\n\n Thanks  !!!!!");

    getch();
    return 0;
}
int Int_Num(char cSrc[])
{
    int i = 0 , Num=0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Num = (Num * 10) + (cSrc[i] - 48);
        }
        i++;
    }
    return Num;
}
