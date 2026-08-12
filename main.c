#include "libft.h"
#include <stdio.h>

char	to_upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(void)
{
	char	ad[] = "HaMzA";
	char	*sonuc;

	printf("öncesi = %s\n", ad);
	sonuc = ft_strmapi(ad, to_upper);
	printf("sonrası = %s\n", sonuc);
	free(sonuc);
	return (0);
}