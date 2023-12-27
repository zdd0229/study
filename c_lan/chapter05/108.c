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
    printf("华氏温度：%f℉，摄氏温度：%f℃，绝对温度：%fK\n",huashi_wendu,sheshi_wendu,juedui_wendu);
}

int main()
{
    double huashi_wendu;
    printf("请输入一个华氏温度(q:退出)：");

    while (scanf("%lf",&huashi_wendu)==1)
    {
        converte(huashi_wendu);
         printf("请输入一个华氏温度(q:退出)：");
    }
    
    
    return 0;
}