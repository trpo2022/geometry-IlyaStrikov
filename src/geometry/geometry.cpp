#include "libgeo/Check.h"
#include <iostream>

using namespace std;

int main()
{
    float x_cir, y_cir, x1_tr, x2_tr, x3_tr, y1_tr, y2_tr, y3_tr, r;
	  cout << "Enter the coordinates of the circle: ";
    cin >> x_cir >> y_cir >> r;
  	cout << "\nEnter the coordinates x1, y1 for the triangle: ";
	  cin >> x1_tr >> y1_tr; 
	  cout << "\nEnter the coordinates x2, y2 for the triangle: ";
  	cin >> x2_tr >> y2_tr;
  	cout << "\nEnter the coordinates x3, y3 for the triangle: ";
  	cin >> x3_tr >> y3_tr;
  	if (r > 0) {
        check(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
	  } 
    else
	  {
	  	  cout << "Error! Radius is negative";
  	}
    circle_area(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    circle_perimeter(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    triangle_area(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    triangle_perimeter(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
	  return 0;
}
