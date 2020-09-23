#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__


#include <string> 

//class declaration section
class CartesianPoint
{
public:

	//Constructors
	CartesianPoint(int x = 1, int y = 1);
	~CartesianPoint();

	/*Copy Constructor*/
	CartesianPoint(const CartesianPoint& point2);

	/*Operator Overloads*/

	CartesianPoint operator+(const CartesianPoint& point2) const;

	double operator-(const CartesianPoint& point_to) const;
	bool operator==(const CartesianPoint& other_point) const;

	/*Friend Overloads*/
	friend std::ostream& operator<<(std::ostream& out, const CartesianPoint point);
	friend std::istream& operator>>(std::istream& in, CartesianPoint& point);


	// get x
	int GetX() const;

	// get y
	int GetY() const;

	// -------------------------------------------------------------------------------
	/* Mutator(s): Used to change the state of the object
	*	- should contain logic to ensure object remains in a valid state.
	*	- typically sets a member variable to a parameter
	*/

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint point_To) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int m_x; // x-axis (horizontal) value
	int m_y;  // y-axis (vertical) value

};

#endif /*Defined (__Cartesian_Point__) class*/