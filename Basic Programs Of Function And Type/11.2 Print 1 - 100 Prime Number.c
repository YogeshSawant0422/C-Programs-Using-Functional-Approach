//11.2 Print 1 - 100 Prime Number
#include<stdio.h>
#include<stdio.h>

void Is_Prime_Number();

int main()
{
    Is_Prime_Number();
    getch();
    return 0;
}
void Is_Prime_Number()
{
    int i = 0 , j = 2 ;
    printf("\n The Prime Number From 1 To 100 = \n ");

    while(i<=100)
    {
        j = 2;
        while( j <= i)
        {
            if( i % j == 0)
            {
                break;
            }
            j++;
        }
        if(i == j)
        {
            printf("\n\t%d",j);
        }
        i++;
    }
    return ;
}
