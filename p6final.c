#include <stdio.h>
#include <string.h>

void input_string(char *a)
{
 printf("Enter your string\n");
 scanf("%s", a);
}

char *str_reverse(char *a)  
{    
 int i, len, temp;  
 for(len = 0; a[len] != '\0'; len++);
      
 for (i = 0; i < len/2; i++)  
 {  
  temp = a[i];  
  a[i] = a[len - i - 1];  
  a[len - i - 1] = temp;  
 }  

 return a;
}  

void output(char *a, char *reverse)
{
 printf("%s %s\n",a,reverse);
}

int main()
{
 char a[50];
 input_string(a);
 char b[50];
 strcpy(b,a);
 str_reverse(a);
 output(b, a);
}