#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][10];
    for (int i=0; i<10; i++)
        gets(str[i]);
    puts(str);
    return 0;
}
