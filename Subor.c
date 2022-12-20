#include <stdio.h>

int main(){

FILE *subor = fopen("subor.txt", "r");
  int znak = getc(subor);
  while (znak!=EOF) 
  {
    /* display contents of file on screen */ 
    putchar(znak); 
  
    znak = getc(fp);
  }

  fclose(subor);
      
    return 0;
}
