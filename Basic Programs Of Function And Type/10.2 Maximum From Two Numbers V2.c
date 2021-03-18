// V02 Maximum From Two Numbers

#include<stdio.h>
#include<conio.h>

int  Find_Max(int,int);
int Flag = 0;
int main()
{
    int Num1 = 0 , Num2 = 0 ;

    printf("\n Enter Two Numbers For Finding Max = ");
    scanf("%d%d",&Num1,&Num2);

    Flag = Find_Max(Num1 , Num2) ;

    if(Flag == 0)
    {
        printf("\n Given %d and %d Are Equal ",Num1,Num2);
    }
    else if(Flag == 1)
    {
        printf("\n The Maximum Number is = %d ",Num1);
    }
    else
    {
        printf("\n The Maximum Number is = %d ",Num2);
    }

    getch();
    return 0;
}

int Find_Max(int No1 , int No2 )
{
    if(No1 == No2)
        {
            Flag = 0;
        }
    else if(No1 > No2)
        {
            Flag = 1;
        }
    else
        {
            Flag = 2;
        }

        return Flag;
}
