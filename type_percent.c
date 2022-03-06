/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:12:42 by changhle          #+#    #+#             */
/*   Updated: 2022/03/05 23:45:21 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_percent_space(t_flag *flag)
{
	int	ret;

	ret = 1;
	if (!(flag->f_minus > -1) && flag->f_zero > -1)
	{
		while (flag->width > ret)
		{
			write(1, "0", 1);
			ret++;
		}
	}
	else
	{
		while (flag->width > ret)
		{
			write(1, " ", 1);
			ret++;
		}
	}
	return (ret);
}

int	type_percent(t_flag *flag)
{
	int	ret;

	ret = 0;
	if (flag->f_minus > -1)
	{
		write(1, "%", 1);
		ret = print_percent_space(flag);
	}
	else
	{
		ret = print_percent_space(flag);
		write (1, "%", 1);
	}
	return (ret);
}