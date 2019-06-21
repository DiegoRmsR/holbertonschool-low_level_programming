#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int gg, lol;

        for (gg = 48; gg <= 57; gg++)
        {
                for (lol = 48; lol <= 57 ; lol++)
                {
                        putchar (gg);
                        putchar (lol);
                        if (gg != 57 || lol != 57)
                        {
                                putchar (44);
                                putchar (' ');
                        }
                }
        }
        putchar ('\n');
        return (0);
}
