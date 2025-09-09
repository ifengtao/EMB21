/**
 *  数组所占内存空间大小与什么有关？
 *      - 与数据类型有关
 *      - 与数组中的元素个数有关系
 *      - 与数组的维度无关
 * 
 *  内存就是一个线性结构，以字节为单位
 */
#include <stdio.h>

int main() {
    // 数组占用内存的大小
    int arr1[10] = {0};
    int arr2[3][5] = {0};

    // 10x4
    printf("sizeof(arr1)=%d\n", sizeof(arr1));
    // 3x5x4
    printf("sizeof(arr2)=%d\n", sizeof(arr2));

    // 求一维数组中的元素个数
    // 总结：
    // sizeof()返回所占内存字节的大小
    // 数组所占内存的大小 / 数组元素(任一)所占内存的大小 = 元素数量
    printf("sizeof(arr2)/sizeof(arr2[0])=%d\n", sizeof(arr2)/sizeof(arr2[0]));
    printf("sizeof(arr2[0])/sizeof(arr2[0][0])=%d\n", sizeof(arr2[0])/sizeof(arr2[0][0]));

    return 0;
}