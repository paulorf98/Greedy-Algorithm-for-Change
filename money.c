#include <stdio.h>
#include <cs50.h>

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

    printf("\nQuarters: %i\nDimes: %i\nNickels: %i\nPennies: %i\n", quarters, dimes, nickels, pennies);
}


int valid_change(void)
{
    int change;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);
    return change;
}