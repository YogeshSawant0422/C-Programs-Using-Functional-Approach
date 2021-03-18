// Calculator Using Arithmetic Operators  V-01
#include<stdio.h>
#include<conio.h>

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mod(int,int);

int main()
{
    int Num1 = 0 ,Num2 = 0;

    printf("\n Enter Two Numbers = ");
    scanf("%d%d",&Num1,&Num2);

    printf("\n ===Result After Arithmetic Operations On Given Numbers ===\n");

    printf("\n Addition          =>  %d + %d = %d ",Num1,Num2,Add(Num1,Num2));
    printf("\n Subtraction       =>  %d - %d = %d ",Num1,Num2,Sub(Num1,Num2));
    printf("\n Multiplication    =>  %d * %d = %d ",Num1,Num2,Mult(Num1,Num2));
    printf("\n Division          =>  %d / %d = %d ",Num1,Num2,Div(Num1,Num2));
    printf("\n Modulus           =>  %d %% %d = %d ",Num1,Num2,Mod(Num1,Num2));

    getch();
    return 0;
}
int Add(int No1 , int No2)
{
    int Result = 0;
    Result = No1+No2;
    return Result;
}
int Sub(int No1 , int No2)
{
    int Result = 0;
    Result = No1-No2;
    return Result;
}
int Mult(int No1 , int No2)
{
    int Result = 0;
    Result = No1 * No2;
    return Result;
}
int Div(int No1 , int No2)
{
    int Result = 0;
    Result = No1/No2;
    return Result;
}
int Mod(int No1 , int No2)
{
    int Result = 0;
    Result = No1 % No2;
    return Result;
}








