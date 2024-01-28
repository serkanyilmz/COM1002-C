#include <stdio.h>

int main() {
    int n, i, sum = 0;
    char isbn[20];
    scanf("%d", &n);
    scanf("%s", isbn);

    if (n == 10) {
	int l=0;
        for (i = 0; i < 14; i++) {
            if (isbn[i] == '-')
                continue;
	l++;
            sum += (isbn[i] - '0') * l;
        }
        if (sum % 11 == 0)
            printf("The sum is %d. This is ISBN \n",sum);
        else
            printf("The sum is %d. This is not ISBN \n",sum);
    }
    else if (n == 13) {
        for (i = 0; i < 13; i++) {
            if (isbn[i] == '-')
                continue;
            if (i % 2 == 0)
                sum += isbn[i] - '0';
            else
                sum += 3 * (isbn[i] - '0');
        }
        if (sum % 10 == 0)
            printf("The sum is %d. This is ISBN \n",sum);
        else
            printf("The sum is %d. This is not ISBN \n",sum);
    }

    return 0;
}
