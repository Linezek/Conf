void	aff_tab(int nb)
{
  int	i;

  for (i = 1; i < 10; i++)
    printf("%d x %d = %d\n", i, nb, i * nb);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    aff_tab(atoi(av[1]));
  else
    printf("\n");
  return (0);
}
