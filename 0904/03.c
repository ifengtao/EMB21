/**
 *  流程结构：
 *      - 顺序结构
 *          - 容易被忽略
 *          - 从上至下（语句依次执行），从左到右（运算符的优先级和结合律）
 *      - 选择结构
 *          - 单路结构 if
 *          - 双路结构 if-else
 *          - 多路结构 if-elseif-else
 *          - switch
 *      - 循环结构
 *          - for()
 *          - while()
 *          - do-while()
 *          - goto
 * 
 * 
 *  if() {} 
 *      - 简写：if() 
 *      - 后面或下面的一条语句被视为if的语句
 */
#include <stdio.h>

int main() {
    // if(表达式)，表达式的布尔值，true执行if,false不执行if
    // 布尔值：true或false
    // C语言：1或0
    // 0是false
    // 非0是true
    // 在C语言中0的表示方式
    // 0 十进制，0b0 00 0x0
    // '\0' ascii中八进制的表示方式
    // '\x0' ascii中十六进制的表示方式
    // '0' 是字符，第48个字符
    if(0x0) 
        printf("if 条件为true，执行了\n");
        printf("if 条件为true，执行了\n");
        printf("if 条件为true，执行了\n");
    
    // if 的判断条件是a=0的赋值语句，直接考虑值（0）即可
    // int a;
    // if( a = 1 ) {
    //     printf("if 条件为true, 执行了\n");
    // } else {
    //     printf("if 条件为false, else执行了\n");
    // }

    // 考虑逻辑性，避免出现逻辑错误，下面的代码有逻辑错误
    // int score=100;
    // if(score>70) {
    //     printf("1");
    // } else if(score>80) {
    //     printf("2");
    // } else if(score>90) {
    //     printf("3");
    // } else {
    //     printf("4");
    // }
    return 0;
}