/*
 * 字符串函数
 * */
#include <stdio.h>
#include <stdlib.h>
int main() {
    double dval = 0.0;
    int val = atoi("24sdgdg");  //把字符串开头的24转换成整数类型并作为返回值
    printf("val是%d\n", val);
    dval = atof("34.65fdgd");   //把字符串开头的34.65转换成双精度浮点类型并作为返回值
    printf("dval是%lg\n", dval);
    return 0;
}






