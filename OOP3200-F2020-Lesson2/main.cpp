/** main.cpp
 *
 *	In this example program, did the following:
 *		- Examined a simple class with 'instance' data-members, a constructor, accessors, mutators.
 *
 *	@author		<Fleur Blanckaert>
 *	@studentID  <100747083>
*/

#include <iostream> 		// cin, cout
#include <iomanip>			// fixed, setprecision()

#include "MyConsoleInput.h" // ConsoleInput::ReadInteger()
#include "CartesianPoint.h"

using namespace std;


// main() function
int main()
{
	// Declarations
	// a point called 'origin', initialized to 0, 0
	CartesianPoint origin = CartesianPoint(10, 20);
	
	// a point called 'destination'
	CartesianPoint destination;

	int inputX; // temporary input variable for x
	int inputY; // temporary input variable for y
	
	// to store the distance between two points
	double distance;

	try
	{
		// Input

		// Prompt the user for the coordinates
		cout << "\nEnter coordinates of the destination point: " << endl;
		// prompt for, read, and store x coordinate:
		cout << "X: ";
		inputX = ConsoleInput::ReadInteger();
		destination.SetX(inputX);

		// prompt for, read, and store y coordinate:
		cout << "Y: ";
		inputY = ConsoleInput::ReadInteger();
		destination.SetY(inputY);


		// Processing
		// determine the distance between the two points
		//distance = origin.GetDistanceTo(destination);
		distance = origin - destination; 

		std::cout << "origin is equal to destination?: " << std::to_string (origin == destination) << std::endl;

		CartesianPoint newPoint = origin + destination;

		std::cout << "Origin plus destination = " << newPoint << std::endl;

		// Output 
		// Show the points and the distance
		cout << fixed << setprecision(3); // formatting
		cout << "\nThe Distance between " << origin
			<< " and " << destination << " is "
			<< distance << ". " << endl;

		CartesianPoint anotherPoint;

		std::cout << "\nEnter another point: ";
		std::cin >> anotherPoint;

		std::cout << "You entered: " << anotherPoint << std::endl;
	}

	catch (exception& ex)
	{
		cerr << ex.what() << " Ending the program." << endl;
	}

	// done.
	cout << endl << endl;
	return 0;
} // end of main()

