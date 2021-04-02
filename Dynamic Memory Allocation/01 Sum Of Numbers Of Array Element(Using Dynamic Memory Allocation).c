//Sum Of Numbers Of Array Element(Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0 , iSum = 0 ,  i = 0;
   // int *iptr = NULL;

    printf("\n Enter How Many Customers : ");
    scanf("%d",&iCnt);

    int *iptr =(int*)malloc(iCnt * sizeof(int));

    for(i =0 ; i < iCnt ;i++)
    {
        printf("\n Enter Bill %d : ",i+101);
        scanf("%d",&iptr[i]);
    }
    printf("\n\n ============********=============\n");
    printf("\n Entered Bills Are => ");

    for(i = 0 ; i < iCnt ; i++)
    {
        iSum = iSum + iptr[i];
        printf("\t%d",iptr[i]);
    }

    printf("\n\n Sum Of Given Numbers Is = %d",iSum);

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}
