#include <stdio.h>

#define DegreeToFahrenheit

double fahrenheitToCentigrade(double fahrenetit);
double centigradeToKelvin(double centigrade);

int main()
{
    double fahrenetit;
    double centigrade;
    double kelvin;

    printf("Input fahrenheitToCentigrade:");

    while (scanf("%lf", &fahrenetit) == 1) {
        centigrade = fahrenheitToCentigrade(fahrenetit);
        kelvin = centigradeToKelvin(centigrade);
        printf("fahrentetit: %.2f, centigrade: %.2f, kelvin: %.2f\n", fahrenetit, centigrade, kelvin);
        printf("Next val:");
    }

    printf("Done");

    return 0;
}

double fahrenheitToCentigrade(double fahrenetit) {
    const double degreeVal = 32.0;
    const double multiplyVal = 5.0 / 9.0;
    return multiplyVal * (fahrenetit - degreeVal);
}

double centigradeToKelvin(double centigrade) {
    const double plusVal = 273.16;
    return centigrade + plusVal;
}
