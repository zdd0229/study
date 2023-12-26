#include <stdio.h>

/**
 * 
 * 输入ASCII码值，输出相应的字符
 * 
 * */
int main()
{
    while (1)
    {
        int ascii ;
        printf("请输入ASCII码值：");
        scanf("%d",&ascii);
        printf("ASCII码值%d对应的字符是：%c\n",ascii,ascii);
    }
    
}