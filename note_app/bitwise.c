#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, bit_a, bit_b;
  printf("bitwise OR operator |\n");

  for(i=0; i < 4; i++) {
    bit_a = (i & 2) / 2;  //Get the second bit.
    bit_b = (i & 1);      //Get the first bit.
    printf("%d | %d = %d\n", bit_a, bit_b, bit_a| bit_b);
  }

  printf("\nBitwise AND operator &\n");
  for(i = 0; i < 4; i++) {
    bit_a = (i & 2) / 2; // Get the second bit
    bit_b = (i & 1);     //Get the first bit
    printf("%d & %d = %d\n", bit_a, bit_b, bit_a & bit_b);
  }
  return EXIT_SUCCESS;
}
