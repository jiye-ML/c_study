/*
 * 主函数参数演示
 * */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{  
    //主函数提供的参数类似于游戏里开始时的装备
    int heads = 0/*记录头的数量*/, legs = 0/*记录腿的数量*/;
    int num = 0;
    if (argc < 3) {
        printf("命令错误\n");
        return 0;
    }
    heads = atoi(argv[1]);   //argv[1]的字符串里记录了头的数量,把它记录在heads变量里
    legs = atoi(argv[2]);    //argv[2]的字符串里记录了腿的数量,把它记录在legs变量里
    for (num = 0;num <= heads;num++) {
        if (4 * num + 2 * (heads - num) == legs) {
            printf("兔子有%d只,鸡有%d只\n", num, heads - num);
            return 0;
        }
    }
    printf("没有找到答案\n");
    return 0;
}




