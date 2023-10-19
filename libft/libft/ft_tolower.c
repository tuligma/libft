/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:24:05 by npentini          #+#    #+#             */
/*   Updated: 2023/06/19 22:46:47 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_tolower
	*	Header:			libft.h
	*	Prototype:		int		ft_tolower(int c)
	*	Parameters:		c (int):	The character to be converted to lowercase.
	*	Description:	This function takes an integer 'c' representing an ASCII
	*					character code and return the corresponding lowercase
	*					character code if 'c' is an uppercase letter. If 'c' is 
	*					not an uppercase letter, it returns 'c' unchanged.
	*	Return:			The lowercase character code if 'c' is an uppercase
	*					letter, 'c' unchanged otherwise.
	*	Walkthrough:
	*					1.	The function takes an integer 'c' as input.
	*					2.	It checks if 'c' is within the range of uppercase
	*						letters (A-Z).
	*					3.	If 'c' is an uppercase letter, it adds 32 to 'c' to convert it
	*						to the correspondin lowercase character code.
	*					4.	It returns the modified 'c' or the original 'c' if 'c' is
	*						not an uppercase letter.
	*	Summary:
	*					The ft_tolower function converts an ASCII character code to its
	*					corresponding lowercase character code if the input character is an
	*					uppercase letter. If the input character is not an uppercase letter,
	*					it returns the input character unchanged.
	*	Usage:
	*					```c
	*					#include <stdio.h>
	*					#include "libft.h"		// Include the libft header
	*
	*					int	main(void)
	*					{
	*						char	uc = 'A'; // Use an array to store the string
	*						char	lc = ft_tolower(uc);
	*						printf("Original: %c\n", uc);
	*						printf("Lowercase: %c\n", lc);
	* 						return (0);
	*					}
	*
	*	Undefined Behavior:
	*						None. This function is well-defined for all integer inputs.
 */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && 'Z' >= c)
		c += 32;
	return (c);
}
