QUESTION 9.C

#include<stdio.h>
int main()
{
    int departments, employees;
    int i,j,days;
    int salary, bonus;
    int departmentTotal, grandTotal = 0;

    printf("Enter number of departments: ");
    scanf("%d", &departments);
    for(i = 1; i <= departments; i++){
        printf("\nEnter number of employees in department %d: ", i);
        scanf("%d", &employees);

        departmentTotal = 0;

        for(j = 1; j <= employees; j++){
            printf("Enter days worked by employee %d: ", j);
            scanf("%d", &days);

            salary = days * 500;
            bonus = 0;

            if(days > 25){
                bonus = 2000;
            }
            salary = salary + bonus;
            printf("Department %d, Employee %d: Daysworked = %dsalary = Rs.%d\n", i,j,days,salary);
            departmentTotal = departmentTotal + salary;
        }
        printf("\nTotal dsalary of department %d = Rs.%d\n", i,departmentTotal);
        grandTotal = grandTotal + departmentTotal;
    }
    printf("\nTotal salary across all departments = Rs.%d\n",grandTotal);

    return 0;
}