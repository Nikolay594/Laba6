# Laba6


#include <stdio.h>

int main() {
    double x, y;

    scanf("%lf %lf", &x, &y);

    if (x >= 2 && x <= 6 &&
        x * x + y * y <= 36 &&
        x * x + y * y >= 16) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
<img width="1420" height="1108" alt="gost-flowchart" src="https://github.com/user-attachments/assets/6c49b27f-9f46-42e8-87ea-7c139378e332" />
