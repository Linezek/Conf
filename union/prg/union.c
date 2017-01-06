#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0') {
    my_putchar(str[i]);
    i++;
  }
}

int my_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0') {
    i++;
  }
  return(i);
}

int main(int argc, char **argv)
{
  if (argc == 3) {
    int i = 0;
    int la = my_strlen(argv[1]);
    int lb = my_strlen(argv[2]);
    int lc = la + lb;
    char tab[lc];
    char mis[lc];
    while(i < lc) {
      tab[i] = '\0';
      mis[i] = '\0';
      i++;
    }
    i = 0;
    while(i < la) {
      tab[i] = argv[1][i];
      i++;
    }
    int j = i;
    i = 0;
    while(i < lb) {
      tab[j] = argv[2][i];
      i++;
      j++;
    }
    i = 0;
    j = 0;
    int jmax = 0;
    int flag = 0;

    while(i < lc) {
      j = 0;

      while(j < jmax) {
	if(mis[j] == tab[i]) {
	  flag = 1;
	}
	j++;
      }

      if(flag == 0) {
	my_putchar(tab[i]);
	mis[jmax] = tab[i];
	jmax++;
      }

      flag = 0;
      i++;
    }
  }
  my_putchar('\n');
  return(0);
}
