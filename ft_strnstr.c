#include <string.h>
#include <stdio.h>

const char *my_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len;
    needle_len = strlen(needle);
    while (len >= needle_len && strncmp(haystack, needle, needle_len) != 0) {
        --len;
        ++haystack;
    }
    return (len >= needle_len) ? haystack : NULL;
}

int main() {
    const char *haystack;
    haystack = "Hello, world!";
    const char *needle;
    needle = "world";
    size_t len;
    len = strlen(haystack);

    const char *result = my_strnstr(haystack, needle, len);
    if (result) {
        printf("Substring found at: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}

