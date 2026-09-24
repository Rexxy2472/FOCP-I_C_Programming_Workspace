#include <stdio.h>
int main() {
    int x=10;
    printf("x=%d\n",x);
    x+=5;
    printf("x=%d\n",x);
    x-=3;
    printf("x=%d\n",x);
    x*=5;
    printf("x=%d\n",x);
    x/=2;
    printf("x=%d\n",x);
    x%=2;
    printf("x=%d\n",x);
    return 0;
}