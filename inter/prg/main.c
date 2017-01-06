#define SIZE_BUF	100

int	is_in_buff(char *buff, char c)
{
  int	i;
  int	flag;

  flag = 0;
  for (i = 0; i < SIZE_BUF; i++)
    if (buff[i] == c)
      {
	flag = 1;
	break;
      }
  return (flag);
}

void	inter(char *str1, char *str2)
{
  char	buff[SIZE_BUF];
  int	i;
  int	n;
  
  for (i = 0; i < SIZE_BUF; i++)
    buff[i] = 0;
  n = 0;
  while (*str1)
    {
      for (i = 0; str2[i]; i++)
	if (str2[i] == *str1 && !is_in_buff(buff, str2[i]))
	  {
	    buff[n++] = str2[i];
	    break;
	  }
      str1++;
    }
  for (i = 0; buff[i]; i++)
    write(1, &(buff[i]), 1);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    inter(av[1], av[2]);
  write(1, "\n", 1);
  return (0);
}
