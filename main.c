#include <stdio.h>
#include "hw1.h"


int main(){
  printf("Hello World\n");
  printf("The strings before resversing\n");
  char a[] = "Yes";
  char b[] = "qweasd";
  char c[] = "!@3ijm";
  printf(a);
  printf("\n");
  printf(b);
  printf("\n");  
  printf(c);
  printf("\n");
  printf("The strings after resversing\n");
  reverse_string(a,3);
  printf(a);
  printf("\n");
  reverse_string(b,6);
  printf(b);
  printf("\n");
  reverse_string(c,6);
  printf(c);
  printf("\n");
  char d[] = "This is a string.";
  reverse_string(d,17);
  printf(d);
  printf("\n");
  char e[] = "some NUMmbers12345";
  reverse_string(e,18);
  printf(e);
  printf("\n");
  char f[] = "Does it reverse \n\0\t correctly?";
  reverse_string(f,31);
  printf("f");
  printf("\n");
  return 0;
}

