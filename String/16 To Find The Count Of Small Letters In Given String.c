//To Find The Count Of Small Letters In Given String
#include<stdio.h>
#include<stdio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0 , Small_Count = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >='a' && cSrc[i] <='z')
        {
            Small_Count++;
        }
        i++;
    }

    printf("\n The Count Of Small Letters In Given String : %d",Small_Count);
    getch();
    return 0;
}
