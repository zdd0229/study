#include <stdio.h>

int main()
{
    while (1)
    {
        float height ;
        printf("请输入你的身高（cm）：");
        scanf("%f",&height);
        printf("你的身高是%.2f英寸\n",height/2.54);
    }
    
}