//Summation Of All Elements In Array (Using Accept , Display , Sum Function)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Element(int* , int);
void Display_ELemnt(int* , int);
int Summation_Element(int*,int);

int i = 0;

int main()
{
    int iCnt = 0 , iSum = 0 ;

    printf("\n Enter How Many Element For Summation = ");
    scanf("%d",&iCnt);

     int *iptr = (int*)malloc(iCnt * sizeof(int));

     printf("\n\n======== Accept Element ==========\n");
     Accept_Element(iptr,iCnt);
     printf("\n\n Press Any Key To Display The Given Elements...");
     getch();
     system("cls");
     printf("\n\n======== Display Element ==========\n");
     Display_Element(iptr,iCnt);
     printf("\n\n======== Summation Of Element =========\n");

     iSum = Summation_Element(iptr,iCnt);

     printf("\n\n The Summation Of Given Array Element Is = %d ",iSum);

     printf("\n\n Thanks !!!!!");
     getch();
     return 0;
}
void Accept_Element(int *Arr , int Size)
{
    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d Element =  ", i + 101);
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int *Arr ,int Size)
{
    for(i = 0 ; i < Size ; i++)
    {
        printf("\n %d Element Of An Array  = %d", i + 101,Arr[i]);
    }
    return ;
}
int Summation_Element( int *Arr , int Size)
{
    int Sum = 0;
    for(i = 0 ; i < Size ; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}
