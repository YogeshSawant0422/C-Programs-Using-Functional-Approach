// V01 Maximum From Two Numbers
#include<stdio.h>
#include<conio.h>

int Ret = 0;
int Max_Number(int,int);

 int main()
 {
     int Num1 = 0 ,Num2  = 0 ;

     printf("\n Enter Two Numbers = ");
     scanf("%d%d",&Num1,&Num2);

     Ret =  Max_Number(Num1,Num2);

     if( Ret == 0)
     {
         printf("\n Given Two Numbers Are Equal ..");
     }
    if( Ret == 1 )
     {
         printf("\n Number %d Is Maximum ",Num1);
     }
     if( Ret == 2)
     {
         printf("\n Number %d Is Maximum ",Num2);
     }

     printf("\n\n Thanks !!!! ");

     getch();
     return 0;
 }
 int Max_Number(int No1 ,int No2)
 {
     if(No1 == No2)
     {
         Ret = 0;
         return Ret;
     }
     else if(No1 >  No2)
     {
         Ret = 1;
         return Ret;
     }
     else
     {
         Ret = 2;
         return Ret;
     }
}
