#include <stdio.h>
/**
 * 计算无线序列的值
 */
int main()
{
    int cishu;
    printf("请输入执行次数：");
    while (scanf("%d", &cishu) != -1)
    {
        double sum1 = 0.0, sum2 = 0.0;
        int suffix = -1;

        for (int i = 0; i < cishu; i++)
        {
            suffix = suffix * -1;
            sum1 += 1.0 / (i + 1);
            sum2 += suffix * 1.0 / (i + 1);
        }

        printf("sum1:%f,sum2:%f\n", sum1, sum2);
        printf("请输入执行次数：");
    }
}