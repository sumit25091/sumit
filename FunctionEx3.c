/*WAP to calculate and show area of circle,triangle and square using function*/

#include<stdio.h>

float area_circle(float r);
float area_triangle(float b,float h);
float area_square(float s);

void main()
{
	float rad,base,height,side;
	float ac,at,as;
	
	rad=4.5f;
	base=4.1f;
	height=9.4f;
	side=10.0f;
	
	ac=area_circle(rad);
	at=area_triangle(base,height);
	as=area_square(side);
	
	printf("\n radius=%.2f \t height=%.2f \t side=%.2f",rad,base,height,side);
	
	printf("\n Area of circle=%.2f",ac);
	printf("\n Area of triangle=%.2f",at);
	printf("\n Area of square=%.2f",as);
}

  float area_circle(float r)
  {
  	float area = 3.14*r*r;
  	return area;
  }
  float area_triangle(float b,float h)
  {
  	float area=0.5f*b*h;
  	return area;
  	
  }
  float area_square(float s)
  {
  	float area=s*s;
  	return area;
  }
