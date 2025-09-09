#include <stdio.h>


int main() {
    char n1 = -5; // 10000101 -> 11111010 -> 11111011
    printf("%d\n", n1 & 0xff);
    // 16进制显示
    printf("0x%x\n", n1 & 0xff); // 0xfb = 0b1111 1011
    // printf("%u\n", (1<<32)-1);

    char n2=127; // 01111111 = 0x7f
    printf("0x%x\n", n2 & 0xff); // 0x7f

    char n3=-127; // 10000001 = 0x81
    printf("0x%x\n", n3 & 0xff); // 0x81 

    char n4=-128; 
    printf("0x%x\n", n4); // 0xfffff80
    printf("0x%x\n", n4 & 0xff); // 0x80

}