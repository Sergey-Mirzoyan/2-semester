#include <stdio.h>

int main(void)
{
    float t1, t2, v1, v2;
    scanf("V1 = %f, T1 = %f", &v1,&t1);
    scanf("V2 = %f, T2 = %f", &v2,&t2);
    printf("V = %f", v1 + v2);
    printf("T = %f", (v1*t1 + v2*t2)/(v1+v2));
    return 0;
}
