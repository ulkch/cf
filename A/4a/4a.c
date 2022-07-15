#include <stdio.h>


int main_() {
    int n = 1;
    scanf("%d", &n);
    (n % 2 == 1 || n < 3) ? printf("NO\n") : printf("YES\n");
    return 0;
}
