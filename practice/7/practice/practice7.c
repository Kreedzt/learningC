#include <stdio.h>

#define BaseSalaryPerHour 1000
#define BaseWorkTimeHour 40
#define OverWorkSalaryCoefficient 1.5
#define BaseTax 0.15
#define BaseLimit 300
#define SecondTax 0.2
#define SecondLimit 150
#define ThirdTax 0.25

int main()
{
    double workHours = 0;
    
    double salary = 0;
    double tax = 0;
    double netIncome = 0;
    
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
