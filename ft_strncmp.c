#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    for (i = 0; s1[i] && s2[i] && s1[i] == s2[i] && i < n; i++);
    return (s1[i] - s2[i]);
}

int main()
{
    const char s1[6] = "Hello";
    const char s2[6] = "Hello";
    size_t n = 5;
    int result;

    result = ft_strncmp(s1, s2, n);
    printf("ft_strncmp = %d\n", result);
    return 0;
}
