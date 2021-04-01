#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 21;
    const int *ptr = &Num;

    printf("\n Value Of Num = %d ",Num);

    Num = 98;

    printf("\n Value Of Num After Increment = %d",Num);

    getch();
    return 0;
}
