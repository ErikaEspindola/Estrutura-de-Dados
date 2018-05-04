#include <bits/stdc++.h>

int mdc(int x, int y) {
    if (y == 0)
        return x;
    else
        return mdc(y, x % y);
}

int main(){
    int x, y, z;

    while(scanf("%d %d %d", &x, &y, &z) == 3) {
        if((x*x != (y*y) + (z*z)) && (y*y != (x*x) + (z*z)) && (z*z != (y*y) + (x*x))) {
            printf("tripla\n");
        } else if((mdc(x,mdc(y, z))) == 1) {
            printf("tripla pitagorica primitiva\n");
        } else if((x*x == (y*y) + (z*z)) || (y*y == (x*x) + (z*z)) || (z*z == (y*y) + (x*x))) {
            printf("tripla pitagorica\n");
        }
    }

    return 0;
}
