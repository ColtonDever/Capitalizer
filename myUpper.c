#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
char*str = NULL;
int i, x;
for(i=1; i < argc; i++) {
  str = malloc(strlen(argv[i])+1);

    if(str) {
      strcpy(str, argv[i]);
      for(int x=0; x < strlen(str); x++)  {
        str[x] = toupper(str[x]);
      }

    printf("%s ", str);
    free(str);

    }
  }
  printf("\n");
  return 0;
}
