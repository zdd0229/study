#include <stdio.h>

/**
 * 输入一个区间显示各个数，该数的平方，该数的立方
 */
int main()
{
    int start, end;
    printf("请输入一个整数区间（x,y）:");
    scanf("%d,%d", &start, &end);
    printf("整数\t整数的平方\t\t整数的立方\n");
    for (start; start <= end; start++)
    {
        printf("%d\t%d\t\t%d\n",start,start*start,start*start*start);
    }

    return 0;
}