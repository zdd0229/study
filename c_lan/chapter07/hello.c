#include <stdio.h>
#define space ' '
#define huanhang '\n'

int main()
{
    printf("请输入一串字符（#时停止读入）：");
    int space_num = 0;
    int huanhang_num = 0;
    int other_num = 0;

    char ch;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case space:
            space_num++;
            break;
        case huanhang:
            huanhang_num++;
            break;
        default:
            other_num++;
            break;
        }
    }
    printf("统计结果：空格数目（%d），换行数目（%d），其他字符数目（%d）", space_num, huanhang_num, other_num);

    return 0;
}