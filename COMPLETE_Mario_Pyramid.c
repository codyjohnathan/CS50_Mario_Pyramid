#include <stdio.h>
#include <string.h>

int main(void)
{
//-----initialisation for the number we're taking off of our user-----------------//
    int n;

//-----getting our user input: It must be within the range 1 - 8 ----------------//
    do
    {
        printf("Height:");
        if (!scanf("%d", &n))
        {
            scanf("%*[^\n]"); //discard that line up to the newline
            printf("Could not read an integer value!\n");
        }
    }
    while (n < 1 || n > 8);

//--- Main formula for building my pyramids -------------------------------------//

//----This sets our height of our Pyramid and helps us print to each row individually-------------------------------------------------------//
    for (int height = 1; height <= n; height++)
    {

//----Inside our height loop we set our amount of spaces for our first pyramid---//
        for (int space = n - 1; space >= height; space--)
        {
        printf(" ");
        }

//----This sets our spaces which are based-----//
        for (int i = 1; i <= height  ; i ++)
            {
                printf("#");
            }
//----This is our gap! -------------------------//
        for (int gap = 0; gap < 2; gap++)
        {
          printf(" ");
        }
// -----------second pyramid----------------//
        for (int j = 1; j <= height; j++)
        {
            printf("#");
        }
//-----Here we start a new line and again execute all our code, until our conidition is met and the loop terminates--//
        printf("\n");

    }

    return 0;
}
