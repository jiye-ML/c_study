/*
 * fscanf函数演示
 * */
#include <stdio.h>
int main() {
    int num = 0, val = 0;
    FILE *p_file = fopen("abc.txt", "r");
    if (p_file) {
        for (num = 0;num <= 4;num++) {
            fscanf(p_file, "%d", &val);  //从文本文件里获得一个整数并记录到val变量里
            printf("%d ", val);
        }
        printf("\n");
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}







