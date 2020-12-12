#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_list(char*str);

int main(int argc, char *argv[]) {
char*str = NULL;
int i, x;

for(i=1; i < argc; i++) {
  str = malloc(strlen(argv[i])+1);
    if (str)  {
      strcpy(str, argv[i]);
      print_list(str);
      free(str);
    }
  }
    printf("\n");
    return 0;
}

void print_list(char*str){
      for(int x=0; x < strlen(str); x++)  {
            str[x] = toupper(str[x]);

      }
      printf("%s ", str);
}
