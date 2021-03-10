# include "stdio.h"
# include "math.h"

int main()
{
    int a,b,c,d;
    double x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d >= 0)
    {
        x1 = (sqrt(d)-b)/2/a;
        x2 = (sqrt(d)-b)/2/a;
        printf("%df %df",x1,x2);
    }
    else
    {
        printf("No kornei in deystv. chislah");
    }
    return 0;
}
