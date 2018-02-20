/***********************
	CLASS CIRCLE
************************/

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	double radius;

public:
	Circle() {}
	void getDimensions(void);
	void getDimensionsH(void);
	double getArea(void);
	double getCircumfrence(void);
};
#endif CIRCLE_H
