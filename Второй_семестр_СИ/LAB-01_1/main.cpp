#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,u;
    scanf("%f %f %f",&a,&b,&u);
    float h=((b-a)/2)*tan(u);
    printf("Square= %f",h*(a+b)/2);
    return 0;
}
