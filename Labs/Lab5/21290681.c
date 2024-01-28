#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int interesting_number(int n, int p) {
    int digits[10];
    int i, ja, total = 0;

    for (i = 0; n > 0; i++) {
        digits[i] = n % 10;
        n /= 10;
    }

    for (ja = 0; ja < i; ja++) {
        total += power(digits[ja], p+ja);
    }

    if (total % n == 0) {
        return total / n;
    } else {
        return -1;
    }
}

int main() {
    int say1, say2;
    scanf("%d %d", &say1, &say2);
   printf("%d\n", interesting_number(say1, say2));
  
    return 0;
}
