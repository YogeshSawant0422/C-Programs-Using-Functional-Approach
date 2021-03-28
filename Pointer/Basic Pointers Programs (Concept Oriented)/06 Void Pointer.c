// Void Pointer
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 15;
    int *iptr = &No;
    void *vptr = &No;

    printf("\n Address Of No : %d",&No);
    printf("\n Address Of iptr :%d",&iptr);
    printf("\n Value In iptr : %d",iptr);
    printf("\n Value In No : %d",No);
    printf("\n Value In No by Pointer : %d",*iptr);

    printf("\n =========================");

    printf("\n Address of vptr : %d",&vptr);
    printf("\n Value In vptr : %d",vptr);
  // printf("\n Value Of No by void pointer : %d",*vptr);   // Invalid Use Of Void Expression (Not Valid)

    getch();
    return 0;
}
