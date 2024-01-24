#include <cs50.h>
#include <stdio.H>

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Not agreed.")
    }
}
