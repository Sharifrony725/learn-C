#include <stdio.h>

int main(int argc, char **argv) {
    int a, b, c, d;
    printf("Enter four integers (separated by space): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max, min;
    if (a > b) {
       max = a;
       min = b;
    }
    else {
       max = b;
       min = a;
    }

    if (c > d) {
       if (c > max) {
          max = c;
       }
       if (d < min) {
          min = d;
       }
    }
    else {
       if (d > max) {
          max = d;
       }
       if (c < min) {
          min = c;
       }
    }
    printf("max = %d, min = %d\n", max, min);
    return 0;
}
