//Swapping Of Two Numbers (Using Call By Address ).
#include<stdio.h>
#include<conio.h>

void Swap_Two_Numbers(int* , int*);
int main()
{
    int Num1 = 0 , Num2 = 0;

    printf("\n Enter Two Numbers For Swapping = ");
    scanf("%d%d",&Num1,&Num2) ;

    printf("\n\n======== Before Swapping ========");
    printf("\n\n Before Swapping First Number is = %d",Num1);
    printf("\n Before Swapping Second Number Is = %d",Num2);

    Swap_Two_Numbers(&Num1 , &Num2);
   printf("\n\n========= After Swapping =========");
   printf("\n\n After Swapping First Number is = %d",Num1);
   printf("\n After Swapping Second Number is = %d",Num2);

   printf("\n\n Thanks !!!!!!");

   getch();
   return 0;
}
void Swap_Two_Numbers(int *iNo1 , int *iNo2)
{
    int Temp = 0;
    Temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = Temp;

    return ;
}
