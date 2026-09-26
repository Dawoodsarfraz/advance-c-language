#include <stdio.h>

int main(){
    char file_name[] = "fprintf.txt";
    FILE *file = fopen(file_name, "w");

    if (file == NULL) {
        printf("File NOT Opened!!");
    }

    int age = 25;
    double height = 5.6;
    char name[] = "Carry";
    fprintf(file, "%d\n",age);
    fprintf(file, "%f\n", height);
    fprintf(file, "%s\n", name);
    fclose(file);
    return 1;
}
