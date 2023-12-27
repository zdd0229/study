#include <stdio.h>

/**
 * 将华氏温度转化为摄氏温度和绝对温度
 * */
const float H_TO_S = 1.8; //...
const float H_TO_S_BASE = 32.0; //...
const float J_BASE = 273.16; //...

void converte(float huashi_wendu){
    double sheshi_wendu = H_TO_S * huashi_wendu + H_TO_S_BASE;
    double juedui_wendu = sheshi_wendu + J_BASE;
    printf
}

int main()
{
    double huashi_wendu;
    printf("请输入一个华氏温度：");
    scanf("%d",&huashi_wendu);
    converte(huashi_wendu);
    
    return 0;
}