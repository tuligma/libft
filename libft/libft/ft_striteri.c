/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 04:07:34 by npentini          #+#    #+#             */
/*   Updated: 2023/07/18 02:47:53 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_striteri
	*	Header:			libft.h
	*	Prototype:		void	ft_striteri(char *s, void (*f)(unsigned int, char*))
	*	Parameters:		s (char *):		The null-terminated string to iterate over.
	*					f (void (*)(unsigned int, char *)):	A function that takes an
	*									unsigned integer and a character pointer as
	*									parameters. This function is applied to each
	*									character in the string.
	*	Description:	This function iterates over each character in the input null-
	*					terminated string 's' and applies the function 'f' to each
	*					character, passing the character's index and a pointer to
	*					character itself as arguments.
	*	Return:			None.
	*	Walkthrough:
	*					1.	The function takes the input string 's' and a function
	*						pointer 'f'.
	*					2.	It checks if either 's' or 'f' is a NULL pointer. If either
	*						is NULL, the function returns immediately.
	*					3.	An unsigned integer 'i' is initialized to 0 to represent
	*						the index of the current.
	*					4.	The function enters a loop that continues until it reaches
	*						the null terminator at the end of string.
	*					5.	Inside the loop, the function 'f' is applied to the current
	*						character and 'i'. This allow 'f' to perform some operation
	*						on the character and its index.
	*					6.	'i' and 's' are incremented to move to the next character in the
	*						string.
	*					7.	The loop continues, if applying 'f' to each character in 's'.
	*					
	*	Summary:
	*					The ft_striteri function iterates over each character in a null-
	*					terminated string 's', applying a specified function 'f' to each
	*					character and its index. This function is useful for performing
	*					opertions on each character in a string while keeping track of
	*					thier positions.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*
	*					void print(unsinged int i, char *s)
	*					{
	*						printf("Character at index %u: %c\n", i , s)	
	*					}
	*                
	*					int main(void)
	*					{
	*						char str[] = "Hello, World!";
	*						ft_striter(str, print);
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if 's' is 
	*							is uninitialized.
	*						2.	Buffer Overflow (heap or stack): Occurs if 'i'
	*							is uninitialized, potentially leading to
	*							unexpected result or memory corruption.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		++i;
		++s;
	}
}
