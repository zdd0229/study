#include <stdio.h>
#include <string.h>
#include <float.h>
#define PI 3.14159

int main()
{
    const float RATE = 1.0/3.0;
    // char xin[10];
    // char ming[10];
    // printf("请输入你的姓：\n");
    // scanf("%s",&xin);
    // printf("请输入你的名：\n");
    // scanf("%s",&ming);
    // printf("你的姓名是：\"%s,%s\"\n",xin,ming);
    // printf("你的姓是：\"%20s\"\n",xin);
    // printf("你的姓是：\"%s   \"\n",xin);

    // float f ;
    // printf("请输入一个浮点数：\n");
    // scanf("%f",&f);
    // printf("输入的值是%f或者%e",f,f);

    // char xin[10];
    // char ming[10];
    // printf("请输入你的姓：\n");
    // scanf("%s",xin);
    // printf("请输入你的名：\n");
    // scanf("%s",ming);

    // int xin_len = strlen(xin);
    // int ming_len = strlen(ming);
    // printf("你的姓名是：\"%s,%s\"\n",xin,ming);
    // printf("你的姓是：\"%20s\"\n",xin);
    // printf("你的姓是：\"%s   \"\n",xin);

    // printf("%s,%s\n",xin,ming);
    // printf("%-*d %-*d",xin_len,xin_len,ming_len,ming_len);

    printf("%4.12f,%4.16f\n",RATE,RATE);

    printf("%4.12f,%4.16f\n",FLT_DIG,DBL_DIG);

    return 0;
}