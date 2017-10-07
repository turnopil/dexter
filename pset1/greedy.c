#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)  
{
    float change;
    int coins, cents;
    
    printf("O Hai! ");

    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
        
        if(change == 0||change <= 0)
        printf("Number Should be greater then Zero \n:");
        
    }
    while (change < 0);

    // Converting to cents
    cents = (int) round(change * 100);

    coins = 0;

    // Quarters
    coins += cents / 25;
    cents %= 25;

    // Dimes
    coins += cents / 10;
    cents %= 10;

    // Nickels
    coins += cents / 5;
    cents %= 5;

    // Pennies
    coins += cents;

    // Result
    printf("%i\n", coins);

    return 0;
}