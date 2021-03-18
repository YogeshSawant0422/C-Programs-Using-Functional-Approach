// Program To Find Given Number Is Negative Or Positive
#include<stdio.h>
#include<conio.h>

void Positive_Negative(int);

int main()
{
    int Num = 0 ;

    printf("\n Enter A Number To Find Out It Is Positive ,Negative And Neutral = ");
    scanf("%d",&Num);

    Positive_Negative(Num);

    getch();
    return 0;
}
void Positive_Negative(int No)
{
    if(No == 0)
    {
        printf("\n Given Number Is Neutral .");
        goto Down ;
    }
    if(No > 0)
    {
        printf("\n Given Number Is Positive .");
    }
    else
    {
        printf("\n Given Number Is Negative .");
    }

    Down :
    getch();
    printf("\n Thanks  !!!!!!");
    return ;
}


