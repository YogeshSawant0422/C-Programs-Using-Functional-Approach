//Dynamic(According To User Count Of Products) Structures Accept & Display Product
#include<stdio.h>
#include<conio.h>

struct Product
{
    int P_ID;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};
int main()
{
    int Cnt = 0 , i = 0;
    struct Product *S_P_Ptr;

    // Accept Count For Dynamic memory Allocation
    printf("\n How Many Details Do You Have  = ");
    scanf("%d",&Cnt);

    S_P_Ptr = (struct Product*)malloc(Cnt * sizeof(struct Product));

    // Accept Product Details
    printf("\n Accepting Product Details => ");

    //Loop To Accept Details
    for(i = 0 ; i < Cnt ; i++)
    {
        printf("\n Enter %d Product ID = ", i +1);
        scanf("%d",&S_P_Ptr[i].P_ID);

        printf("\n Enter %d Product Name = ",i +1);
        scanf(" %[^\n]",&S_P_Ptr[i].P_Name);
        fflush(stdin);

        printf("\n Enter %d Product Purchase Price = ",i+1);
        scanf("%f",&S_P_Ptr[i].P_P_Price);

        printf("\n Enter %d Product Sales Price = ", i +1);
        scanf("%f",&S_P_Ptr[i].P_S_Price);
    }

    system("cls");
    printf("\n====================***************=======================\n");

    // Display Product Details
    printf("\n Display Product Details = >\n");

    for( i = 0 ; i < Cnt ;i++)
    {
        printf("\n %d Product Details : \n\n ID = %d. \n Name = %s.\n Purchase Price = %0.2f. \n Sales Price = %0.2f. \n\n", i +1 , S_P_Ptr[i].P_ID , S_P_Ptr[i].P_Name , S_P_Ptr[i].P_P_Price , S_P_Ptr[i].P_S_Price);
    }

    printf("\n====================*************=========================\n");
    free(S_P_Ptr);
    printf("\n\n Thanks !!!!!!");
    getch();
    return 0;
}
