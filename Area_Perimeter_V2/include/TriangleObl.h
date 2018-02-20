/***********************
CLASS OBLIQUE TRIANGL
************************/

#ifndef O_TRIANGLE_H
#define O_TRIANGLE_H

class TriangleObl
{
	private:	
		double side1;
		double side2;
		double side3;

	public:
		TriangleObl() {}
		void getDimensions(void);
		double checkTriangle(void);
		double getArea(double);
		double getPerimeter(void);
};
#endif O_TRIANGLE_H
