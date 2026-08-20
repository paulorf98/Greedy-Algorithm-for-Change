#include <stdio.h>
#include <math.h>

int valid_change(void);

int main(void)
{
    int change = valid_change();

    int quarters = change / 25;
    change %= 25;

    int dimes = change / 10;
    change %= 10;

    int nickels = change / 5;
    change %= 5;

    int pennies = change;

    int total = quarters + dimes + nickels + pennies;

    printf("\nQuarters: %i\nDimes: %i\nNickels: %i\nPennies: %i\n", quarters, dimes, nickels, pennies);
    printf("\nTotal: %i\n", total);
}


int valid_change(void)
{
    float dollars;

    do
    {
        printf("Change owed (example: 0.41): ");
        scanf("%f", &dollars);
    }
    while (dollars < 0);

    int cents = round(dollars * 100);

    return cents;
}