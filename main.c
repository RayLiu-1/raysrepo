#include <stdio.h>
#include <hw1.h>
int main(){
  printf("Hello World\n");
  printf("The strings before resversing\n");
  char a* = "Yes";
  char b* = "qweasd";
  char c* = "!@3ijm";
  printf(a);
  printf("\n");
  printf(b);
  printf("\n");  
  printf(c);
  printf("\n");
  printf("The strings after resversing\n");  
  printf(reverse_string(a));
  printf("\n");
  printf(reverse_string(b));
  printf("\n");  
  printf(reverse_string(c));
  printf("\n");
  printf(reverse_string("This is a string."));
  printf("\n");
  printf(reverse_string("some NUMmbers12345"));
  printf("\n");  
  printf(reverse_string("Does it reverse \n\0\t correctly?"));
  printf("\n");
  return 0;
}

