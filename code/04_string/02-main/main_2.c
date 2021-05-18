/*
 * 主函数参数演示
 * */
#include <stdio.h>
int main(int argc/*表示第二个参数里的指针个数*/, char *argv[]/*包含多个字符指针,每个字符指针指向一个字符串*/) {
    int num = 0;
    for (num = 0;num  <= argc - 1;num++) {  //循环变量代表字符指针数组里每个指针的下标
        printf("%s\n", argv[num]);
    }
    return 0;
}







