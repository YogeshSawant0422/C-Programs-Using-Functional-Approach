//06 Create, Accept, Display Array Using Loop - with macro ,
//Search Given Element in that Array & Return its Index If Found.
#include<stdio.h>
#include<conio.h>
#define Size 7
void Accept_Element(int[]);
void Display_Element(int[]);
void Src_Element(int[]);
int main()
{
    int Num[Size] ={};
    Accept_Element(Num);

    printf("\n Back To Main ...\n Please Press Any Key To Display Elements....");
    getch();

    Display_Element(Num);
    getch();

    printf("\nSearch Given Element in that Array & Return its Index If Found.\n Press Key For Searching\n");

    getch();

    Src_Element(Num);
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
void Src_Element(int Arr[])
{
    int i = 0 , Ele = 0;
    printf("\n Enter A Number For Searching = ");
    scanf("%d",&Ele);

    for( i =0; i < Size ; i++)
    {
        if(Ele == Arr[i])
        {
            break;
        }
    }
    if(i < Size)
    {
        printf("\n Given Number %d Is Found In %d Index ",Ele,i);
    }
    else
    {
        printf("\n Given Number %d Is Not Found In That Array ",Ele);
    }
    return;
}
