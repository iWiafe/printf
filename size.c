#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

char* rot13(char* str) {
    char* output = str;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')) {
                output[i] = str[i] + 13;
            } else {
                output[i] = str[i] - 13;
            }
        }
    }
    return output;
}

void print_R(char* output, const char* arg) {
    char* encoded = rot13(arg);
    sprintf(output, "%s", encoded);
}
int main() {
    const char* message = "The flood of print has turned reading into a process of gulping rather than savoring";
    printf("Original message: %s\n", message);
    printf("Rot13 encoded message: %R\n", message);
    return 0;
}
