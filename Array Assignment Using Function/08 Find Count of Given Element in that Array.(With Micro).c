//08 Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Given Element in that Array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);

int Search_Element(int[],int);

 int main()
 {
     int Num[Size] = {} , Src_Ele = 0 ,Ret = 0;

     Accept_Element(Num);

     printf("\n Press Any Key To Display The Element ...");
     getch();
     system("cls");

     Display_Element(Num);

     printf("\n\n Enter The Element For Searching The Count Of Element In That Array = ");
     scanf("%d",&Src_Ele);

     Ret = Count_Element(Num,Src_Ele);

    printf("\n\n The Count Of Element %d  in That Array Is = %d", Src_Ele,Ret);

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
 }
 void Accept_Element(int Arr[])
 {
     int i = 0;

     for( i = 0 ; i < Size ; i++)
     {
         printf("\n Enter %d Element Of Array = ",i);
         scanf("%d",&Arr[i]);
     }
     return ;
 }
 void Display_Element(int Fun[])
 {
     int i = 0;

     for( i = 0 ; i < Size ; i++)
     {
         printf("\n The %d Element Of Array Is = %d", i ,Fun[i]);
     }
     return ;
 }
int Count_Element(int Arr[] , int No)
{
    int i = 0 , Cnt = 0;

    for( i = 0 ; i < Size ; i++)
    {
        if(No == Arr[i])
        {
           Cnt++;
        }
    }
    return Cnt;
}
