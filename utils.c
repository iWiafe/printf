#include <stdio.h>
#include <stdarg.h>

void print_r(char* output, const char* arg) {
    char* reversed = reverse(arg);
    sprintf(output, "%s", reversed);
}

int main() {
    const char* message = "Print is the sharpest and the strongest weapon of our party";
    printf("Original message: %s\n", message);
    printf("Reversed message: %r\n", message);
    return 0;
}
