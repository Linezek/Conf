void	epur_str(char *str)
{
  while (*str == ' ' ||  *str == '\t')
    str++;
  while (*str)
    {
      while (*str && (*str != ' ' &&  *str != '\t'))
	write(1, str++, 1);
      if (*str)
	{
	  while (*str == ' ' ||  *str == '\t')
	    str++;
	  if (*str)
	    write(1, " ", 1);
	}
    }
}

int	main(int ac, char **av)
{
  if (ac > 1)
    epur_str(av[1]);
  write(1, "\n", 1);
  return (0);
}
