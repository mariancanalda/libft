#include <stdio.h>

char *ft_strrchr(const char *s, int c) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    while (i >= 0) {
        if (s[i] == (char)c) {
            return (char *)(s + i);
        }
        i--;
    }
    return NULL;
}

int main(void) {
    char str[] = "Hello World";
    char c = 'l';
    char *result = ft_strrchr(str, c);
    if (result == NULL) {
        printf("Character not found\n");
    } else {
        printf("Last occurrence of %c is at %ld\n", c, result - str);
    }
    return 0;
}
