#include <stdio.h>
int input_side()
{
 int a;
 printf("Enter the length of a side:\n");
 scanf("%d", &a);
 return a;
}

int check_scalene(int a, int b, int c)
{
 return a != b && b != c ;
}

void output(int a, int b, int c, int isscalene)
{
 if(isscalene == 1)
   printf("The triangle of sides %d, %d and %d is a scalene triangle.\n", a,b,c);
 
 else
  printf("The triangle of sides %d, %d and %d is not a scalene triangle.\n", a,b,c);
}

int main()
{
  int a = input_side();
  int b = input_side();
  int c = input_side();
  int result = check_scalene(a,b,c);
  output(a,b,c,result);
}