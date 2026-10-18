QUESTION 4.C

#include<stdio.h>
int main()
{
    int i,j,k;
    int hottestLayer = 0;
    int x=0, y=0, z=0;
    float temp[3][3][3];
    float sum,avg[3];
    float maxTemp;

    for(i=0; i<3; i++){
        printf("\nEnter temperature for layer %d:\n",i + 1);
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                printf("Enter temperature at(%d, %d, %d):",j + 1,k + 1,i + 1);
                scanf("%f",&temp[i][j][k]);
            }
        }
    }
    for(j=0; j<3; j++){
        sum = 0;
        for(j =0; j<3; j++){
            for(k=0; k<3; k++){
                sum += temp[j][k][i];
            }
        }
        avg[i] = sum/9.0;
        printf("\nAverage temperature of layer %d: %.2fC",i + 1,avg[i]);
    }
    for(i=1; i<3; i++){
        if(avg[i] > avg[hottestLayer]){
            hottestLayer= 1;
        }
    }
    printf("\nHottest lsyer:%d", hottestLayer + 1);
    printf("\nAverage temperature: %.2fC",avg[hottestLayer]);

    maxTemp= temp[0][0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                if(temp[i][j][k] > maxTemp){
                    maxTemp= temp[i][j][k];
                    x = i;
                    y = j;
                    z = k;
                }
            }
        }
    }
    printf("\nMaximum temperature:%.2fC", maxTemp);
    printf("\nCoordinates:(%d,%d,%d)\n",x + 1,y + 1,z + 1);
    return 0;
}