#include <stdio.h>

int input_number()
{
 int a;
 printf("Enter a number:\n");
 scanf("%d", &a);
 return a;
}

int is_composite(int n)
{
 int count = 0;
 for( int i = 1; i <= n; i++)
  if (n % i == 0)
   count++;

 return count;
}

void output(int n, int composite)
{
 if (composite > 2)
   printf("The number %d is a composite number.\n", n);

 else
  printf("The number %d is a not a composite number.\n", n);
}

int main()
{
  int number = input_number();
  int find_comp = is_composite(number);
  output(number, find_comp);
}