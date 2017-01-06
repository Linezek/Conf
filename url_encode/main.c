/*
** main.c for  in /home/exam/rendu/ex_5
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Mon Jan  4 10:29:31 2016 Exam User
** Last update Mon Jan  4 11:21:44 2016 Exam User
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    i += 1;
  return(i);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i += 1;
    }
}

int	my_put(char *str)
{
  int	i;

  i= 0;
  while (str[i] != 0)
    {
      if (str[i] == ' ')
	my_putchar('+');
      else if (str[i] >= 'a' && str[i] <= 'z' 
	       || str[i] >= 'A' && str[i] <= 'Z'
	       || str[i] >= '0' && str[i] <= '9')
	my_putchar(str[i]);
      else if (str[i] == '!')
	my_putstr("!");
      else if (str[i] == 34)
	my_putstr("%22");
      else if (str[i] == '#')
        my_putstr("%23");
      else if (str[i] == '$')
        my_putstr("%24");
      else if (str[i] == '%')
        my_putstr("%25");
      else if (str[i] == '&')
        my_putstr("%26");
      else if (str[i] == 39)
        my_putstr("%27");
      else if (str[i] == 40)
        my_putchar(40);
      else if (str[i] == 41)
        my_putchar(41);
      else if (str[i] == '*')
        my_putstr("*");
      else if (str[i] == '+')
        my_putstr("%2B");
      else if (str[i] == ',')
        my_putstr(",");
      else if (str[i] == '-')
        my_putstr("-");
      else if (str[i] == '.')
        my_putstr(".");
      else if (str[i] == '/')
        my_putstr("%2F");
      else if (str[i] == 123)
        my_putstr("%7B");
      else if (str[i] == '|')
        my_putstr("%7C");
      else if (str[i] == 125)
        my_putstr("%7D");
      else if (str[i] == '~')
        my_putstr("%7E");
      else if (str[i] == 91)
        my_putstr("%5B");
      else if (str[i] == 92)
        my_putstr("%5C");
      else if (str[i] == 93)
	my_putstr("%5D");
      else if (str[i] == 94)
        my_putstr("%5E");
      else if (str[i] == 95)
        my_putstr("_");
      else if (str[i] == 96)
        my_putstr("%60");
      else if (str[i] == 58)
        my_putstr("%3A");
      else if (str[i] == ';')
        my_putstr("%3B");
      else if (str[i] == '<')
        my_putstr("%3C");
      else if (str[i] == '=')
        my_putstr("3D");
      else if (str[i] == '>')
        my_putstr("%3E");
      else if (str[i] == '?')
        my_putstr("%3F");
      else if (str[i] == '@')
        my_putstr("%40");
      i += 1;
    }
}

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb >= 10)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + 48); 
}

int	main(int ac, char **av)
{
  if (ac == 2)
    {
      if (av[1] == 0)
	{
	  my_putchar('\n');
	  return (1);
	}
      else
	{
	  my_put(av[1]);
	  my_putchar('\n');
	}
    }
  else
    my_putchar('\n');
}
