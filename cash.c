#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Prompts user to input change owed
    int cents = get_cents();

    // Calculate the number of quarters
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    int coins = quarters + dimes + nickels + pennies;
    {
        printf("%d\n", coins);
    }
}

// Function prompts user to input change owed
int get_cents()
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

// Function calculates the amount of quarters
int calculate_quarters(int cents)
{
    int count = 0;
    while (cents >= 25)
    {
        count++;
        cents = cents - 25;
    }
    return count;
}

// Function calculates the amount of dimes
int calculate_dimes(int cents)
{
    int count = 0;
    while (cents >= 10)
    {
        count++;
        cents = cents - 10;
    }
    return count;
}

// Function calculates the amount nickels
int calculate_nickels(int cents)
{
    int count = 0;
    while (cents >= 5)
    {
        count++;
        cents = cents - 5;
    }
    return count;
}

// Function calculates the amount of pennies
int calculate_pennies(int cents)
{
    int count = 0;
    while (cents >= 1)
    {
        count++;
        cents = cents - 1;
    }
    return count;
}
