// Program To Calculate  Even or Odd Number
//For Even Flag => 1
//For Odd Flag => 2
// For Neutral => 3
#include<stdio.h>
#include<conio.h>

int Flag = 0;
int Even_Odd(int);

int main()
{
    int  Num = 0 ;

    printf("\n Enter A Number For Finding it is Even Or Number  = ");
    scanf("%d",&Num);

     Flag = Even_Odd(Num);

     if(Flag == 3)
     {
         printf("\n Given Number Is Neutral ");
      }
     if(Flag == 1)
     {
         printf("\n Given Number  %d Is Even Number .",Num);
     }
     if(Flag == 2)
     {
         printf("\n Given Number %d Is Odd Number . ",Num);
     }
     printf("\n\n Thanks !!!!!");
     getch();
     return 0;
}
int Even_Odd(int No)
{
    if(No == 0)
    {
        Flag = 3;
        goto Down;
    }
    if(No%2 == 0)
    {
        Flag = 1;
    }
    else
    {
        Flag = 2 ;
    }
    Down :
    return Flag;
}
