/**
 *  while() 
 *      - 可以用来监听硬件的状态
 *      - 理解为条件，不间断的检测条件是否成立
 */
#include <stdio.h>

int main() {
    int i=0;
    while(i<5) {
        printf("while inter: i=%d\n", i);
        i++;
    }
    printf("while outer: i=%d\n", i);
    return 0;
}