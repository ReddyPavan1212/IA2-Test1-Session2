#include <stdio.h>
struct _triangle
{
float base,altitude,area;
};typedef struct _triangle Triangle;

Triangle input_triangle()
{
 Triangle t;
 printf("Enter the base of the triangle\n");
 scanf("%f", &t.base);
 printf("Enter the height of the triangle\n");
 scanf("%f", &t.altitude);
 return t;
}

void find_area(Triangle *t)
{
 t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle *f)
{
 printf("The area of the triangle with base = %f and altitude = %f is %f.\n", f->base, f->altitude, f->area);
}

int main()
{ 
  Triangle T = input_triangle();
  find_area(&T);
  output(&T);
  return 0;
}