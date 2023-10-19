/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:36:16 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 11:36:23 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	 *	Function:		ft_isdigit
 	*	Header:			libft.h
 	*	Prototype:		int	ft_isdigit(int c)
 	*	Description:	This function checks if the given character is a digit
	*					character. Within the range of (0-9).
 	* 	Return:			If the given character is a digit character it
	*					returns 1, otherwise 0.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
