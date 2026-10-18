QUESTION 3.C

#include<stdio.h>
int main()
{
    int sales[4][5];
    int totalSalesman[4] = {0};
    int totalProduct[5] = {0};
    int i, j, maxProduct = 0;
    float bonus, finalAmount;

    for(i=0; i<4; i++){
        printf("Enter sales for salesman %d:\n", i + 1);
        for(j=0; j<5; j++){
            printf("Product %d: Rs.", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }
    printf("\n--- Total sales per Salesman---\n");
    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            totalSalesman[i] += sales[i][j];
        }
        printf("Salesman %d: Rs. %d\n", i + 1, totalSalesman[i]);
    }
    printf("\n---total sale per product---\n");
    for(j=0; j<5; j++){
        for(i=0; i<4; i++){
            totalProduct[j] += sales[i][j];
        }
        printf("Product %d: Rs.%d\n", i + 1, totalProduct[j]);
    }
    for(j=1; j<5; j++){
        if(totalProduct[j] > totalProduct[maxProduct]){
            maxProduct = j;
        }
    }
    printf("\nBest selling product: product %d", maxProduct + 1);
    printf("\nTotal revenue: Rs.%d\n", totalProduct[maxProduct]);
    printf("\n---Final amount after bouns---\n");

    for(i=0; i<5; i++){
        if(totalSalesman[i] > 10000){
            bonus = totalSalesman[i] * 0.10;
            finalAmount = totalSalesman[i] + bonus;

            printf("Salesman %d: Bonus applied = Rs.%.2f,""Final Amount = Rs.%.2f\n",i + 1,bonus,finalAmount);
        }
        else{
            finalAmount = totalSalesman[i];
            printf("Salesman %d: No bonus,""Final amouunt = Rs.%.2f\n", i + 1,finalAmount);
        }
    }
    return 0;    
}