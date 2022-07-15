#include <stdio.h>

int main()
{
    unsigned long long int n,m,a,res;
    scanf("%lld%lld%lld", &n, &m, &a);
    res = ((n+a-1)/a)*((m+a-1)/a);
    printf("%lld\n",res);
    return 0;
}