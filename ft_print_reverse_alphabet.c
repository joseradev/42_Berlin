#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rev_alpha;

	rev_alpha = 'z';
	while (rev_alpha >= 'a')
	{
		ft_putchar(rev_alpha);
		rev_alpha--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
}
*/
