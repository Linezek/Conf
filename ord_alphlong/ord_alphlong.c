#include <stdlib.h>
#include <unistd.h>

int	my_strlen(char *str)
{
  int	t;

  for (t = 0; str[t] != '\0'; t++);
  return (t);
}

void	my_putstr(char *tab)
{
  int	t;

  t = 0;
  while (tab[t] != '\0')
    {
      write(1, &tab[t], 1);
      t++;				
    }
}

char	*my_ord_len(char *str, char *tab)
{
  int	i = my_strlen(str);
  int	nbl = 1;
  int	t = 0;
  int	a = 0;
  int	b;
  int	tmpa;
  int	c;

  if (NULL == (tab = malloc((i+2)*sizeof(*tab))))
    exit (1);
  while (t != (i+1))
    {
      c = 1;
      a = 0;
      while (str[a] != '\0')
	{
	  tmpa = a;
	  b = 0;
	  while (str[a] != ' ' && str[a] != '\0')
	    {
	      a++;
	      b++;
	    }
	  if (b == nbl)
	    {
	      if (c == 0)
		t++;
	      c = 0;
	      while (tmpa != a)
		{
		  tab[t] = str[tmpa];
		  t++;
		  tmpa++;
		}
	      tab[t] = ' ';
	    }
	  if (str[a] != '\0')
	    a++;
	}
      nbl++;
      if (c == 0)
	{
	  tab[t] = '\n';
	  t++;
	}
    }
  return (tab);
}

int	my_comp_word(char *tab, int i, int s)
{
  int	a1 = i;
  int	a2 = (s + 1);
  int	comp1 = 0;
  int	comp2 = 0;

  while (a1 != s)
    {
      if (tab[a1] < 'a' && tab[a2] >= 'a')
	{
	  comp1 = tab[a1] + 32;
	  comp2 = tab[a2];
	}
      else if (tab[a2] < 'a' && tab[a1] >= 'a')
	{
	  comp1 = tab[a1];
	  comp2 = tab[a2] + 32;
	}
      else if (tab[a2] < 'a' && tab[a1] < 'a')
	{
	  comp1 = tab[a1] + 32;
	  comp2 = tab[a2] + 32;
	}
      else if (tab[a1] >= 'a' && tab[a2] >= 'a')
	{
	  comp1 = tab[a1];
	  comp2 = tab[a2];
	}
      if (comp1 != comp2)
	return (comp1 - comp2);
      a1++;
      a2++;
    }
  return (0);
}

char	*my_rev_word(char *tab, int i, int s)
{
  int	a1 = i;
  int	a2= (s + 1);
  char	tmp;

  while (a1 != s)
    {
      tmp = tab[a1];
      tab[a1] = tab[a2];
      tab[a2] = tmp;
      a1++;
      a2++;
    }
  return (tab);
}

char	*my_ord_ascii(char *tab)
{
  int	t = 0;
  int	i;
  int	s;
  int	s2;
  int	comp;
  int	c;
  int	x;
  int	r;

  while (tab[t] != '\0')
    {
      r = 0;
      c = 1;
      x = (t - 1);
      while (tab[t] != '\n')
	{
	  if (tab[t] == ' ')
	    r = 1;
	  t++;
	}
      while(c != 0 && r == 1)
	{
	  s = x;
	    while(s != t)
	      {
		i = (s + 1);
		for (s = i; tab[s] != ' ' && s != t; s++);
		if (s != t)
		  {
		    for (s2 = (s+1); tab[s2] != ' ' && s2 != t; s2++);
		    comp = my_comp_word(tab, i, s);
		    if (comp > 0)
		      {
			tab = my_rev_word(tab, i, s);
			c = 1;
		      }
		    else
		      c = 0;
		  }
	      }
	}
      t++;
    }
  return (tab);
}

int	main(int ac, char **av)
{
  char	*tab;
  char	c = '\n';

  if (ac > 1)
    {
      tab = my_ord_len(av[1], tab);
      tab = my_ord_ascii(tab);
      my_putstr(tab);
    }
  else
    write(1, &c, 1);
  return (0);
}
