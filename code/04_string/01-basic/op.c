/*
 * 字符串函数演示
 * */
#include <stdio.h>
#include <string.h>
int main() {
    char str[10] = "abc";

    printf("字符个数是%d\n", strlen(str));
    printf("sizeof(str)是%d\n", sizeof(str));

    printf("%s\n", strcat(str, "def"));  //第一个参数必须是字符数组,因为它要用来存放合并后的结果.返回值就是第一个参数,可以用来代表合并后的字符串.
    printf("%s\n", str);

    printf("%s\n", strncat(str, "wakgjksdg", 3));   //3表示只有三个空位置,最多只能追加3个字符
    printf("%s\n", str);

    printf("比较结果是%d\n", strcmp("abc", "abd"));  //'d'比'c'的ASCII码大,所以后一个字符串大,返回值是-1
    printf("比较结果是%d\n", strncmp("abc", "abd", 2));  //2表示只比较前2个字符

    printf("%s\n", strcpy(str, "abc"));  //把第二个参数的内容拷贝到第一个参数里,所以第一个参数必须是字符数组.返回值就是第一个参数,可以用来表示拷贝后的字符串.
    printf("%s\n", str);

    printf("%s\n", strncpy(str, "defxyz", 2)); //2表示最多只能拷贝2个字符,不会拷贝'\0'字符 
    printf("%s\n", str);

    memset(str, 'h', 9);  //把数组里前9个字符类型存储区的内容设置成字符'h'
    printf("%s\n", str);
    printf("%s\n", strstr("abcdefghijklmn", "def"));  //把找到位置中第一个字符的地址作为返回值
    
    return 0;
}








