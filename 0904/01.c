/**
 * 三目运算符（三元）
 *  - expression1?expression2:expression3
 *  - 根据表达式1是否成立，整体表达式返回expression2或expression3
 */
#include <stdio.h>

int main() {
    int a = 11;
    int x = 101;
    // 优先级高于赋值运算符
    // 三元运算符的嵌套
    // 执行流程：先判断a>10,根据结果是否成立执行x>100?200:300还是30
    // 成立了，x>100?200:300
    int b = a>10?x>100?200:300:30;
    printf("b=%d\n", b);
    return 0;
}