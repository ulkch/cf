#include "stdio.h"
#include "string.h"

int main()
{
    int n = 1;
    char buff[101];
    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%s", buff);
        int len = strlen(buff);
        len <= 10 ? printf("%s\n", buff) : printf("%c%d%c\n", buff[0], len-2, buff[len-1]);
    }

}
