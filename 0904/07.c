/**
 *  do-while() 
 *      - 先执行依次，在判断是否成立
 *      - 可以用来监听硬件的状态
 *      - 理解为条件，不间断的检测条件是否成立
 */
#include <stdio.h>

int main() {
    
    // for(int i=0; i<5; i++) {
    //     printf("for inter: i=%d\n", i);
    //     i++;
    // }
    int i=0;

    // do-while 代码块中声明的变量不可以应用while判断条件中
    do { 
        printf("while inter: i=%d\n", i);
        i++;
    }while(i<5); 
    // printf("while outer: i=%d\n", i);
    return 0;
}