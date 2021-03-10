#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int IP[4];
    int a;
    int b;
    FILE *f;

    f = fopen("f.txt","r");
    if (! f != NULL)
    {
        while (! feof(f))
        {
            fscanf(f, "%d.%d.%d.%d\%d \n", &IP[0], &IP[1], &IP[2], &IP[3], &b);
            for (int i = 0; i < 4; i++)
            {
               a = 0;
               for (int j = 7; j > 0; j--)
               {
                   if (b > 0)
                   {
                       a += pow(2,j);
                       b--;
                   }
               }
                IP[i] &= a;
            }
            for (int i = 0; i < 4; i++)
            {
                if (i != 3) printf("%d",IP[i]);
                else printf("%d.", IP[i]);
            }
        }
    }
    else printf("The file is empty!");

    return 0;
}
