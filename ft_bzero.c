/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:17:54 by macanald          #+#    #+#             */
/*   Updated: 2023/01/19 13:37:01 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**
 * Ft_bzero() takes a pointer to a memory area and a size_t as arguments, and sets the first n bytes of
 * the memory area to zero
 * 
 * @param s This is the pointer to the memory area to be filled.
 * @param n the number of bytes to be zeroed
 */

void    ft_bzero(void*s, size_t n)
{
    /* Declaring a variable of type size_t. */
    size_t i; 

    /* Initializing the variable i to 0. */
    i = 0;

    /* Checking if the value of i is less than the value of n. */
    while (i < n)
    /* This is a pointer to the memory area to be filled. */
    ((unsigned char*)s) [i++] = '\0';

}

int main (void)
{
/* Declaring a pointer to a character. */
char *p;
/* Declaring a variable of type size_t and initializing it to 3. */
size_t x =3;
/* Declaring a character array and initializing it to "ymodaba". */
char a[] = "ymodaba";
/* Assigning the address of the first element of the array a to the pointer p. */
p = &a;

/* Setting the first 3 bytes of the memory area to zero. */
ft_bzero(p,x);
/* Printing the string starting from the 4th element of the array. */
printf("%s", (unsigned char*)&p[3]);
/* Returning the value 0 to the calling function. */
return(0);

}
