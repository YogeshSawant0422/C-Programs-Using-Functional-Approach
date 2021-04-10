//From String Pick The Digits And Get A New Integer Number
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    int i = 0 ;
    unsigned int Num = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i]>='0' && cSrc[i]<='9')
        {
            Num = (Num * 10)  + (cSrc[i] - 48);
        }
        i++;
    }
    printf("\n The Integer Number Given From The String Is  :  %u",Num);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
