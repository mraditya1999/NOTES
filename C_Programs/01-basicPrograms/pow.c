#include <stdio.h>

int main()
{
  int num = 5, pow = 3;
  int p = power(num, pow);
  printf("%d ", p);
  return 0;
}

int power(int num, int pow)
{
  // Write your code here
  static int product = 1;
  if (pow < 0)
    return -1;
  else if (pow == 0)
    return 1;
  else
  {
    product = product * num;
    power(num, pow - 1);
  }
  printf("%d", product);
}