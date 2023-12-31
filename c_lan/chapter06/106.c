#include <stdio.h>
#include <string.h>

int main()
{
    char danci[20];
    printf("请输入一个单词：");
    scanf("%s", danci);

    for (int i = strlen(danci); i >= 0; i--)
    {
        printf("%c", danci[i]);
    }
}