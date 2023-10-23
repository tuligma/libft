/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:35:02 by npentini          #+#    #+#             */
/*   Updated: 2023/06/16 03:08:32 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Function:   	ft_isalpha
 *	Header:     	libft.h
 *	Prototype:  	int	ft_isalpha(int c)
 *	Description:	This function checks if the given character is an alphabetic
 *	            	character. Within the range of (a-z) or (A-Z).
 * 	Return:     	If the given character is an alphabetic character it
 * 	            	returns 1, otherwise 0.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
