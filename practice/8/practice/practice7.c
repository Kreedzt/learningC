#include <stdio.h>

#define BaseSalary1 8.75
#define BaseSalary2 9.33
#define BaseSalary3 10.00
#define BaseSalary4 11.20

// #define BaseSalaryPerHour 1000
#define BaseWorkTimeHour 40
#define OverWorkSalaryCoefficient 1.5
#define BaseTax 0.15
#define BaseLimit 300
#define SecondTax 0.2
#define SecondLimit 150
#define ThirdTax 0.25

int main()
{
    double BaseSalaryPerHour = 0;
    char option;
    double workHours = 0;
    
    double salary = 1;
    double tax = 0;
    double netIncome = 0;

    do {
        printf("********\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a)$%.2f/hr", BaseSalary1);
        printf("    ");
        printf("b)$%.2f/hr\n", BaseSalary2);
        printf("c)$%.2f/hr", BaseSalary3);
        printf("    ");
        printf("d)$%.2f/hr\n", BaseSalary4);
        printf("q)quit\n");
        printf("********\n");
        while ((option = getchar()) != '\n') {
            break;
        }
        switch (option) {
        case 'a':
            BaseSalaryPerHour = BaseSalary1;
        case 'b':
            BaseSalaryPerHour = BaseSalary2;
        case 'c':
            BaseSalaryPerHour = BaseSalary3;
        case 'd':
            BaseSalaryPerHour = BaseSalary4;
            break;
        case 'q':
            printf("Bye");
            return 0;
        default:
            printf("Select corrent option:\n");
        };
    } while (!BaseSalaryPerHour);

    
    
    printf("Enter hours one week you worked:");
    scanf("%lf", &workHours);

    if (workHours < BaseWorkTimeHour) {
        salary = BaseSalaryPerHour * workHours;
    } else {
        salary = BaseSalaryPerHour * BaseWorkTimeHour;
        salary += BaseSalaryPerHour * OverWorkSalaryCoefficient * (workHours - BaseWorkTimeHour);
    }

    printf("salary: %lf\n", salary);

    if (salary < BaseLimit) {
        tax = BaseTax * salary;
    } else if (salary < SecondLimit) {
        tax = BaseTax * BaseLimit;
        tax += SecondTax * (salary - BaseLimit);
    } else {
        tax = BaseTax * BaseLimit + SecondTax * SecondLimit;
        tax += ThirdTax * (salary - BaseLimit - SecondLimit);
    }

    netIncome = salary - tax;

    printf("tax: %lf\n", tax);
    printf("netIncome: %lf", netIncome);

    return 0;
}
