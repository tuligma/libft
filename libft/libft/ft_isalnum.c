/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:37:13 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 11:37:17 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Function:   	ft_isalnum
 *	Header:     	libft.h
 *	Prototype:  	int	ft_isalnum(int c)
 *	Description:	This function checks if the given character is an alphanumeric
 *	            	character. Within the range of (a-z),(A-Z) or (0-9).
 * 	Return:     	If the given character is an alphanumeric character it 
 * 	            	returns 1, otherwise 0.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}
