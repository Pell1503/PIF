#include <stdio.h>

int main(void) {
    printf("%-10s %-15s %-15s\n", "Celsius", "Fahrenheit", "Kelvin");

    for (int c = 0; c <= 100; c += 5) {
        double f = (9.0 * c) / 5.0 + 32.0;
        double k = c + 273.15;

        printf("%-10d %-15.2f %-15.2f\n", c, f, k);
    }

    return 0;
}
