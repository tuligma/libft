/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 00:07:40 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 09:54:14 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_calloc
	*	Header:     	libft.h
	*	Prototype:  	void *ft_calloc(size_t nmemb, size_t size)
	*	Parameters:  	nmemb (size_t):	the number of elements to allocate.
	*	            	size (size_t): 	the size, in bytes, of each elements.
	*	Description:	This function allocates memory for an array of 'nmemb'
	*	            	elements, each of 'size' bytes, and initializes all
	*	            	bytes to zero.
	*	Return:     	Returns a pointer to the allocated memory if successful,
	*	            	or NULL on failure.
	*	External Functions:
	*	            	1.	malloc
	*	            	2.	ft_bzero
	*	Walkthrough:
	*	            	1.	Declare a pointer to void, 'ptr', to store the
	*	            		allocated memory. A void pointer (void *) is used here
	*	            		to allow  for generic memory allocations. It does not 
	*	            		have a specific data type associated with it, so it can
	*	            		be used for any type of data.
	*	            	2.	Declare a size_t variable 'total_size' and initialize
	*	            		it with the product of 'nmemb' and 'size'. This
	*	            		calculates the totalmemory required for the allocation.
	*	            	3.	Check for potential overflow or invalid values of 'size'
	*	            		and total_size to prevent undefined behavior. If any
	*	            		issues are detected, return NULL to indicate failure.
	*	            	4.	Allocate 'total_size' bytes of memory using the 'malloc'
	*	            		function and assign the allocated memory to the
	*	            		'ptr' pointer.
	*	            	5.	Check if memory allocation is successful. If 'malloc,
	*	            	returns NULL. return NULL to indicate the allocation failure.
	*	            	6. 	Use 'ft_bzero' function to initialize the allocated
	*	            		memory to zero.
	*	            	7.	Return the pointer 'ptr' to the allocated memory,
	*	            		which has been initialized to all zeros.
	*	Summary:
	*	            	The ft_calloc function allocates memory for an array of
	*	            	'nmemb' elements, each of 'size' bytes, and initializes
	*	            	the memory to zero. It returns a pointer to the allocated
	*	            	memory or NULL if allocation fails.					
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h> // Include the necessary header for printf
	*	            	#include "libft.h" // Include the libft header
	*
	*	            	int	main(void)
	*	            	{
	*	            		int *array;
	*	            		size_t	nmemb = 5;
	*	            		size_t	size = sizeof(int);
	*	            		size_t	i;
	*
	* 	            		array = ft_calloc(nmemb, size);
	*	            		if (array)
	* 	            		{
	*	            			i = -1;
	*	            			while (++i < nmemb)
	*	            			printf("array: %p -> %i\n", (void *)&array[i], array[i])
	*	            		}
	*	            		else
	*	            			printf("\nMemory Allocation failed!!!\n")
	* 	            		return (0);
	*	            		}
	*
	*	Undefined Behavior:
	*	            	1.	Buffer-Overflow (stack or heap): Occurs when 'nmemb'
	*	            		and 'size' result in a total memory size that exceeds an
	*	            		arbitrary maximum value.
	*	            	2.	Allocation Failure: Occurs when the 'malloc' function
	*	            		returns NULL, indicating memory allocation failure.
 */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if ((size != 0 && total_size / size != nmemb)
		|| total_size > 140572132054972)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
