////06.1 Create, Accept, Display Array Using Loop - with macro,
//Search Given Element in that Array & Return its Index If Found.
#include<stdio.h>
#include<conio.h>
#define Size 7
void Accept_Element(int[]);
void Display_Element(int[]);
int Src_Element(int[],int);
int main()
{
    int Num[Size] ={} , Ret = -1 , Src_Ele = 0 ;
    Accept_Element(Num);

    printf("\n Back To Main ...\n Please Press Any Key To Display Elements....");
    getch();

    Display_Element(Num);
    getch();

    printf("\n Search Given Element in that Array & Return its Index If Found.\n Press Key For Searching\n");

    getch();

      printf("\n Enter A Number For Searching = ");
     scanf("%d",&Src_Ele);

    Ret = Src_Element(Num,Src_Ele);

    if(-1 == Ret)
    {
         printf("\n Given Number %d Is Not Found In That Array ",Src_Ele);
    }
    else
    {
        printf("\n Given Number %d Is Found In %d Index ",Src_Ele,Ret);
    }

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
void Accept_Element(int Arr[])
{
    int i =0;
    for(i = 0 ; i < Size ;i++)
    {
        printf("\nEnter %d Element = ",i);
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int No[])
{
    int i = 0;
    for(i = 0 ; i<Size;i++)
    {
         printf("\n The %d Element Of Array Is = %d",i ,No[i]);
    }
    return ;
}
int Src_Element(int Arr[],int Src_Ele)
{
    int i = 0 ;
    for( i=0; i< Size ;i++)
    {
        if(Src_Ele == Arr[i])
        {
         break;
        }
    }
    if(Size == i)
    {
      i = -1;
    }
    return i;
}
