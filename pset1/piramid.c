#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int space;
    int hash;
    int i;
    
    do
    {
        printf("Please enter a height. Choose a number from 0 to 23:");
        height = GetInt();
    }
 while ((height < 0) || (height > 23));

    //build pyramid
    for (i = height; i >= 1; i--)
    {
        //add spaces
        for (space = 1; space < i; space++)
            printf(" ");

        //add hashtags
        for (hash = height; hash >= i-1; hash--)
            printf("#");

        printf("\n");
    }
}