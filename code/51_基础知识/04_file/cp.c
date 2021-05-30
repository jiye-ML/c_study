/*
 * cp命令练习
 * */
#include <stdio.h>
int main(int argc, char **argv) {  //通过参数得到两个文件的路径
    int size = 0;  //用来记录从原始文件里获得的字节个数
    char buf[100] = {0};   //用来记录从原始文件里获得的数字
    FILE *p_src = NULL, *p_dest = NULL;
    if (argc < 3) {
        //命令里不包含足够的路径
        printf("命令错误\n");
        return 0;
    }
    p_src = fopen(*(argv + 1)/*主函数第二个参数里下标为1的指针指向的字符串里就是原始文件的路径*/, "rb");  //以二进制方式操作文件可以保证正确处理所有文件
    if (!p_src) {
        //分支处理打开文件失败的情况
        printf("原始文件打开失败\n");
        return 0;
    }
    p_dest = fopen(*(argv + 2)/*主函数第二个参数里下标为2的指针指向的字符串里就是目标文件的路径*/, "wb");
    if (!p_dest) {
        //分支处理打开目标文件失败的
        //情况
        //关闭原始文件
        fclose(p_src);
        p_src = NULL;
        printf("目标文件打开失败\n");
        return 0;
    }
    while (1) {
        //每次从原始文件里向目标文件
        //转移一部分数据
        size = fread(buf, sizeof(char), 100, p_src);  //从原始文件里获得100个字节并记录到buf数组里,size变量记录实际从原始文件里获得的字节个数
        if (!size) {
            //没有从原始文件里获得任何
            //数字
            break;
        }
        fwrite(buf, sizeof(char), size, p_dest);   //把从原始文件里获得的数字都写到新文件里去
    }
    //关闭目标文件
    fclose(p_dest);
    p_dest = NULL;
    //关闭原始文件
    fclose(p_src);
    p_src = NULL;
    return 0;
}






