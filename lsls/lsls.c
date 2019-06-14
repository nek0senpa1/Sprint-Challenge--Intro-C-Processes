#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{

  DIR *directo;
  struct dirent *de;
  // Parse command line

  printf("%d command line args: \n", argc);

  for (int i = 0; i < argc; i++) {
    printf("   %s\n", argv[i]);
  }

  // for (int j = 0; j < argv; j++) {
  //   printf(" %s/n", argv[j]);
  // }

  char *stringy = "./";

  // printf("stringy is : %s \n", stringy);

  if (argv < 2) {
    printf("no args given... \n");
  } else {
    stringy = argv[1];
  }

  if (stringy == NULL) {
    printf("no args given... \n");

    directo = opendir(".");

    while ( ( de = readdir(directo) ) != NULL) {
      printf("%s\n", de->d_name);
    }

    return 0;
  }


  printf("the place we're gonna look is: %s \n", stringy);
  printf("--------------------------------------------\n");
  // why does this tell me NULL when it should be "." ... ?



  directo = opendir(stringy);

  while ( ( de = readdir(directo) ) != NULL) {
    printf("%s\n", de->d_name);
  }



  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}