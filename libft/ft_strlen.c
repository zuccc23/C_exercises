#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	chaine[] = "";

	printf("%lu\n", ft_strlen(chaine));
    printf("%lu\n", strlen(chaine));
	return (0);
}*/
