/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 00:31:39 by npentini          #+#    #+#             */
/*   Updated: 2023/10/06 07:58:29 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_itoa
	*	Header:			libft.h
	*	Prototype:		char	*ft_itoa(int n);
	*	Parameters:		n (int):	The integer	to convert to a string representation.
	*	Description:	This function converts an integer 'n' into a string represention
	*					Memory is allocated for the resulting string, which must be freed
	*					by the caller when no longer needed. Negative numbers are handled
	*					properly. If 'n' is outside the representable range of regular
	*					'int', it will be trimmed accordingly.
	*	Return:			A pointer to a newly allocated string representing the integer
	*					'n'. Returns NULL if memory allocationg fails.
	*	External Functions:
	*					1.	malloc
	*					2.	ft_strlcpy
	*	Walkthrough:
	*					1.	The function takes an integer 'n' as input.
	*					2.	It calculates the length of the string representation required
	*						for 'n' using 'ft_numlen'.
	*					3.	For 'n == -2147483648', a special case is handled with memory
	*						allocation and initialized to variable 'str' and copy the value
	*						from 'n' to 'str' using 'ft_strlcpy', the 'str' is returned.
	*						incase memory allocation fails it returns NULL.
	*					4.	For other values, memory is allocated based on the calculated
	*						length.
	*					5.	The conversion function populates the allocated memory with
	*						the string representation.
	*					6.	The pointer to the resulting string is returned.
	*
	*					'ft_numlen' Function:
	*
	*					Calculates the length of the string required to represent 'n' and
	*					returns the count of the digits.
	*
	*					Steps in 'ft_numlen':
	*					1.	Initialized variable 'len' to 0.
	*					2.	If 'n' is '0', return 1 (minimum length for zero).
	*					3.	If 'n' is negative, increment 'len' and make 'n' positive by
	*						multiplying 'n' to -1.
	*					4.	While 'n' is greater than 0, divide 'n' by 10 and increment 'len'
	*						for each digit.
	*					5.	Return 'len' as the count of digits.
	* 
	*					'conversion' Function:
	*
	*					Converts the integer 'n' into a string representation and stores it in
	*					allocated memory.
	*
	*					Steps in 'conversion':
	*					1.	Set	the character at the 'len' position to '\0' (string termination).
	*					2.	If 'n' is 0, set the first character to 0 and return the string.
	*					3.	if 'n' is negative, set the first character to '-' and make 'n'
	*						positive by multiplying 'n' by -1.
	*					4.	While 'n' is greater than 0, we extract the last digit of 'n' by
	*						taking the remainder when 'n' is divided by 10. This remainder
	*						represents the last digit of the original number. We then add '0'
	*						to convert this digit to its corresponding ASCII character
	*						representation and store it in the character array at position
	*						'len - 1'.
	*					5.	Divide 'n' by 10 to remove the last digit, and we decrement 'len' 
	*						by 1 to move to the next position (inward) in character array. 
	*						This process repeats until 'n' becomes 0, which means all the
	*						digits of the number have been converted to characters and stored
	*						in the string.
	*					6.	Return the string representing 'n'.
	*					
	*	Summary:
	*					The ft_itoa function converts an integer 'n' into a string
	*					representation and returns a pointer to the resulting string.
	*					It handles negative numbers, memory allocation.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						int	n = 42;
	*						char *result;
	*
	*						result = ft_itoa(n)
	*						if (result)
	*						{
	*							printf("Integer as string: %s\n", result);
	*							free(result);
	*						}
	*						else
	*							printf("String conversion failed (NULL result).\n");
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Conditional Jump : Occurs if 'n' is uninitialized 
	*							this can lead to unexpected result and memory
	*							issues.
*/

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*conversion(int n, int len, char *str)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	str = malloc(sizeof(char) * (ft_numlen(n) + 1));
	if (!str)
		return (NULL);
	return (conversion(n, ft_numlen(n), str));
}
