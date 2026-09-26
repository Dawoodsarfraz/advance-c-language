/*
What is printf() and why is it used?

printf() is a standard C library function declared in <stdio.h> that prints formatted output to the standard output 
stream (stdout). It uses a format string with specifiers such as %d, %f, and %s to convert different data types into 
human-readable text before sending them to the terminal or another output device. It is widely used to display program 
results, interact with users, log information, and debug applications. Internally, printf() parses the format string, 
retrieves each argument, converts it to its textual representation, and writes the resulting characters to the output 
stream.
*/
#include <stdio.h>

char name[] = "John Doe";
int age = 30;
double height = 5.9;

int main() {
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    return 0;
}