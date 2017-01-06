
# include       <math.h>
# include       <stdlib.h>
# include       <stdio.h>
# include       <string.h>

void            my_putchar(char c)
{
  write(1, &c, 1);
}

char            find_to_base(int pos, char* base)
{
  return (base[pos]);
}

int             find_from_base(char c, char* base)
{
  int           i = 0;

  while (base[i])
    {
      if (c == base[i])
	return (i);
      ++i;
    }
  return (-1);
}

int             conv_to_base_ten(char* nb, char* base)
{
  int           i;
  int           cnt = 0;
  int           res = 0;

  i = strlen(nb) - 1;
  while (i >= 0)
    {
      res += find_from_base(nb[i], base) * pow(strlen(base), cnt);
      i--;
      ++cnt;
    }
  return (res);
}

void            rec(int nb, char* base)
{
  int           res;

  res = nb / strlen(base);
  if (res >= strlen(base))
    rec(res, base);
  else
    if (res > 0)
      my_putchar(find_to_base(res, base));
  my_putchar(find_to_base(nb % strlen(base), base));
}

void            conv_nbr(char* nb, char* base_d, char* base_a)
{
  int           res_ten;

  if (nb[0] == '-')
    {
      my_putchar('-');
      res_ten = conv_to_base_ten(nb + 1, base_d);
    }
  else
    res_ten = conv_to_base_ten(nb, base_d);
  rec(res_ten, base_a);
}

int             main(int ac,char** av)
{
  if (ac > 3)
    conv_nbr(av[1], av[2], av[3]);
  write(1, "\n", 1);
  return 0;
}
