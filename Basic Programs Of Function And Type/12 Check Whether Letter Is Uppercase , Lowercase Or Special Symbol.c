//Check Whether Letter Is Uppercase , Lowercase Or Special Symbol
#include<stdio.h>
#include<conio.h>

int Ret = 0;
int Flag = 0;

int Upper_Lower_Spec(char);

int main()
{
       char ch= '\0';
       printf("\n Enter A Letter For Check It Is Uppercase , Lowercase Or Special Symbol = ");
       scanf("%c",&ch);

       Flag-- = Upper_Lower_Spec(ch);

       if( Flag == -1)
       {
           printf("\n Given Character Is in  Uppercase ");
       }
       else if(Flag == 1)
       {
           printf("\n Given Character Is In Lowercase ");
       }
       else if(Flag ==2)
       {
           printf("\n Given Character Is Digit ");
       }
       else
       {
           printf("\n Given Character Is Special Symbol");
       }

       printf("\n\n Thanks !!!!!!!");
       getch();
       return 0;
}
 int Upper_Lower_Spec(char ch)
 {
     if((ch >='A') && (ch <='Z'))
     {
         Flag = -1;
     }
     else if((ch >='a') && (ch<= 'z'))
    {
         Flag = 1;
     }
     else if((ch >= '0' ) && (ch <= '9'))
     {
         Flag = 2;
     }
     else
     {
         Flag = 3;
     }

     return Flag ;
 }
