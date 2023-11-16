#include "ft_printf.h"

void	tests(void)
{
	int long long_max = 2147483647;
	int long long_min = -2147483647;

	ft_printf("%p \n", -1);
	ft_printf("%p \n", 1);
	ft_printf("%p \n %p \n", long_min, long_max);
}

int	main(void)
{
	tests();
	return (0);
}
