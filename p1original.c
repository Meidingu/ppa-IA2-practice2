#include<stdio.h>
#include<math.h>

void input(float *base,float *height)
{
  printf("Enter the value of base =\n");
  scanf("%f",base);
  printf("Enter the value of height =\n");
  scanf("%f",height);
}

void area(float base,float height,float *area)
{
  *area = ((base*height)/2);
}

void output(float base,float height,float area)
{
  printf("The area of triange is = %f\n",area);
}

int main()
{
  float b,h,a;
  input(&b,&h);
  area(b,h,&a);
  output(b,h,a);
  return 0;
}