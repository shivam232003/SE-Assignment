#include<stdio.h>

//area of circle
int main() 
{
	
float radius, area;

printf("Enter the radius of a circle : ");

scanf("%f", &radius);

area = 3.14*radius*radius;

printf("Area of the circle = %f\n", area);

return 0;



//area of rectangle

	
	int width,height,area;
	
	printf("Enter Height: ");
	scanf("%d/n",&height);
	
	printf("Enter Width: ");
	scanf("%d/n",&width);
	
	int area;
	
	area=width*height;
	
	printf("Area of the rectangle=%d",area);
	


//area of triangle

 	float b ,h, area;

	b= 5;
	h= 13;

	area = (b*h) / 2 ;

	printf("\n\n Area of Triangle is: %f",area);

	return 0;
}
