QUESTION 6.C

#include<stdio.h>
int main()
{
    int data[3][3], key[3][3], encrypted[3][3];
    int i, j, max, row, col;
    
    printf("Enter data matrix (3x3):\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &data[i][j]);
        }
    }
    printf("Enter key matrix (3x3):\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &key[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
        }
    }
    printf("Encrypted matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t",encrypted[i][j]);
        }
        printf("\n");
    }
    max = encrypted[0][0];
    row = 0;
    col = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(encrypted[i][j] > max){
                max = encrypted[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("\nMaximum encrypted value = %d\n",max);
    printf("Posution (row,column) = (%d, %d)\n",row,col);
    
    return 0;
}