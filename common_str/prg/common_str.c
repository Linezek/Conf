void	conv_nbr(char *str1, char *str2)
{
  char	*tmp;
  int	i;

  i = 0;
  while (*str1)
    {
      tmp = str2;
      while (*tmp)
	if (*str1 == *tmp++)
	  i++;
      str1++;
    }
  printf("%d", i);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    conv_nbr(av[1], av[2]);
  printf("\n");
  return (0);
}
