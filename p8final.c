#include <stdio.h>
struct _triangle
{
float base,altitude,area;
};typedef struct _triangle Triangle;

int input_n()
{
 int number_of_triangles;
 printf("Enter the number of triangles\n");
 scanf("%d", &number_of_triangles);
 return number_of_triangles;
}

Triangle input_triangle()
{
 Triangle t;
 printf("Enter the base and altitude of your triangle\n");
 scanf("%f%f", &t.base, &t.altitude);
 return t;
}

void input_n_triangles(int numTri, Triangle t[numTri])
{
 for( int count = 0; count < numTri; count++)
  t[count] = input_triangle();
}

Triangle find_area(Triangle *t)
{
 t->area = 0.5 * t->base * t->altitude;
 return *t; 
}

void find_areas_n(int numTri, Triangle t[numTri])
{
 for( int count = 0; count < numTri; count++)
  t[count] = find_area(&t[count]);
}

Triangle find_smallest_triangle(int numTri, Triangle t[numTri])
{
 Triangle least; 
 least = t[0];
 for( int count = 0; count < numTri; count++)
  {
   for(int count1 = count + 1; count1 < numTri; count1++)
    if(t[count].area < t[count1].area)
    least = t[count];
  }
  return least;
}

void output(Triangle smallest)
{
  printf("The smallest triangle is of base %f and length %f with an area of %f\n", smallest.base, smallest.altitude, smallest.area);
}

int main()
{
  Triangle t;
  int numTri = input_n();
  Triangle Triangles[numTri];
  input_n_triangles(numTri, Triangles);
  find_areas_n(numTri, Triangles);
  t = find_smallest_triangle(numTri, Triangles);
  output(t);
}