#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        long long n;

        if (scanf("%lld", &n) != 1) break;

        if (n == 2) {
            printf("2\n");
        } else if (n == 3) {
            printf("3\n");
        } else {
            printf("%lld\n", n % 2);
        }
    }

    return 0;
}
