#include <stdio.h>

int main()
{
    const float a = 2.05;
    const float b = 1.15;
    const float c = 1.09;

    float option = 0;

    double price = 0;
    double sale_price = 0;
    double real_price = 0;
    double total_pound = 0;
    double current_pound = 0;
    double shipping_price = 0;
    // double package_price = 0;
    
    // double a_pound = 0;
    // double a_weight = 0;
    
    // double b_pound = 0;
    // double b_weight = 0;
    
    // double c_pound = 0;
    // double c_weight = 0;

    char ch;

    do {
        printf("\nSelect the category:\n");
        printf("a.2.05$\n");
        printf("b.1.15$\n");
        printf("c.1.09\n");
        printf("q.exit\n");

        scanf(" %c", &ch);
        switch (ch) {
        case 'a':
            option = a;
            break;
        case 'b':
            option = b;
            break;
        case 'c':
            option = c;
            break;
        case 'q':
            printf("Caculating...\n");
            break;
        default:
            // printf("Error option!\n");
            continue;
        }
        if (ch == 'q') {
            break;
        }
        printf("Enter the weights:");
        scanf("%lf", &current_pound);
        total_pound += current_pound;
        price += current_pound * option;
        option = 0;
    } while (option == 0);

    printf("Total price: %lf\n", price);
    printf("Total pound: %lf\n", total_pound);

    if (price > 100) {
        sale_price = price * 0.05;
        real_price = price - sale_price;
    } else {
        real_price = price;
    }

    if (total_pound <= 5) {
        shipping_price = 6.5;
    } else if (total_pound <= 20) {
        shipping_price = 14;
    } else {
        shipping_price = 6.5 + 14 + (total_pound - (20 + 6.5)) * 0.5;
    }

    printf("Sale_price:%lf\n", sale_price);    
    printf("Real_price:%lf\n", real_price);
    printf("Shipping_price:%lf\n", shipping_price);
    printf("Total_purchase:%lf", real_price + shipping_price);

    return 0;
}
