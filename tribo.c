#include <stdio.h>

int main() {
    int limit;
    printf("Please enter the end limit: ");
    scanf("%d", &limit);

    int i;
    int a = 0, b = 1, c = 1, tribo;

    for (i = 1; i <= limit; i++) {
        if (i == 1) {
            printf("%d ", a);
        }
        else if (i == 2) {
            printf("%d ", b);
        }
        else if (i == 3) {
            printf("%d ", c);
        }
        else {
            tribo = a + b + c;
            printf("%d ", tribo);
            // Shift the previous values
            a = b;
            b = c;
            c = tribo;
        }
    }

    return 0;
}
