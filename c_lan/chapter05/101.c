#include <stdio.h>

const int M_PER_H = 60; //每小时60分钟

int main()
{
    int min = 1;
    printf("这是一个将分钟表示的时间转化为以小时和分钟表示的程序\n");
    while (min > 0)
    {
        printf("请输入分钟数：");
        scanf("%d",&min);
        printf("转换结果是：%d小时%d分钟\n",min/M_PER_H,min%M_PER_H);
    }
    
    printf("你输入了一个小于等于0的分钟数，程序退出");
    
    return 0;
}