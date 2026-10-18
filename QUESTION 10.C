QUESTION 10.C

#include<stdio.h>
int main()
{
    int classes, students, subjects;
    int i, j, k, marks;
    int total, passed;
    int classTotal,classStudents;
    int schoolTotal = 0;
    int schoolStudents = 0;
    float average, classAverage, schoolAverage;

    printf("Enter number of classes:");
    scanf("%d", &classes);

    for(i = 1; i <= classes; i++){
        printf("\nEnter numer of students in class %d: ",i);
        scanf("%d",&students);

        classTotal = 0;
        classStudents = 0;

        for(j =1;j <= students; j++){
            printf("\nEnter number of subjects for student %d: ",j);
            scanf("%d",&subjects);
            total = 0;
            passed = 1;
            for(k =1;k <= subjects; k++){
                printf("Enter marks in subjects %d:", k);
                scanf("%d", &subjects);
                total = total + marks;

                if(marks < 40){
                    passed = 0;
                }
            }
            average = (float)total / subjects;

            if(passed == 1){
                printf("Class %d, Student %d: Total marks = &d,Average = %.2f, Result = Pass\n",i,j,total, average);
            }
            else{
                printf("Class %d, Student %d: Total marks = %d, Average = %.2f, Result = Fail\n",i,j,total,average);
            }
            classTotal = classTotal + total;
            classStudents++;
        }
        classAverage = (float)classTotal/classStudents;
        printf("\nTotal marks of class %d = %d\n", i,classTotal);
        printf("Class average = %.2f\n", classAverage);
        schoolTotal = schoolTotal + classTotal;
        schoolStudents = schoolStudents + classStudents;
    }
    schoolAverage = (float)schoolTotal/schoolStudents;
    printf("\nTotal marks of all students = %d\n", schoolTotal);
    printf("Overall school average = %.2f\n", schoolAverage);

    return 0;
}