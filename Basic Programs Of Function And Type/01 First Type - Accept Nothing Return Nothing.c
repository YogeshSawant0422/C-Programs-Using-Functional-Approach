// First Type Of Function
// 01 Accept Nothing Return Nothing

#include<stdio.h>
#include<conio.h>

void Add();

int main()
{
    Add();
    getch();
    return 0;
}
void Add(void)
{
    int Num1 = 0 ,Num2 = 0 ,Sum = 0;

    printf("\n Enter Two Numbers  = ");
    scanf("%d%d",&Num1,&Num2);

    Sum = Num1 + Num2 ;

    printf("\n The Sum Of Given %d And %d  Numbers Are = %d ",Num1 ,Num2,Sum);

    getch();
    printf("\n Thanks!!!");
    return ;
}
