#include <stdio.h>
/*#include "libft.h"*/

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    c += 32;
    return (c);
}

int main(void)
{
    char    input;
    int     output;
    
    input = 'A';
    output = ft_tolower(input);
    if (output == 'a')
    {
        printf("The function is correct for the character '%c'\n", input);
    }
    else
    {
        printf("The function is not correct for the character '%c'\n", input);
    }
    input = 'Z';
    output = ft_tolower(input);
    if (output == 'z') 
    {
        printf("The function is correct for the character '%c'\n", input);
    }
    else
    {
        printf("The function is not correct for the character '%c'\n", input);
    }
    input = 'a';
    output = ft_tolower(input);
    if (output == 'a')
    {
        printf("The function is correct for the character '%c'\n", input);
    }
    else
    {
        printf("The function is not correct for the character '%c'\n", input);
    }
    input = '1';
    output = ft_tolower(input);
    if (output == '1')
    {
        printf("The function is correct for the character '%c'\n", input);
    }
    else
    {
        printf("The function is not correct for the character '%c'\n", input);
    }
    return (0);
}
