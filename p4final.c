#include <stdio.h>

int input_array_size()
{
 int a;
 printf("Enter the size of your array:\n");
 scanf("%d", &a);
 return a;
}

void input_array(int n, int a[n])
{
 printf("Enter your numbers\n");
 
 for (int i = 0; i < n; i++)
 scanf("%d", &a[i]);
}

int is_composite(int n)
{
 int count = 0;
 for(int i = 2; i < n; i++)
  if (n % i == 0)
   return 1;
  
  return 0;
}

int sum_composite_numbers(int n, int a[n])
{
 int sum = 0;
  for(int i = 0; i < n; i++)
  {
   if(is_composite(a[i]))
   {
    sum += a[i];
   }
  }
 return sum;
}

void output(int sum)
{
 printf("Sum = %d\n",sum);
}

int main()
{
  int arraySize = input_array_size();
  int num_entered[arraySize];
  input_array(arraySize, num_entered);
  int sum = sum_composite_numbers(arraySize, num_entered);
  output(sum);
  return 0;
}