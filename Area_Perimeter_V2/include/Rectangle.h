/***********************
	CLASS RECTANGLE
************************/

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double length;
		double width;
	
	public:
		Rectangle() {}
		void getDimensions(void);
		double getArea(void);
		double getPerimeter(void);
};
#endif RECTANGLE_H