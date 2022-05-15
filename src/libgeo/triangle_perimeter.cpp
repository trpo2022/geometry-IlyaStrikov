#include <cmath>
#include <iostream>

using namespace std;

int triangle_perimeter(float x1_tr, float y1_tr, float x2_tr, float y2_tr, float x3_tr, float y3_tr)
{
	float a, b, c, P;
    	a = sqrt(((x2_tr - x1_tr) * (x2_tr - x1_tr) + (y2_tr - y1_tr) * (y2_tr - y1_tr)));
    	b = sqrt(((x3_tr - x2_tr) * (x3_tr - x2_tr) + (y3_tr - y2_tr) * (y3_tr - y2_tr)));
    	c = sqrt(((x1_tr - x3_tr) * (x1_tr - x3_tr) + (y1_tr - y3_tr) * (y1_tr - y3_tr)));
    	P = (a + b + c);
    	cout << "Perimeter of the triangle: " << P << endl;
    	return P;
}
