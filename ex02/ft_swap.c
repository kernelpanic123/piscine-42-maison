#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int a = 5;
	int b = 10;
	printf("les valeurs de a et b sont : %d, %d\t",a , b);
	ft_swap(&a , &b);
	printf("les valeurs de a et b sont maintenant de : %d, %d",a , b);
	return 0;
}
