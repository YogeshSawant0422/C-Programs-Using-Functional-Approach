//Maximum From Two Numbers .
#include<stdio.h>
#include<conio.h>

void Max_Num(int* , int*);

int main()
{
    int Num1 = 0 , Num2 = 0;

    printf("\n Enter Two Numbers For Find Maximum From it = ");
    scanf("%d%d",&Num1,&Num2);

    Max_Num(&Num1,&Num2);
    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}
Max_Num( int *iNo1 , int *iNo2)
{
    if(*iNo1 == *iNo2)
    {
        printf("\n Given Two Numbers Are Equal");
    }
    else if(*iNo1 > *iNo2)
    {
        printf("\n Given %d Number Is Maximum",*iNo1);
    }
    else
    {
        printf("\n Given %d Number Is Maximum",*iNo2);
    }
    return ;
}

