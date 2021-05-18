/*
 * 从键盘获得字符串的演示
 * */
#include <stdio.h>
#include <string.h>
int main() {
    char buf[10] = {0};
    printf("请输入一个字符串:");
    fgets(buf, 10, stdin);  //从键盘得到字符串并记录到buf数组里
    if (strlen(buf) == 9/*数组被充满了*/ && buf[8] != '\n'/*数组里最后一个有效字符不是'\n'*/) {
        //输入缓冲区里包含多余数据,
        //应该删除它们
        scanf("%*[^\n]");
        scanf("%*c");
    }
    printf("%s\n", buf);
    printf("请输入一个字符串:");
    fgets(buf, 10, stdin);
    printf("%s\n", buf);
    return 0;
}




