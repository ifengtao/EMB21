/**
 * 求三个数的最大数
 *  a=10 b=20 c=30
 */
#include <stdio.h>

// 3个数排序（改变变量中存储的值）
int main03() {
    // 排序，同时求出最大值
    // 目的：a存放最大值，b存放第二大值，c存放最小值
    int a = 40;
    int b = 50;
    int c = 60;

    // a与b进行交换值
    if(a < b) {
        int temp = b;
        b = a;
        a = temp;
    }

    // a与c进行比较
    if(a < c) {
        int temp = c;
        c = a;
        a = temp;
    }

    // b与c进行比较
    if(b < c) {
        int temp = c;
        c = b;
        b = temp;
    }
    
    printf("a=%d > b=%d > c=%d\n", a, b, c);
    return 0;
}


int main02() {
    int a = 40;
    int b = 50;
    int c = 60;

    // 取a和b中大值，此时a的有可能丢失
    int d = a > b ? a : b;
    int e = d > c ? d : c; 
    printf("a、b、c中最大值为%d\n", e);
    return 0;
}

// 3个数排序（逻辑性更复杂，没有改变变量的值）
int main() {
    int a = 40;
    int b = 50;
    int c = 60;

    // 是正常的思维逻辑
    if(a > b) {
        if(a > c) {
            // printf("a=%d 是最大值\n", a);
            // 无法确定b与c之间关系
            if(b > c) {
                printf("a=%d > b=%d > c=%d\n", a,b,c);
            } else {
                printf("a=%d > c=%d > b=%d\n", a,c,b);
            }
        } else {
            // printf("c=%d 是最大值\n", c);
            printf("c=%d > a=%d > b=%d\n", c,a,b);
        }
    } else {
        if(b > c) {
            // printf("b=%d 是最大值\n", b);
            if(a > c) {
                printf("b=%d > a=%d > c=%d\n", b,a,c);
            } else {
                printf("b=%d > c=%d > a=%d\n", b,c,a);
            }
        } else {
            // printf("c=%d 是最大值\n", c);
            printf("c=%d > b=%d > a=%d\n", c,b,a);
        }
    }
    return 0;
}