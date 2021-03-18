//Fourth Type Of Function
//03 Accept Something Returns Something

#include<stdio.h>
#include<conio.h>

int Add(int,int);

int main()
{
    int Num1 = 0 , Num2 = 0 , Sum = 0;

    printf("\n Enter  Two Numbers = ");
    scanf("%d%d",&Num1,&Num2);

    Sum = Add(Num1 , Num2);

    printf("\n The Addition Of Given %d And %d Are = %d ",Num1,Num2,Sum);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
int Add(int No1 , int No2)
{
    int Result = 0;
    Result = No1 + No2;

    return Result;
}
