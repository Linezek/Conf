void	rotone(char *str)
{
  while (*str)
    {
      if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
	*str += 1;
      else if (*str == 'z' || *str == 'Z')
	*str -= ('z' - 'a');
      write (1, str++, 1);
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    rotone(av[1]);
  write(1, "\n", 1);
}
