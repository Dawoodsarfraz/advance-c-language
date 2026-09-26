#include <stdio.h>

char name[10];

int main(void){
    fgets(name, 10, stdin);
    printf("%s\n",name);
}

/*
How does fgets() work internally?

fgets() reads characters from a stream one at a time and stores them into a character array. It continues until it reads a newline character, reaches the maximum number of characters (size - 1), or encounters the end of the file (EOF). If a newline is read and there is space, it is stored in the array. Finally, fgets() always appends a null terminator ('\0') to create a valid C string. Because it knows the size of the destination buffer, it prevents buffer overflows, making it much safer than gets().
*/