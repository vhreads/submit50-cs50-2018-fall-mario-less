#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int h;
    // Ask user for the height
    do 
    {
    h = get_int("Please enter the h: ");
    }    
    while (h<1 || h>8);
            // Start graphics
     for (int i = 1; i <= h; i++)
     {
        for (int s=h-i; s>0; s--)
        {
             printf(" ");
        }
        for (int t=1; t<=i; t++)
        {
            printf("#");
        }
        printf("\n");
     }
     return 0;
}
