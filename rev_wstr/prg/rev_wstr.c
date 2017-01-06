int	my_strlen(char *str)
{
  char	*tmp;

  tmp = str;
  while (*tmp)
    tmp++;
  return (tmp - str);
}

void	my_putstr(char *str)
{
  write(1, str, strlen(str));
}

int	count_word(char *str)
{
  int	i;

  i = 0;
  while (*str)
    {
      while (*str == ' ' || *str == '\t')
	str++;
      if (*str)
	{
	  i++;
	  while (*str && *str != ' ' && *str != '\t')
	    str++;
	}
    }
  return (i);
}

char	**str_to_wtab(char *str)
{
  char	**wtab;
  int	count;
  int	i;

  i = 0;
  count = count_word(str);
  wtab = malloc((count + 1) + sizeof(*wtab));
  while (*str)
    {
      while (*str == ' ' || *str == '\t')
	str++;
      if (*str)
	{
	  wtab[i++] = str;
	  while (*str && *str != ' ' && *str != '\t')
	    str++;
	  if (*str)
	    *str++ = 0;
	}
    }
  wtab[i] = 0;
  return (wtab);
}

void	rev_wstr(char *str)
{
  char	**wtab;
  int	count;
  int	i;
  int	flag;

  if (!(count = count_word(str)))
    return ;
  wtab = str_to_wtab(str);
  flag = 0;
  while (count > 1)
    {
      my_putstr(wtab[count - 1]);
      write(1, " ", 1);
      count--;
    }
  my_putstr(wtab[0]);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    rev_wstr(av[1]);
  write(1, "\n", 1);
  return (0);
}
