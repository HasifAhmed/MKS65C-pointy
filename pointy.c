/*Hasif Ahmed Get to the pointer! */
#include <stdio.h>
int main(){

  unsigned int y = 3000000000;
  char * z = &y;

  int * p = &y;

  printf("Unsigned int in hexadecimal int: %x\n",y);

  int o;
  for(o = 0;o < sizeof(y); o += 1){
    printf("Individual byte of int: %hhx\n", *z++);
  }

  z = &y;

  int i;
  for(i = 0; i < sizeof(y); i += 1){
    (*z)++;
    z++;
    printf("Number in hex: %x\nNumber in decimal: %u\n",y,y);
  }

  z = &y;

  int k;
  for(k = 0; k < sizeof(y); k += 1){
    (*z) += 16;
    z++;
    printf("Number in hex: %x\nNumber in decimal: %u\n",y,y);

  }

  p = &y;

  int g;
  for(g = 0; g < sizeof(y); g += 1){
    (*p) += 16;
    printf("Number in hex: %x\nNumber in decimal: %u\n",y,y);
  }





  return 0;
}
