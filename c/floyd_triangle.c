#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    if (argc > 1) n = atoi(argv[1]);
    else {
        printf("Enter number of rows: ");
        if (scanf("%d", &n) != 1) return 1;
    }
    int num = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) printf("%d ", num++);
        printf("\n");
    }
    if (argc == 1) { int c; while ((c = getchar()) != '\n' && c != EOF) { } printf("Press Enter to exit..."); getchar(); }
    return 0;
}
