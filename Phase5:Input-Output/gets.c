/*What is gets()?

gets() is a C library function that reads an entire line of input from the standard input (stdin) until the user 
presses Enter. It stores the characters into a character array and replaces the newline character with a null 
terminator ('\0'). However, it does not perform any bounds checking, making it vulnerable to buffer overflows. 
Due to this security risk, gets() was deprecated and removed from the C standard, and fgets() should be used instead.
*/

#include <stdio.h>

char name[5];
int main(void){
    fgets(name);
    printf("%s\n",name);
    return 0;
}

/*

It'll show error
dawoodsarfraz@chattha:~/Downloads/advance-c-language/Phase5:Input-Output$ gcc gets.c -o a.out 
gets.c: In function ‘main’:
gets.c:13:5: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
   13 |     gets(name);
      |     ^~~~
      |     fgets
/usr/bin/ld: /tmp/ccbl8q11.o: in function `main':
gets.c:(.text+0x18): warning: the `gets' function is dangerous and should not be used.
dawoodsarfraz@chattha:~/Downloads/advance-c-language/Phase5:Input-Output$ 
*/