/*
** rev_str.c for rev_str in /u/all/lorill_a/cu/rendu/xxx/rev_str/prg/tst
** 
** Made by anthony lorillon
** Login   <lorill_a@epitech.net>
** 
** Started on  Tue Dec 22 18:45:21 2009 anthony lorillon
** Last update Tue Dec 22 18:52:25 2009 anthony lorillon
*/

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		rev_str(char *str)
{
  int		i;
  int		j;
  i = 0;
  j = 0;

  while (str[i] != '\0')
    {
      i++;
    }
  i = i - 1;
  while (i !=0)
    {
      my_putchar(str[i]);
	i--;
    }
}

int		main(int argc, char **argv)
{
  if (argc <1)
    my_putchar('\n');
  else
    rev_str(argv[2]);
  return(0);
}
