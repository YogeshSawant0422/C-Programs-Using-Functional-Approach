//11.2 Print 1 - 100 Prime Number
#include<stdio.h>
#include<stdio.h>

void Is_Prime_Number( );

int main()
{
    Is_Prime_Number();
    getch();
    return 0;
}
void Is_Prime_Number()
{
    int i = 0 ,Cnt = 0;

    for( i= 1; i < 100 ; i++)
    {
        if( i % i == 0 && i % 1 == 0 )
        {
            break;
        }
    }
    if( i % i != 0)
    {
       printf("\n\t%d",i++);
    }
    return 0;
}
