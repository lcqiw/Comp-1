#include <stdio.h>

int main() {
    int input = -1;
    int max;

    // Read input
    max = input;

    do {
        printf("\nPlease input number: ");
        scanf("%d", &input);

        if (input > max) {
            max = input;
        }
    } while (input != 0);

    printf("\nThe max is %d.", max);
    printf("\nThe current input is %d", input);

    return 0;
}
