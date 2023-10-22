/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 01:03:40 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 01:13:20 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strmapi
	*	Header:			libft.h
	*	Prototype:		char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
	*	Parameters:		s (char *):		The input null-terminated string to process.
	*					f (void (*)(unsigned int, char)):	A function that takes an
	*					unsigned integer representing the character's index and a
	*					character. It should return a new character based on the
	*					provided character and index.
	*	Description:	This function applies a specified function 'f' to each character
	*					in the input null-terminated string 's' and creates a new string
	*					with the result of the function applied to each character. The
	*					newly created string is null-terminated.
	*	Return:			A pointer to a newly created null-terminated string containing
	*					the characters resulting from applying the function 'f' to the
	*					input string 's'. Returns NULL if memory allocation fails or
	*					if 's' or 'f' is a NULL pointer.
	*	Walkthrough:
	*					1.	The function takes the input string 's' and a function pointer
	*						'f'.
	*					2.	It checks if either 's' or 'f' is a NULL pointer. If either
	*						is NULL, the function returns NULL.
	*					3.	Memory is allocated for the new string using 'malloc' with a
	*						size of 'ft_strlen(s) + 1' to account for the null terminator.
	*						The result is assigned to variable 'result'.
	*					4.	If memory allocation fails (indicating by NULL return from
	*						'malloc'), the function returns NULL.
	*					5.	An unsigned integer 'i' is initialized to -1 to represent the
	*						index of the current character.
	*					6.	The function enters a loop that iterates from 0 to the length
	*						of the string.
	*					7.	Inside the loop, the function 'f'  is applied to current
	*						character and index 'i'. The result is stored in the 'result'
	*						string at the corresponding position.
	*					8.	The null terminator is added to the end of newly created
	*						string to make it a valid C string.
	*					9.	The pointer to the newly created string 'result' is returned.
	*					
	*	Summary:
	*					The ft_strmapi function applies a specified function 'f' to each
	*					character in a null-terminated string 's', creating a new string
	*					containing the result of these function applications. This allows
	*					for character-wise processing of strings and generating modified
	*					versions of the original string.
 	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*
	*					char mirror_char(unsinged int i, char c)
	*					{
	*						(void)i;
	*						if (c => 'a' || 'z' >= c)
	*							c =- 32;
	*						else if (c =>'A' || 'Z' >= C)
	*							c =+ 32;
	*						else
	*							return (c);	
	*					}
	*                
	*					int main(void)
	*					{
	*						char str[] = "Hello, World!";
	*						char *result;
	*
	*						result = ft_strmapi(str, miror_char);
	*						if (result)
	*							printf("Modified string: %s\n", result);
	*						else
	*							printf("String modification failed (NULL result).\n");
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if 's' is 
	*							is uninitialized.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s))
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}
