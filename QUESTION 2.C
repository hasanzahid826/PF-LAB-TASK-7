QUESTION 2.C

#include<stdio.h>
int main()
{
    int grid[3][3];
    int i,j,k,l;
    int valid = 1;

    printf("Enter 9 numbers (0 for empty cell):\n");
    for(i=0; i<3; i++){
        for(j=0 ;j<3; j++){
            scanf("%d", &grid[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(grid[i][j] < 0 || grid[i][j] > 9){
                valid = 0;
            }
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(grid[i][j] !=0){
                for(k=0; k<3; k++){
                    for(l=0; l<3; l++){
                        if(i!=k || j!=l){
                            if(grid[i][j] == grid[k][l]){
                                valid = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if(valid == 1){
        printf("Valid grid\n");
    }
    else{
        printf("Invalid Grid\n");
    }
    return 0;
}