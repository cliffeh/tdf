#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  FILE *fp;
  int lineno = 0;
  for (int i = 1; i < argc; i++)
    {
      if (!(fp = fopen (argv[i], "r")))
        {
          fprintf (stderr, "error: couldn't open file: %s\n", argv[i]);
        }
    }
}
