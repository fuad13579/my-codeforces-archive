#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);

        long long mov = 0;
        long long cur = -1;

        for (long long m = n; m >= 1; ) {
            long long pos = a / m;
            if (pos >= b) {
                mov++;  
                break;
            }

            if (pos != cur) {
                mov++;
                cur = pos;
            }
            m = a / pos - 1;
        }

        printf("%lld\n", mov);
    }
    return 0;
}
