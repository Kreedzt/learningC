#include <stdio.h>

int main()
{
    char ch;
    int input_d;
    
    int even_count = 0;
    double even_average = 0;
    
    int odd_count = 0;
    double odd_average = 0;

    while (scanf("%d", &input_d) && input_d != 0) {
        if (input_d % 2 == 0) {
            ++even_count;
            if (even_average > 1) {
                even_average = (even_average * (even_count - 1) + input_d) / even_count;
            } else {
                even_average = input_d;
            }
        } else {
            ++odd_count;
            if (odd_count > 1) {
                odd_average = (odd_average * (odd_count - 1) + input_d) / odd_count;                
            } else {
                odd_average = input_d;
            }
        }
    }

    printf("odd_count: %d, odd_average: %lf\n", odd_count, odd_average);
    printf("even_count: %d, even_average: %lf", even_count, even_average);

    return 0;
}
