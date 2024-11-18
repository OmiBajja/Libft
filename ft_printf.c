#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...)
{
	int i;
	int	value;

	i = 0;
	va_list lst;
	va_start(lst, *);
	while (i <= )
	{
		value = va_arg(lst, int);
		printf("%d: %d\n",i,value);
		i++;
	}
	va_end(lst);
}

int	main()
{
	ft_printf(2,4,6,8);
	return (0);
}