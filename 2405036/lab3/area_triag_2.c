#include <math.h>
#include <stdio.h>

    int main()
    {
      float a,b,c,s,area;
      printf("\nEnter the three sides of a triangle: ");
      scanf("%f%f%f",&a,&b,&c);
      s=(a+b+c)/2;
      area= sqrt(s*(s-a)*(s-b)*(s-c));
      printf("The area of the triangle is :%f",area);
      
      return 0;
    }

