/**
 *  常量：在程序执行过程中，其值不可以改变
 *      
 *  字面量：
 *      - #define
 *      - 在源文件中直接书写的值
 *  常量：
 *      - 使用const修饰的变量
 *      - 真的占用栈内存空间
 *      - 只是无法通过变量名改变值
 */
//宏，本质就是字面量
#define SIZE 100
#include <stdio.h>
int main() {
    printf("%d\n", SIZE);

    int a = 100;
    // 常量
    // const 修饰的是变量名，内存空间仍然可以修改
    // 只是不能通过变量名来修改其值
    const int b=200;//仅声明，但未赋值（脏值）
    int const c=300; //int与const先后顺序无没有影响
    // b=2000; // 报错，b是只读不可以改变

    // int *p=&b;
    // *p=2000; // 通过指针修改了b内存空间的值
    printf("a=%d\n", a); 
    printf("b=%d\n", b);
    return 0;
}