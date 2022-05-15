#include "Check.h"
#include <cmath>
#include <iostream>

using namespace std;

void check(float x_sir, float y_sir, float r, float x1_tr, float y1_tr, float x2_tr, float y2_tr, float x3_tr, float y3_tr)
{
    if (((sqrt((x_sir - x1_tr) * (x_sir - x1_tr) + (y_sir - y1_tr) * (y_sir - y1_tr)) > r)
         && (sqrt((x_sir - x2_tr) * (x_sir - x2_tr) + (y_sir - y2_tr) * (y_sir - y2_tr)) > r)
         && (sqrt((x_sir - x3_tr) * (x_sir - x3_tr) + (y_sir - y3_tr) * (y_sir - y3_tr)) > r))
        || ((sqrt((x_sir - x1_tr) * (x_sir - x1_tr) + (y_sir - y1_tr) * (y_sir - y1_tr)) < r)
            && (sqrt((x_sir - x2_tr) * (x_sir - x2_tr) + (y_sir - y2_tr) * (y_sir - y2_tr)) < r)
            && (sqrt((x_sir - x3_tr) * (x_sir - x3_tr) + (y_sir - y3_tr) * (y_sir - y3_tr)) < r))) {
        cout << "They don't intersect" << endl;
    } else {
        cout << "intersect" << endl;
    }
}
