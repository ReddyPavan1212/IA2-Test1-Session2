#include <stdio.h>

int input()
{
 int a;
 printf("Enter a number\n");
 scanf("%d", &a);
 return a;
}

int hcf(int a, int b)
{ 
 int hcf = 1;
 int small;
 small = (a < b) ? a : b;
 
 for (int i = 1; i <=small; i++)
   if (a % i == 0 && b % i == 0)
    hcf = i;

 return hcf;
}

void output(int a, int b, int hcf)
{
 printf("The HCF of %d and %d is %d\n", a, b, hcf);
}

int main()
{
 int a = input();
 int b = input();
 int HCF = hcf(a,b);
 output(a,b,HCF); 
 return 0;
}