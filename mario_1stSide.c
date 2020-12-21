#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //initialisation
    int n;
    int constant = 2;

    //user input
    do
    {
        n = get_int("Height: ");

    }
    while (n < 1 || n > 8);

    printf("The user input is %i \n", n);

//--- Main formula for building my pyramids -------------------------------------
//----Counting each column-------------------------------------------------------

//----Our first coordinate (1, number)-------------------------------------------------------
    for (int height = 1; height <= n; height++)
    {
        for (int space = n - 1; space >= height; space--) //--- Spaces on the left - second coordinate (number , 1 < n)
        {
        printf(" ");
        }

        for (int i = 1; i <= height  ; i ++)
            {
                printf("#");
            }
            printf("\n");
    }
    return 0;
}

