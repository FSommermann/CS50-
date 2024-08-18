#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare the variables as integers
    int height, row, space, bricks;
    // Prompt user for height from 1-8 for pyramid
    // Do-While Loop to declare the height of the pyramid -
    // while the number is between 1-8
    do
    {
        height = get_int("Enter height from 1-8 here: ");
    }
    while (height < 1 || height > 8);
    // Print rows of bricks
    for (row = 0; row < height; row++)
    {
        // Print Spaces before the bricks because we want a right aligned pyramid
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // Print bricks (#), brick loop is nested inside of the row loop
        for (bricks = 0; bricks <= row; bricks++)
        {
            printf("#");
        }
        // Print two spaces between the bricks
        {
            printf("  ");
        }
        // Print the same amount of bricks like before just without the spaces in front
        for (bricks = 0; bricks <= row; bricks++)
        {
            printf("#");
        }
        printf("\n");
    }
}
