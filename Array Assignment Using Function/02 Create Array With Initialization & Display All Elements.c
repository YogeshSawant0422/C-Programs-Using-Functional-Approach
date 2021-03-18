//02 Create Array With Initialization & Display All Elements
#include<stdio.h>
#include<conio.h>

void Dispaly_Elements(int [] ,int);

int main()
{
    int Num[5] = {5,10,15,20,25};

    Display_Elements(Num , 5);
    getch();
    return 0;
}
void Display_Elements(int Arr[] , int Size)
{
    printf("\n Enter 0 Element = %3d",Arr[0]);
    printf("\n Enter 1 Element = %3d",Arr[1]);
    printf("\n Enter 2 Element = %3d",Arr[2]);
    printf("\n Enter 3 Element = %3d",Arr[3]);
    printf("\n Enter 4 Element = %3d",Arr[4]);

    printf("\n\nThanks !!!!!");

    return ;
}

