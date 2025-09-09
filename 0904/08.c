/**
 *  goto 跳转
 *      - 一般在程序中是不建议使用的
 *      - 因为会改变栈的执行流程
 * 
 *  需要定义标识位：标识符+冒号
 */
#include <stdio.h>

int main() {

loop1:
    printf("1st\n");
loop2:
    printf("2st\n");
loop3:
    printf("3st\n");
loop4:
    printf("4st\n");
loop5:
    printf("5st\n");

// 获取用户输入
int n=0;
scanf("%d", &n);
fflush(stdin); // 清空输入缓冲区
if(n==1) {
    goto loop1;
} else if(n==2) {
    goto loop2;
} else if(n==3) {
    goto loop3;
} else if(n==4) {
    goto loop4;
} else if(n==5) {
    goto loop5;
}

    return 0;
}