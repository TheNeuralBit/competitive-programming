#include <stdio.h>

int main() {
    int h, w, n, x;
    scanf("%d %d %d", &h, &w, &n);

    int curr = 0, height = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        curr += x;

        if (curr == w) {
            if (++height >= h) {
                printf("YES\n");
                return 0;
            }
            curr = 0;
        } else if ( curr > w ) {
            break;
        }

        scanf(" ");
    }

    printf("NO\n");
    return 0;
}
