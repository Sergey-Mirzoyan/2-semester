# include "stdio.h"
# include "math.h"

int main()
{
    int a,b,c,d;
    float x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;
    x1 = (sqrt(d)-b)/2/a;
    x2 = (sqrt(d)-b)/2/a;
    printf("%f %f",x1,x2);
    return 0;
}
