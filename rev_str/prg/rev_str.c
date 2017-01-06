void	rev_str(char *str)
{
  int	i;

  i = strlen(str) - 1;
  while (i)
    write(1, &(str[i--]), 1);
  write(1, &(str[i]), 1);
}

int	main(int ac, char **av)
{
  if (ac == 2 && av[1][0])
    rev_str(av[1]);
  write(1, "\n", 1);
  return (0);
}
