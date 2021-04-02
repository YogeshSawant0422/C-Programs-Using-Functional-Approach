//Single Structure Accept And Display
#include<stdio.h>
#include<conio.h>

struct Product
{
    int P_ID ;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};

int main()
{
    struct Product Prod1,Prod2,Prod3;

    //Accept Product Details
    printf("\n\n Accepting Product Details =>\n");

    //1 st Product
    printf("\n Enter 1St Product Id = ");
    scanf("%d",&Prod1.P_ID);

    printf("\n Enter 1St Product Name = ");
    scanf(" %[^\n]",&Prod1.P_Name);
    fflush(stdin);

    printf("\n Enter 1St Product Purchase Price = ");
    scanf("%f",&Prod1.P_P_Price);

    printf("\n Enter 1St Product  Sales Price = ");
    scanf("%f",&Prod1.P_S_Price);

    // 2 nd Product
    printf("\n Enter 2nd Product Id = ");
    scanf("%d",&Prod2.P_ID);

    printf("\n Enter 2nd Product Name = ");
    scanf(" %[^\n]",&Prod2.P_Name);
    fflush(stdin);

    printf("\n Enter 2nd Product Purchase Price = ");
    scanf("%f",&Prod2.P_P_Price);

    printf("\n Enter 2nd Product Sales Price = ");
    scanf("%f",&Prod2.P_S_Price);

    //Display Product Details

    printf("\n================ Product Details ==================\n");

    printf("\n 1St Product : \n Product ID : %d.\n Product Name : %s. \n Purchase Price : %0.2f \n Sales Price :%0.2f \n\n",Prod1.P_ID,Prod1.P_Name,Prod1.P_P_Price,Prod1.P_S_Price);
    printf("\n 2St Product : \n Product ID : %d.\n Product Name : %s. \n Purchase Price : %0.2f  \n Sales Price :%0.2f \n\n",Prod2.P_ID,Prod2.P_Name,Prod2.P_P_Price,Prod2.P_S_Price);

    printf("\n========================*******************=======================");
    printf("\n\nThanks !!!!!");
    getch();
    return 0;
}
