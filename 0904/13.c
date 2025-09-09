/**
 * 1. 打印1到100
 * 2. 打印1到100的和
 * 3. 求1-100之间所有数的和、平均值
 */
#include <stdio.h>

int main() {
    // 在循环外部声明变量
    int total = 0;
    for (int i = 1; i <= 100; i++)
    {
        // printf("i=%d\n", i);
        // 对i变量值的累加
        total+=i; 
    }

    // 在循环外部打印total变来给你的值
    printf("total=%d avg=%d\n", total, total/100);
    
    return 0;
}