#include <iostream>
#include <cmath>

using namespace std;

int circle_area(float r)
{
      float Pi = 3.14, S;
	    S = r*r*Pi;
	    cout << "Circle area: " << S << endl;
	    return S;
}
