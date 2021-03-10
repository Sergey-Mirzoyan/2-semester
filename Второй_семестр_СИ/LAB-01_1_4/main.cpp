#include <stdio.h>

int main()
{
    int p = 0, e = 0, n = 0;
    printf("#");
    scanf("%d", &n);
    p = ((n - 1) / 36) + 1;
    e = ((n - 1) % 36) / 4 + 1;
    printf("podezd= %d", p);
    printf(" etag= %d", e);
    return 0;
}
