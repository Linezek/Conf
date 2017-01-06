#include <stdlib.h>
#include <unistd.h>
void	ulstr(char *str)
{
  while (*str)
    {
      if (*str >= 'a' && *str <= 'z')
	*str = *str - 'a' + 'A';
      else if (*str >= 'A' && *str <= 'Z')
	*str = *str - 'A' + 'a';
      write(1, str++, 1);
    }
}

int	main(int ac, char **av)
{
  if (ac > 1)
    ulstr(av[1]);
  write(1, "\n", 1);
  return (0);
}
