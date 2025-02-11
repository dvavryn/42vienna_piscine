/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:06:44 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/11 21:06:46 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* 
	Reproduce the behavipur of the function --strlcat()-- (man strlcat).

	man strlcat()

		strlcat(char *dest, const char *src, size_t size);

		The strlcat() function copy and concatenate strings respectively.
		It is designed to be a safer, more consistent, and more error prone
		replacement for strncat(3). Unlike this function, strkcat() takes
		the full size of the buffer (not just the length) and guarantee to
		NUL-terminate the result (as long as size is larger than 0 or as long
		as there is at least one byte free in dst). Note that a byte for the NUL
		should be included in size. Also note that strlcat() only operate on true
		"C" strings. This means both src and dst must be NUL-terminated.asm

		The strlcat() function appends the NUL-terminated string src to the end
		of dst. It will append at most size - 1 bytes, NUL-terminating the result.



		The strlcat() function returns the total length of the string it tried to
		create. That means the initial length of dst plus the length of src. While
		this may seem somewhat confusing, it was done to make truncation detection
		simple.

		Notre, however, that if strlcat() traverses size character without finding
		a NUL, the length of the string is considered to be size and the destination
		string will not be NUL terminated (since there was no space for the NUL).
		This keeps strlcat() from running off the end of a strin. In practice this
		should not happen (as it means that either size is incorrect or that dst is
		not a proper "C" string). The check exists to prevent potential security
		problems in incorrect code.

		
		 
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{

}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{

}




