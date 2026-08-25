#include <stdio.h>

struct element {
    int x;
    int y;
};

int main() {
    struct element a[4], result[4];
    int i, j, c = 0;

    printf("Enter 4 intervals (start end):\n");
    for (i = 0; i < 4; i++) {
        scanf("%d %d", &a[i].x, &a[i].y);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (a[i].x > a[j].x) {
                struct element temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    result[0] = a[0];
    c = 1;

    for (i = 1; i < 4; i++) {
        if (a[i].x <= result[c - 1].y) {
            if (a[i].y > result[c - 1].y) {
                result[c - 1].y = a[i].y;
            }
        } else {
            result[c] = a[i];
            c++;
        }
    }

    printf("Merged intervals are:\n");
    for (i = 0; i < c; i++) {
        printf("{%d,%d}", result[i].x, result[i].y);
        if (i < c    - 1) {
            printf(", ");
        }
    }

    return 0;
}

/*
Sample input:
1 3
2 4
6 8
9 10

Output:
Merged intervals are:
{1,4}, {6,8}, {9,10}
*/ 