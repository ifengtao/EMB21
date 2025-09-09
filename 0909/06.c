/**
 *  数组名
 *      - 数组名是只读的
 *      - 返回的是地址 00000000005ffec4
 */
#include <stdio.h>

int main() {
    int array[]={1,2,3};
    // array 就是数组名
    // array=20; // 报错，array是数组名，所以是只读变量不可以改
    // 地址值相同，数组与数组第一个元素的地址重合，但是语义不同
    printf("%p\n", array); // 数组中第一个元素的地址：00000000005ffec4
    printf("%p\n", &array); // 数组的地址：00000000005ffec4
    printf("%p\n", &array[0]); // 数组中第一个元素的地址：00000000005ffec4
    return 0;
}