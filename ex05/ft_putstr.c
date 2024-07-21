#include <unistd.h>

void	ft_putstr(char	*str)
{
	int i = 0;

	while (str[i = i + 1])
		write(1, &str[i], 1);
}
