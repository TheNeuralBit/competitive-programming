#include <stdio.h>

int getNum() {
    char tmp[3];
    scanf("%c%c%c", tmp + 2, tmp + 1, tmp);

    int rtrn;
    sscanf(tmp, "%d", &rtrn);

    return rtrn;
}

int main () {
    int a = getNum();
    scanf(" ");
    int b = getNum();

    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }
}
