char	*get_min_str(char **list)
{
  int	i_min;
  int	i;
  int	nb;

  nb = 0;
  i_min = 0;
  for (i = 0; list[i]; i++)
    {
      if (nb > strlen(list[i]))
	{
	  nb = strlen(list[i]);
	  i_min = i;
	}
    }
  return (list[i_min]);
}

int	main(int ac, char **av)
{
  char	*minstr;

  minstr = get_min_str(av + 1);
  printf("%s\n", minstr);
  return (0);
}
