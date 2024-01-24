#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get numbers from user
    int x = get_float("x: ");
    int y = get_float("y: ");

    //Divide x by y
    float z = (float)x / (float)y;
    printf("%f\n", z);
}
