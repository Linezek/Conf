void	hidenp(char *str1, char *str2)
{
  while (*str2)
    {
      if (*str1 == *str2)
	str1++;
      str2++;
    }
  if (*str1)
    write(1, "0\n", 2);
  else
    write(1, "1\n", 2);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    hidenp(av[1], av[2]);
  else
    write(1, "\n", 1);
  return (0);
}
