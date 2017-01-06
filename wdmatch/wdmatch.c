void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char *str)
{
  int i = 0;
  while (str[i] != 0)
    my_putchar(str[i++]);
}

int	wdmatch(char *str1, char *str2)
{
  while (*str2)
    {
      if (*str1 == *str2)
	str1++;
      str2++;
    }
  if (*str1)
    return 0;
  else
    return 1;
}

int	main(int ac, char **av)
{
  int i;
  if (ac == 3)
    {
      i = wdmatch(av[1], av[2]);
      if (i == 1)
	my_putstr(av[1]);
    }
  write(1, "\n", 1);
  return (0);
}
