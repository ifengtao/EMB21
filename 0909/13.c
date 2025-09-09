/**
 * 无参函数
 */
#include <stdio.h>
// 函数原型
// 对函数定义有约束性
void fn(void);
int main() {
    fn();
    return 0;
}
 
void fn(void) {
    printf("fn 被调用了");
}