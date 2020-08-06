#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10] = "abcd";
    char str2[10] = "abERkl";
    int r;

    r = strncmp(str1, str2, 4);
    printf("strcmp(str1, str2,4) = %d\n", r);

    return 0;
}