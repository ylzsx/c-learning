#include <stdio.h>
#include <stdlib.h>

static int add(int a, int b) {
    return a + b;
}

static int sub(int a, int b) {
    return a - b;
}

int main() {

    int a = 3, b = 5;
    int (*funp[2])(int, int);
    int ret, i;

    funp[0] = add;
    funp[1] = sub;

    for (i = 0; i < 2; i++) {
        ret = funp[i](a, b);
        printf("%d\n", ret);
    }


    exit(0);
}
