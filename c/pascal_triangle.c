#include <stdio.h>
#include <stdlib.h>

int comb(int n, int k) {
    if (k == 0 || k == n) return 1;
    int res = 1;
    if (k > n - k) k = n - k;
    for (int i = 0; i < k; ++i) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main(int argc, char *argv[]) {
    int n;
    if (argc > 1) n = atoi(argv[1]);
    else {
        printf("Enter number of rows: ");
        if (scanf("%d", &n) != 1) return 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int s = 0; s < n - i - 1; ++s) printf(" ");
        for (int j = 0; j <= i; ++j) printf("%d ", comb(i, j));
        printf("\n");
    }
    if (argc == 1) { int c; while ((c = getchar()) != '\n' && c != EOF) { } printf("Press Enter to exit..."); getchar(); }
    return 0;
}
