#include <stdio.h>

/**
 *  sizeof 是运算符
 *      -支持sizeof()写法
 *      - 返回占内存字节大小
 * 
 * 
*/

int main() {
    100; // 整型字面量默认int类型
    100LL; // 通过L后缀设置字面量类型，L表示long,LL表示long long,不区分大小写
    100.1; // 浮点字面连默认double类型
    100.1F; // 通过F后缀设置浮点字面量类型
    'a';
    printf("基本类型占内存空间大小：\n");
    printf("sizeof(char)=%d\n", sizeof(char));
    printf("sizeof(short)=%d\n", sizeof(short));
    printf("sizeof(int)=%d\n", sizeof(int));
    printf("sizeof(long)=%d\n", sizeof(long));
    printf("sizeof(long long)=%d\n", sizeof(long long));
    printf("sizeof(float)=%d\n", sizeof(float));
    printf("sizeof(double)=%d\n", sizeof(double));
}