// Size Of Pointer Variable OR DataType(Memory Allocation)
#include<stdio.h>
#include<conio.h>

struct ABC
{
    char Name[20];
    int a ;
    float per;
    double j;
};

int main()
{
    char *c;
    int *i;
    float *f;
    double *d;

    struct ABC *sptr;

    printf("\n\t%d %d %d %d %d",sizeof(c),sizeof(i),sizeof(f),sizeof(d),sizeof(sptr));

    getch();
    return 0;
}
