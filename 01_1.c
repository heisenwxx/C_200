// 将十进制转化为二进制
#include <stdio.h>
#include <tchar.h>
int main()
{
    /* code */
    int m, n, i, j;

    int a[16] = {0};
    printf("请输入十进制数（0-32767）：\n");
    scanf("%d", &n);
    for (m = 0; m < 15; m++)
    {
        /* code */
        i = n % 2;
        j = n / 2;
        n=j;
        a[m] = i;
    }

    for (m = 15; m >= 0; m--)
    {
        /* code */
        printf("%d", a[m]);
        if (m % 4 == 0)
        {
            /* code */
            printf(" ");
        }
    }

    return 0;
}
