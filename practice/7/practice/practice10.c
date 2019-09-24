#include <stdio.h>

#define BaseTaxLimit1 17850
#define BaseTaxLimit2 23900
#define BaseTaxLimit3 29750
#define BaseTaxLimit4 14875
#define BaseTaxRate 0.15
#define OverTaxRate 0.28

int main()
{
    int option;
    int taxLimit;
    double tax = 0;
    double salary = 0;

    do {
        printf("Select the category:\n");
        printf("1.单身\n");
        printf("2.户主\n");
        printf("3.已婚, 共有\n");
        printf("4.已婚, 离异\n");

        scanf("%d", &option);

        switch(option) {
        case 1:
            taxLimit = BaseTaxLimit1;
            break;
        case 2:
            taxLimit = BaseTaxLimit2;
            break;
        case 3:
            taxLimit = BaseTaxLimit3;
            break;
        case 4:
            taxLimit = BaseTaxLimit4;
            break;
        default:
            printf("Select the corrent option:");
        }
        if (taxLimit) {
            printf("Enter your salary:");
            scanf("%lf", &salary);

            printf("salary: %lf\n", salary);

            printf("BaseTaxRate: %lf\n", BaseTaxRate);
            if (salary <= taxLimit) {
                tax = salary * BaseTaxRate;
            } else {
                tax = salary * taxLimit;
                tax += (salary - taxLimit) * OverTaxRate;
            }
            printf("tax: %lf\n", tax);
            taxLimit = 0;
            salary = 0;
        }
    } while(!taxLimit);

    return 0;
}
