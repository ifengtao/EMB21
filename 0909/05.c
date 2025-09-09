/**
 * 字符数组
 */
#include <stdio.h>

int main() {
    char a='x';
    // 对字符数组的理解：
    // 每个元素都存储字符
    char arr[]={'a', 'b', 'c', 'd', 'e'};
    // 数组长度
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("数组长度为%d\n", length);

    // 通过for循环遍历
    for(int i=0; i<length; i++) {
        printf("数组索引%d值为%c\n", i, arr[i]);
    }

    printf("&a=%p\n", &a);
    printf("&arr=%p\n", &arr);
    /**
     *  %s 预格式化字符串中的占位符
     *      - 以字符串的格式打印 
     *      - 要求传入的是地址，以地址为起始，向后访问字符直到遇见'\0'停止
     *      - 就是ascii的0
     */ 
    printf("以%%s打印字符数组:%s\n", arr);
    return 0;
}