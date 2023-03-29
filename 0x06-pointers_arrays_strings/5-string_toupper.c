#include <stdio.h>
#include <ctype.h>

char *string_toupper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
    return str;
}

int main() {
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);
    string_toupper(str);
    printf("Modified string: %s\n", str);
    return 0;
}
