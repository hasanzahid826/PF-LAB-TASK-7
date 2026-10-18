QUESTION 7.C

#include<stdio.h>
int main()
{
    int i, j;

    printf("Increasing triangle:\n");
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\nDecreasing trianle:\n");
    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\nMultiplication Triangle:\n");
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d",i * j);
        }
        printf("\n");
    }
    return 0;
}