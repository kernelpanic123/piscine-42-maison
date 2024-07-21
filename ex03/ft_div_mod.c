#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

/*int	main(void)
{
	int aa = 10;
	int bb = 5;
	int divbis;
	int modbis;

	ft_div_mod(aa, bb, &divbis, &modbis);
	printf("%d,%d",divbis, modbis);
}*/
