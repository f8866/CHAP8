/*echo.c-重量输入*/
#include <stdio.h>
int main(void)
{
    char ch ;
    while ((ch = getchar())!='#')
    {
        putchar(ch);
    }
    return 0 ;
}