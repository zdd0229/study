#include <stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    int max = INT_MAX;
    printf("整数上溢：%d\n", max + 1);
    float max_float = FLT_MAX;
    printf("浮点数上溢：%f\n", max_float * 20);
    float min_float = 3.6e-5;
    printf("浮点数下溢：%f\n", min_float / 10);
    return 0;
}