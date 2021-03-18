//Third Type Of Function
//03 Accept Something Returns Nothing

#include<stdio.h>
#include<conio.h>

void Add(int,int);

int main()
{
    int Num1 = 0 ,Num2 = 0;

    printf("\n Enter Two Numbers = ");
    scanf("%d%d",&Num1,&Num2);

    Add(Num1,Num2);

    getch();
    return 0;
}
void Add(int No1 , int No2)
{
    int Sum = 0;

    Sum = No1 + No2;

    printf("\n The Sum Of Given %d And %d Numbers Are = %d",No1 ,No2,Sum);

    return ;
}

