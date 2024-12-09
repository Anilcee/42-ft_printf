/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancengiz <ancengiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:16:52 by ancengiz          #+#    #+#             */
/*   Updated: 2024/12/09 20:16:53 by ancengiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *c)
{
	int	count;
	int	i;

	if (!c)
		return (ft_print_str("(null)"));
	i = 0;
	count = 0;
	while (c[i])
	{
		count += ft_print_char(c[i]);
		i++;
	}
	return (count);
}
