#include <stdio.h>

int main()
{
    while (1)
    {
        float temp ;
        printf("请输入一个浮点数：");
        scanf("%f",&temp);
        printf("输入是%f或者%e\n",temp,temp);
    }
    
}