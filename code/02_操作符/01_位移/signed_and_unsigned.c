/*
 * 操作符练习
 * */
#include <stdio.h>
int main() {
    int val = 0;
    unsigned char ch = 0x80;  //没有符号位,右移的时候左边空出来的数位里固定填充0
    printf("请输入一个数字:");
    scanf("%d", &val);
    printf("转换结果是");
    printf("%d", (val & ch) != 0/*得到一个数位的内容*/);

    printf("**8", (va))

    ch >>= 1;  //ch内容从0x80变成0x40
    printf("%d", (val & ch) != 0/*得到一个数位的内容*/);
    ch >>= 1;  //ch内容从0x40变成0x20
    printf("%d", (val & ch) != 0/*得到一个数位的内容*/);
    ch >>= 1;  //ch内容从0x20变成0x10
    printf("%d ", (val & ch) != 0/*得到一个数位的内容*/);
    ch >>= 1;  //ch内容从0x10变成0x08
    printf("%d", (val & ch) != 0/*得到一个数位的内容*/);
    ch >>= 1;  //ch内容从0x08变成0x04
    printf("%d", (val & ch) != 0/*得到一个数位的内容*/);
    ch >>= 1;  //ch内容从0x04变成0x02
    printf("%d", (val & ch) != 0/*得到一个数位的内容*/);
    ch >>= 1;  //ch内容从0x02变成0x01

    printf("%d\n", (val & ch) != 0/*得到一个数位的内容*/);

    return 0;
}




