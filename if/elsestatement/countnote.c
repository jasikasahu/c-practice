#include <stdio.h>

int main() {
    int amount, count = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    count += amount / 500;
    amount %= 500;

    count += amount / 200;
    amount %= 200;

    count += amount / 100;
    amount %= 100;

    count += amount / 50;
    amount %= 50;

    count += amount / 20;
    amount %= 20;

    count += amount / 10;
    amount %= 10;

    printf("Total number of notes = %d", count);

    return 0;
}