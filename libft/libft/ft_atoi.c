/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 00:51:30 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 01:01:13 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_atoi
	*	Header:			libft.h
	*	Prototype:		int	ft_atoi(const char *nptr)
	*	Parameters:		nptr (const char *nptr):	The null-terminated string  to
	*												convert to an integer.
	*	Description:	This function converts a null-terminated string 'nptr' to an
	*					integer. It skips leading whitespace characters, handles signs
	*					('+' and '-'), and parses the integer part. The result is
	*					returned as integer.
	*	Return:			The integer value parsed from the input string 'nptr'.
	*	External Functions:
	*	            	None.
	*	Walkthrough:
	*					1.	The function takes a null-terminated string 'nptr' as input.
	*					2.	It initializes the 'sign' variable to 1 and result to 0.
	*					3.	The function then skips any leading whitespace characters
	*						in 'nptr'.
	*					4.	If a '-' or '+' sign is encountered, it updates the 'sign'
	*						variable accordingly and moves to the next character.
	*					5.	The function then proceeds to extract and convert the
	*						numeric characters in the string to an integer value.
	*						It starts at the current position in 'nptr' and it
	*						iterates through the string one character at a time. For
	*						each character that is a numeric digit (0-9), the function
	*						performs the following operations:
	*						-	Multiplies the current value of 'result' by 10,
	*							effectively shifting its existing value one decimal
	*							place to the left. This steps preserves the numeric
	*							value accumulated so far.
	*						-	Adds the numeric value of the current character by
	*							subtracting the character '0' (since ASCII values of
	*							numeric digits are sequential) to 'result'. This
	*							addition process is crucial for converting character
	*							representations of digits into their corresponding
	*							integer values.
	*						-	Advances the position in 'nptr' to the next character
	*							and continues the process until a non-numeric character
	*							is encountered or the end of string is reached.
	*					6.	The result is adjusted by multiplying it with the 'sign'
	*						to account for the sign of the integer.
	*					7.	Finally, the function returns the parsed integer value.
	*					
	*	Summary:
	*					The ft_atoi function parses a null-terminated string and converts
	*					it to an integer. It accounts for leading whitespace characters
	*					and optional sign characters ('+' and '-'). If the string does
	*					not represent a valid integer, it returns 0. The function handles
	*					the conversion process and returns the resulting integer value.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char const *nptr = " 	-12345";
	*						int  result;
	*
	*						result = ft_atoi(nptr)
	*						printf("Concatenated string: %s\n", result);
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if 'nptr is 
	*							is a NULL pointer.
	*						2.	Heap-Use-After-Free: Occurs if 'nptr' is uninitialized
	*							or no longer valid.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
