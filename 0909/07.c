/**
 *  字符串
 *      - 是字符的集合
 *      - 
 */
#include <stdio.h>

int main() {
   char str[]="abc"; // {'a', 'b', 'c', '\0'}
   char a = 'X';
   char arr[]={'a', 'b', 'c'};

   int str_len = sizeof(str);
   int arr_len = sizeof(arr);
   printf("str_len=%d\n", str_len);
   printf("arr_len=%d\n", arr_len);

   printf("%p\n", &str);
   printf("%p\n", &a);
   printf("%p\n", &arr);

   printf("%s\n", str);
   printf("%s\n", arr);
    return 0;
}