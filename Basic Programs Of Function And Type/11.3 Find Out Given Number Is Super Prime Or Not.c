//11.3 Find Out Given Number  Is Super Prime
 #include<stdio.h>
 #include<conio.h>

  int Ret = 0;
  int Is_Super_Prime(int);
  int Is_Prime(int);

 int main()
 {
     int Num = 0;

     printf("\n Enter A Number To Find Out It Is Super Prime Or Not = ");
     scanf("%d",&Num);

      Ret = Is_Super_Prime(Num);

      if(Ret == 1)
      {
          printf("\n Given Number %d Is Neutral ",Num);
      }
      else if(Ret == 2)
      {
          printf("\n Given Number %d Is Prime ,But It Is Not Super Prime .",Num);
      }
      else if(Ret == 0)
      {
          printf("\n Given Number %d Is super Prime Number",Num);
      }
      else
      {
          printf("\n Given Number %d Is Not Prime Number ",Num);
      }

        printf("\n\n Thanks !!!!");

        getch();
        return 0;
 }
 int Is_Prime(int No)
 {
      int i = 0 , Flag = 0;
     if(No == 0 || No == 1)
     {
         Flag = 1;
         goto Down ;
     }
     for( i = 2 ;i < No ; i++)
     {
         if(No % i == 0)
         {
             break;
         }
     }
     if(No == i)
     {
        Flag = 2;
     }
     else
     {
         Flag = 3;
     }
     Down :
     return Flag;
 }
int Is_Super_Prime(int Num)
 {
     Ret = Is_Prime(Num);

     if(Ret == 2 )
     {
           int dSum = 0 , Temp = Num , Dig = 0;

           while(Temp > 0)
           {
               Dig = Temp % 10;
               dSum = dSum + Dig;
               Temp = Temp /10 ;
           }

           if(Is_Prime(dSum) == 2)
           {
               Ret = 0 ;
           }
     }
     return Ret ;
 }
