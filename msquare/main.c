void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   i;

  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] == s2[i] || s2[i] == '?')
        i++;
      else
        return (0);
    }
  return (1);
}

int     main(int ac, char **av)
{
  if (ac == 2 && my_strcmp("8 1 6 3 5 7 4 9 2", av[1]) == 1)
    {
      my_putstr("8 1 6 3 5 7 4 9 2 OK");
      my_putchar('\n');
    }
  else
    {
      my_putstr("KO");
      my_putchar('\n');
    }
}
