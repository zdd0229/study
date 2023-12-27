#include <stdio.h>

int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d",&num);

    int point = num;

    printf("%d ",point);
    while (point++ < num + 10)
    {
        printf("%d ",point);
    }
    
    return 0;
}