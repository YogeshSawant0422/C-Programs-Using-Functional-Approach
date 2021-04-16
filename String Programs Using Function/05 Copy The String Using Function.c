//Copy The String Using Function (Using While Loop)
#include<stdio.h>
#include<conio.h>

void CopyString(char *Str , char *cStr);

int main()
{
    char Str[20] ={'\0'};
    char cStr[20]={};

    printf("\n Enter A String : ");
    gets(Str);

    CopyString(&Str , &cStr);

     printf("\n\n Given Entered String Is : %s",Str);

     printf("\n\n Copied Sting Is : %s ",cStr);

     printf("\n\n Thanks !!!");

     getch();
     return 0;
}
void CopyString(char *cSrc , char *cDest)
{
    int i = 0;
    while(cSrc[i] != '\0')
    {
        cDest[i] = cSrc[i];
        i++;
    }

    cDest[i] = '\0';

    return ;
}
