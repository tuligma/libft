/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:38:20 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 11:38:24 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Function:		ft_isascii
 *	Header:			libft.h
 *	Prototype:		int	ft_isascii(int c)
 *	Description:	This function checks if the given character is an ASCII
 *					character, within the range of (0-127).
 * 	Return:			If the given character is an ASCII character 
 * 					it returns 1, otherwise 0.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
