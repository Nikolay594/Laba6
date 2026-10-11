#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    double x, y;

    scanf("%lf %lf", &x, &y);

    if (x >= 2.0 && x * x + y * y <= 36.0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}