/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:01:18 by bfernan2          #+#    #+#             */
/*   Updated: 2025/08/08 16:45:41 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	arg_conversion(va_list args, const char conversion)
{
	if (conversion == 'c')
	
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;
	
	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
		{
			len += arg_conversion(args, format);
			i++;
		}
		else
			write(1, &format[i], 1);
		i++;
	}
}
