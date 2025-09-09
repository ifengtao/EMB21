/**
 *  函数
 *      - 函数是一段可重复的代码块
 * 
 *  函数声明：告诉调用者当前函数已经声明了
 *      - 为什么需要声明？
 *          - main函数作为程序的入口，其他函数是独立功能。由main函数将其他函数组织起来
 *          - 由main函数调用其他函数
 *          - 所以其他函数必须对main是可见的
 *  函数定义：
 *      - 格式
 *          函数类型 函数名(形参列表) {
 *              语句;
 *              return 值; 
 *          }
 *  函数的形参：形参
 *  函数返回值： return 后面的值
 *  函数类型：就函数返回值的类型
 */
#include <stdio.h>
// 求2个数的和
// 函数声明
// int add();
int add(int a, int b);
int main() {
    int c = add(1,2);
    printf("c=%d\n", c);
    return 0;
}
// 函数定义
int add(int a, int b) {
    return a + b;
}