#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{

  DIR *directo;
  struct dirent *de;
  // Parse command line

  struct stat buf;

  // stat("./lsls.c", &buf);
  // printf("file size is %lld\n", buf.st_size);



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
    printf("No args given. Looking in current dir: \n");
    printf("-----------------------------------------\n");

    directo = opendir(".");

    while ( ( de = readdir(directo) ) != NULL) {
      printf("%s ", de->d_name);
      stat("./d_name", &buf);
      printf("size %lld\n", buf.st_size);
    }

    return 0;
  }


  printf("The place we're gonna look is: %s \n", stringy);
  printf("--------------------------------------------\n");
  // why does this tell me NULL when it should be "." ... ?



  directo = opendir(stringy);

  while ( ( de = readdir(directo) ) != NULL) {
    printf("%s ", de->d_name);
    stat("./d_name", &buf);
    printf("size %lld\n", buf.st_size);
  }



  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}