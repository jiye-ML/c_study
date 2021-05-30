/*
 * 文本文件演示
 * */
#include <stdio.h>
#include <string.h>
int main() {
    int arr[] = {45, 837, 2, 71, 1853};
    int num = 0;
    char buf[10] = {0};
    //FILE *p_file = fopen("abc.txt", "wb");
    FILE *p_file = fopen("abc.txt", "w");  //以文本方式操作文件时的打开语句
    if (p_file) {
        for (num = 0;num <= 4;num++) {
            /*sprintf(buf, "%d ", arr[num]);
            fwrite(buf, sizeof(char), strlen(buf), p_file);*/
            fprintf(p_file, "%d ", arr[num]);
        }
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}







