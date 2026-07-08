// 
// A collection of 14 classic console patterns.
// Run this file to print all patterns one after another,
// or call any individual function (e.g. pattern_5_diamond()).
//


#include <stdio.h>
#include <math.h>

// 1. Right Triangle
void pattern_1_right_triangle() {
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// 2. Inverted Triangle
void pattern_2_inverted_triangle() {
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// 3. Pyramid
void pattern_3_pyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// 4. Inverted Pyramid
void pattern_4_inverted_pyramid() {
    int n = 5;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// 5. Diamond
void pattern_5_diamond() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// 6. Number Triangle
void pattern_6_number_triangle() {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// 7. Same Number Triangle
void pattern_7_same_number_triangle() {
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// 8. Alphabet Triangle
void pattern_8_alphabet_triangle() {
    for (int i = 65; i < 70; i++) {
        for (int j = 65; j <= i; j++) {
            printf("%c ", (char)j);
        }
        printf("\n");
    }
}

// 9. Floyd's Triangle
void pattern_9_floyds_triangle() {
    int n = 1;
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}

// Helper function to calculate combinations (for Pascal's Triangle)
long comb(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }
    long result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

// 10. Pascal's Triangle
void pattern_10_pascals_triangle() {
    int n = 6;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%ld ", comb(i, j));
        }
        printf("\n");
    }
}

// 11. Hollow Square
void pattern_11_hollow_square() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// 12. Hollow Triangle
void pattern_12_hollow_triangle() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// 13. Reversed Alphabet Triangle
void pattern_13_reversed_alphabet_triangle() {
    for (int i = 69; i > 64; i--) {
        for (int j = 69; j >= i; j--) {
            printf("%c ", (char)j);
        }
        printf("\n");
    }
}

// 14. Checkerboard
void pattern_14_checkerboard() {
    int n = 6;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                printf("\u25a0 ");  // Filled square
            } else {
                printf("\u25a1 ");  // Empty square
            }
        }
        printf("\n");
    }
}

// Function pointer type for pattern functions
typedef void (*PatternFunc)(void);

// Structure to hold pattern info
typedef struct {
    const char *title;
    PatternFunc func;
} Pattern;

// All patterns
Pattern patterns[] = {
    {"1. Right Triangle", pattern_1_right_triangle},
    {"2. Inverted Triangle", pattern_2_inverted_triangle},
    {"3. Pyramid", pattern_3_pyramid},
    {"4. Inverted Pyramid", pattern_4_inverted_pyramid},
    {"5. Diamond", pattern_5_diamond},
    {"6. Number Triangle", pattern_6_number_triangle},
    {"7. Same Number Triangle", pattern_7_same_number_triangle},
    {"8. Alphabet Triangle", pattern_8_alphabet_triangle},
    {"9. Floyd's Triangle", pattern_9_floyds_triangle},
    {"10. Pascal's Triangle", pattern_10_pascals_triangle},
    {"11. Hollow Square", pattern_11_hollow_square},
    {"12. Hollow Triangle", pattern_12_hollow_triangle},
    {"13. Reversed Alphabet Triangle", pattern_13_reversed_alphabet_triangle},
    {"14. Checkerboard", pattern_14_checkerboard},
};

int main() {
    int num_patterns = sizeof(patterns) / sizeof(patterns[0]);
    
    for (int i = 0; i < num_patterns; i++) {
        printf("\n%s\n", patterns[i].title);
        
        // Print separator line
        for (int j = 0; patterns[i].title[j] != '\0'; j++) {
            printf("-");
        }
        printf("\n");
        
        // Call the pattern function
        patterns[i].func();
    }
    
    return 0;
}
