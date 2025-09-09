#include <stdio.h>

int main() {
    char c0=0;
    // 0b10101101
    unsigned char c1 = 0xAD;
    char c2 = 0xB8;
    // 16进制的数码：0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
   
    char c3 = 0xE4;


    printf("%p\n", &c1);
    printf("%p\n", &c2);
    printf("%p\n", &c3);
    printf("%s\n", &c3); // 显示“中”
    // 声明char类型的数组
    unsigned char arr[]="中"; // "中"是UTF-8编码格式的汉字，在内存中以0xE4、0xB8、0xAD存储
    printf("%s\n", arr);
    printf("0x%x\n", arr[0] & 0xff);
    printf("0x%x\n", arr[1]);
    printf("0x%x\n", arr[2]);

    printf("%d\n", c1);
    printf("%d\n", c2);


}