/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:21:21 by npentini          #+#    #+#             */
/*   Updated: 2023/06/19 22:54:57 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_toupper
	*	Header:     	libft.h
	*	Prototype:  	int		ft_toupper(int c)
	*	Parameters: 	c (int):	The character to be converted to uppercase.
	*	Description:	This function takes an integer 'c' representing an ASCII
	*	            	character code and return the corresponding uppercase
	*	            	character code if 'c' is a lowercase letter. If 'c' is not
	*	            	a lowercase letter, it returns 'c' unchanged.
	*	Return:     	The uppercase character code if 'c' is a lowercase letter, 'c'
	*	            	unchanged otherwise.
	*	External Functions:
	*	            	None.
	*	Walkthrough:
	*	            	1.	The function takes an integer 'c' as input.
	*	            	2.	It checks if 'c' is within the range of lowercase letters (a-z).
	*	            	3.	If 'c' is an lowercase letter, it subtracts 32 to 'c' to convert it
	*	            		to the corresponding uppercase character code.
	*	            	4.	It returns the modified 'c' or the original 'c' if 'c' is not an
	*						uppercase letter.
	*	Summary:
	*	            	The ft_toupper function converts an ASCII character code to its
	*	            	corresponding uppercase character code if the input character is an
	*	            	lowercase letter. If the input character is not a lowercase letter,
	*	            	it returns the input character unchanged.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>
	*	            	#include "libft.h"		// Include the libft header
	*
	*	            	int	main(void)
	*	            	{
	*	            		char	lc = 'a'; // Use an array to store the string
	*	            		char	uc = ft_toupper(uc);
	*	            		printf("Original: %c\n", lc);
	*	            		printf("Uppercase: %c\n", uc);
	* 	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	None.
 */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && 'z' >= c)
		c -= 32;
	return (c);
}
