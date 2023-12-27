#include <stdio.h>

int main()
{

    char zimu;
    printf("请输入一个大写字母：");
    scanf("%c", &zimu);

    for (int i = 0; i < 5; i++)
    {
        // 打印左侧空格
        for (int k = 0; k < 4 - i; k++)
        {
            printf(" ");
        }

        // 打印递增字母
        for (int m = 0; m < i+1 ; m++)
        {
            printf("%c", (int)zimu + m);
        }

        // 打印递减字母
        for (int j = 0; j < i; j++)
        {
            printf("%c", (int)zimu + i - j -1);
        }
        printf("\n");
    }
    return 0;
}