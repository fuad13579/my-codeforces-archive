#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int p[n];
        p[0] = (n + 1) / 2;  

        for (int i = 1; i < n; i++) {
            if (i % 2 == 1) {
                p[i] = p[i - 1] + i;
            } else {
                p[i] = p[i - 1] - i;
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}
