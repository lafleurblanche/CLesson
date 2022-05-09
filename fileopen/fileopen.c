#include <stdio.h>
#include <stdlib.h>

#define FILENAME "num.txt"

int main(void)
{
  int c;
  FILE *fp;

  if ((fp = fopen(FILENAME, "r")) == NULL) {
    fprintf(stderr, "Error: cannot open \"%s\".\n", FILENAME);
    exit(1);
  }

  while ((c = fgetc(fp)) != EOF) {
    putchar(c);
  }

  if (fclose(fp) == EOF) {
    fprintf(stderr, "Error: cannot close \"%s\".\n", FILENAME);
    exit(2);
  }

  return 0;
}
