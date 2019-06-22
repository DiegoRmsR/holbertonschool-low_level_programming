#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
        int a;
        int gg = 49;

        for (i = 48; i <= 57; i++)
        {
                for (a = gg; a <= 57; a++)
                {
                        putchar(i);
                        putchar(a);
                        if (i == 56 && i == 57)
                        {
                        }
                        if (i != 56 || a != 57)
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
