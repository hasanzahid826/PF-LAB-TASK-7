QUESTION 5.C

#include<stdio.h>
int main()
{
    int marks[2][3][3];
    int total[2][3] = {0};
    int topper[2];
    int overallClass = 0,overallStudents = 0;

    for(int c=0; c<2; c++){
        printf("\nClass %d\n",c + 1);
        for(int s=0; s<3; s++){
            printf("Student %d:\n",s + 1);
            for(int sub=0; sub<3; sub++){
                printf("Enter marks of subject %d:", sub + 1);
                scanf("%d",&marks[c][s][sub]);
            }
        }
    }
    for(int c=0; c<3; c++){
        for(int s=0; s<3; s++){
            for(int sub=0; sub<3; sub++){
                total[c][s] += marks[c][s][sub];
            }
            printf("Class %d,students %d total = %d\n",c + 1,s + 1,total[c][s]);
        }
    }
    for(int c=0; c<3; c++){
        topper[c]=0;
        for(int s=0; s<3; s++){
            if(total[c][s] > total[c][topper[c]]){
                topper[c]= s;
            }
        }
        printf("\nTop performer of class %d:student %d with %d marks\n",c + 1,topper[c] + 1,total[c][topper[c]]);
    }
    for(int c=0; c<3; c++){
        for(int s=0; s<3; s++){
            if(total[c][s] > total[overallClass][overallStudents]){
                overallClass = c;
                overallStudents = s;
            }
        }
    }
    printf("\nOverall top performer: Class %d, Student %d with %d marks\n",overallClass + 1,overallStudents + 1,total[overallClass][overallStudents]);
    return 0;   
}
