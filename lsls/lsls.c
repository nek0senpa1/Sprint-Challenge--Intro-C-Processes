#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line

  printf("%d command line args: \n", argc);

  for (int i = 0; i < argc; i++) {
    printf("   %s\n", argv[i]);
  }

  // for (int j = 0; j < argv; j++) {
  //   printf(" %s/n", argv[j]);
  // }

  char *stringy;

  if (argv < 2) {
    stringy = ".";
  } else {
    stringy = argv[1];
  }

  printf("the place we're gonna look is: %s \n", stringy);



  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}