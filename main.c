#include <stdlib.h>
#include <stdio.h>

void customer_1(void)
{
  printf("This is customer_1 branch!");
}

void main(void)
{
  customer_1();
  printf("This is main code!");
}
