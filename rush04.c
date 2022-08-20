#include <unistd.h>

void ft_putchar(char a) {

        write(1, &a, 1);
}

void bottomLetters(int a, int b) {
        int count;

        if (b > 1) {
                count = 0;
                ft_putchar('\n');
                ft_putchar('C');
                while(count < ( a - 2)) {
                        ft_putchar('B');
                        count++;
                }
                if (a > 1) {
                        ft_putchar('A');
                }
        }

}

void middle(int a , int b) {
        int count;
        int innerCount;

        if (b > 2) {
                count = 0;
                while(count < ( b - 2)) {
                        innerCount = 0;
                        ft_putchar('\n');
                        ft_putchar('B');
                        while(innerCount <  ( a - 2 ) ) {
                                ft_putchar(' ');
                                innerCount++;
                        }
                        if (a > 1) {
                                ft_putchar('B');
                        }
                        count++;
                }
        }

}

void rush(int a, int b) {
        int count;

        if (a > 0 && b > 0) {
                count = 0;
                ft_putchar('A');
                while(count < (a - 2)) {
                        ft_putchar('B');
                        count++;
                }

                if (a > 1) {
                        ft_putchar('C');
                }
                middle(a, b);
                bottomLetters(a, b);
        }

}


int main(void) {
        rush(0, 0);
        return (0);
}
