#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "src/libft.h"

typedef struct	s_flag
{
	int	f_minus;
	int	f_plus;
	int	f_zero;
	int	f_hash;
	int	f_space;
	int	width;
	int	dot;
	int	precision;
	int	type;
}	t_flag;

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_nbr_len(long nbr);
void	ft_putnbr(long n);
int		ft_xnbr_len(unsigned long long xnbr);
void	ft_putxnbr(t_flag *flag, unsigned long long xnbr);
int		ft_printf(const char *format, ...);
int		print_c(t_flag *flag, va_list ap);
int		print_s(t_flag *flag, va_list ap);
int		print_di(t_flag *flag, va_list ap);
int		print_u(t_flag *flag, va_list ap);
int		print_pxX(t_flag *flag, va_list ap);
int		print_percent(t_flag *flag);

#endif