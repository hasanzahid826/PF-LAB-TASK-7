QUESTION 1.C

#include<stdio.h>
int main()
{
    int seats[10][4]={0};
    int n,row,seat;
    int i,j,count;
    int fullRows=0;
    
    printf("How many seats do you want to reserve? ");
    scanf("%d", &seats);
    if(n < 0 || n > 40){
        printf("Invalid number of representation!\n");
        return 0;
    }
    for(i=0; i<n; i++){
        printf("\nReservation %d\n", i + 1);
        while(1){
            printf("Enter row number (1-10): ");
            scanf("%d",&row);
            printf("Enter seat number (1-10): ");
            scanf("%d", &seats);

            if(row < 1 || row > 10 || seat < 1 || seat > 4){
                printf("Invalid row or seats number!\n");
                continue;
            }
            if(seats[row - 1][seat -1] == 1){
                printf("Seat already booked\n");
            }
            else{
                seats[row - 1][seat - 1]= 1;
                printf("Seat reserved successfully!\n");
                break;
            }
        }
    }
    printf("\n------Seating Arrangment------\n");
    printf("Row seat1 seat2 seat3 seat4\n");

    for(i=0; i<10; i++){
        printf("%-5d", i + 1);
        for(j=0; j<4; j++){
            printf("%-6d", seats[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<10; i++){
        count = 0;
        for(j=0; j<4; j++){
            if(seats[i][j] == 1){
                count++;
            }
        }
        if(count == 4){
            fullRows++;
        }
    }
    printf("\nTotal fully booked rows: %d\n", fullRows);
    return 0;
}