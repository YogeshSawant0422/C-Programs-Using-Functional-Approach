// Swapping Of Two Numbers (Introduce The Concept Of Call By Value)
#include<stdio.h>
#include<conio.h>

void Swap_Two_Numbers(int,int);
int main()
{
    int Num1 = 0 , Num2 = 0;
    printf("\nEnter 2 Numbers For Swapping = ");
    scanf("%d%d",&Num1 , &Num2);

    printf("\n\n=========== Before Swapping ===========");
    printf("\n\n Before Swap First Number = %d.",Num1);
    printf("\n Before Swap Second Number = %d.",Num2);

    Swap_Two_Numbers(Num1 , Num2);

    printf("\n\n=========== After Swapping =============");

    printf("\n\n After Swap Value In First Number = %d.",Num1);
    printf("\n After Swap Value In Second Number = %d.",Num2);

    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
void Swap_Two_Numbers( int N1,int N2)
{
    int Tmp;
    Tmp = N1;
    N1 = N2;
    N2 = Tmp;
    return ;
}
