#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int a;
        int b;
        int gg = 49;

        for (a = 48; a <= 57; a++)
        {
                for (b = gg; b <= 57; b++)
                {
                        putchar(a);
                        putchar(b);
                        if (a == 56 && b == 57)
                        {
                                return(0);
                        }
                        if (a != 56 || b != 57)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
            gg++;
        }
        putchar('\n');
        return (0);
}
