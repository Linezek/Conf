void	half_str(char **str)
{
  int	i;
  int	n;

  for (i = 0; str[i]; i++)
    {
      n = 0;
      while (*str[i])
	{
	  if (!(n % 2))
	    write(1, str[i], 1);
	  str[i]++;
	  n++;
	}
      write(1, "\n", 1);
    }
}

int	main(int ac, char **av)
{
  if (ac > 1)
    half_str(&av[1]);
  else
    write(1, "\n", 1);
  return (0);
}
