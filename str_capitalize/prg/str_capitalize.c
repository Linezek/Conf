void	str_capitalize(char *str)
{
  while (*str)
    {
      while (*str == ' ' || *str == '\t')
	write(1, str++, 1);
      if (*str && *str >= 'a' && *str <= 'z')
	*str = *str - 'a' + 'A';
      while (*str && *str != ' ' && *str != '\t')
	write(1, str++, 1);
    }
}

int	main(int ac, char **av)
{
  if (ac >= 2)
    str_capitalize(av[1]);
  write(1, "\n", 1);
  return (0);
}
