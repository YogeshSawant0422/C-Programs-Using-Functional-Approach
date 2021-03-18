//V01 Number Is Prime Or Not
#include<stdio.h>
#include<conio.h>

int Flag = 0;
int Is_Prime(int);

int main()
{
        int Num = 0 , Ret = 0;
        printf("\n Enter a number for check It Is Prime Or Not = ");
        scanf("%d",&Num);

        Ret = Is_Prime(Num);

        if(Flag == 1)
        {
            printf("\n Given Number %d Is Neutral",Num);
        }
        else if(Flag == 2)
        {
            printf("\n Given Number %d Is Prime Number ",Num);
        }
        else
        {
            printf("\n Given Number  %d  Is Not Prime Number ",Num);
        }

       printf("\n\n Thanks !!!!!");

        getch();
        return 0;
}
int Is_Prime(int No)
{
    int i = 0 ;

    if(No == 1 || No == 0)
    {
        Flag = 1 ;
        goto Down ;
    }
    for( i = 2 ; i < No ; i++)
    {
        if( No % i == 0)
        {
            break ;
        }
    }
    if( No == i)
    {
       Flag = 2;
    }
    else
    {
        Flag = 3;
    }
        Down:
        return Flag;
}
