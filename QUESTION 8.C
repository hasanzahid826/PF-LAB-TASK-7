QUESTION 8.C

#include<stdio.h>
int main()
{
    int i,j;

    printf("Pattern 1:Stars\n");
    for(i=0; i<=5; i++){
        for(j=0; j<=5; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nPattern 2:numbers\n");
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\nPattern 3:Alphabets\n");
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%c",'A' + j - 1);
        }
        printf("\n");
    }

    printf("\nPattern 4:Stars with odd numbers\n");
    for(i=1; i<=5; i++){
        for(j=i; j<=2 * i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nPattern 5:Odd number sequence\n");
    for(i=1; i<=5; i++){
        for(j=1; j<=2 * i-1; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\nPattern 6:Alphabets with odd counts\n");
    for(i=1; i<=5; i++){
        for(j=1; j<=2 * i-1; j++){
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}