#include <stdio.h>
#include "gd.h"

double get_double(char *prompt, double min, double max);

int main() 
{
    double price, tip;
    price = get_double("Enter price meal: ", 0, 1000);

    tip = get_double("Enter tip amount (percent): ", 0, 100);

    double tipAmt = price * tip / 100;
    double total = price + tipAmt;
    printf("Tip amount: %lf\n", tipAmt);
    printf("Total amount: %lf\n", total);
}
