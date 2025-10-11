#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows (half height): ");
    if (scanf("%d", &n) != 1) return 1;
    // upper half
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < n - i; ++s) printf(" ");
        for (int j = 0; j < 2*i-1; ++j) printf("*");
        printf("\n");
    }
    // lower half
    for (int i = n-1; i >= 1; --i) {
        for (int s = 0; s < n - i; ++s) printf(" ");
        for (int j = 0; j < 2*i-1; ++j) printf("*");
        printf("\n");
    }
    return 0;
}
