/***********************
CLASS RIGHT TRIANGLE
************************/

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
	double side1; 
	double side2; 
	double base;  

public:
	Triangle() {}
	void getDimensions(void);
	double getArea(void);
	double getPerimeter(void);
};
#endif TRIANGLE_H