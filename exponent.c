#include <stdio.h>

int main() {
    int N, exp = 1;
    long double result = 1.0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (exp <= 3) {
        result *= N;
        printf("N^%d = %.0Lf\n", exp, result);
        ++exp;
    }

    return 0;
}