#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
	Rectangle rect1;
	rect1.set_width(2);
	rect1.set_height(5);

	Rectangle rect2(4, 8);
	
	cout << "Rectangle 1 width: " << rect1.get_width() << endl;
	cout << "Rectangle 1 height: " << rect1.get_height() << endl;	
	cout << "Rectangle 1 area: " << rect1.area() << endl;
	cout << "Rectanle 1 perimeter: " << rect1.perimeter() << endl;
	
	cout << "Rectangle 2 width: " << rect2.get_width() << endl;
        cout << "Rectangle 2 height: " << rect2.get_height() << endl;
	cout << "Rectangle 2 area: " << rect2.area() << endl;
        cout << "Rectanle 2 perimeter: " << rect2.perimeter() << endl;

	return 0;
}
