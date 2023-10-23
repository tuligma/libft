/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:39:12 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 11:39:21 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Function:   	ft_isprint
 *	Header:     	libft.h
 *	Prototype:  	int	ft_isprint(int c)
 *	Description:	This function checks if the given character is an ASCII
 *	            	printable character. Within the range of  ASCII (32-126).
 * 	Return:     	If the given character is an ASCII printable character it
 * 	            	returns 1, otherwise 0.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
