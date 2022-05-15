#include <ctest.h>
#include <libgeo/check.h>
#include <math.h>
#include <stdio.h>
#define size 128

CTEST(geometry_suite, simple_overlap)
{
    float x_cir = 0, y_cir = 0, r = 3, x1_tr = 0, y1_tr = 0, x2_tr = 2, y2_tr = 5, x3_tr = 5, y3_tr = 0;
    int exp;
    exp = check(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    int res;
   if (((sqrt((x_sir - x1_tr) * (x_sir - x1_tr) + (y_sir - y1_tr) * (y_sir - y1_tr)) > r)
        && (sqrt((x_sir - x2_tr) * (x_sir - x2_tr) + (y_sir - y2_tr) * (y_sir - y2_tr)) > r)
        && (sqrt((x_sir - x3_tr) * (x_sir - x3_tr) + (y_sir - y3_tr) * (y_sir - y3_tr)) > r))
        || ((sqrt((x_sir - x1_tr) * (x_sir - x1_tr) + (y_sir - y1_tr) * (y_sir - y1_tr)) < r)
            && (sqrt((x_sir - x2_tr) * (x_sir - x2_tr) + (y_sir - y2_tr) * (y_sir - y2_tr)) < r)
            && (sqrt((x_sir - x3_tr) * (x_sir - x3_tr) + (y_sir - y3_tr) * (y_sir - y3_tr)) < r))) {
     	res = 0;
    } else {
        res = 1;
    }
    ASSERT_EQUAL(exp, res);
}

CTEST(geometry_suite, simple_not_overlap)
{
  float  x_cir = -3, y_cir = -3, r = 3, x1_tr = 4, y1_tr = 0, x2_tr = 5, y2_tr = 8, x3_tr = 6, y3_tr = 0;
  int exp;
  exp = check(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
  int res;
  if (((sqrt((x_sir - x1_tr) * (x_sir - x1_tr) + (y_sir - y1_tr) * (y_sir - y1_tr)) > r)
       && (sqrt((x_sir - x2_tr) * (x_sir - x2_tr) + (y_sir - y2_tr) * (y_sir - y2_tr)) > r)
       && (sqrt((x_sir - x3_tr) * (x_sir - x3_tr) + (y_sir - y3_tr) * (y_sir - y3_tr)) > r))
       || ((sqrt((x_sir - x1_tr) * (x_sir - x1_tr) + (y_sir - y1_tr) * (y_sir - y1_tr)) < r)
           && (sqrt((x_sir - x2_tr) * (x_sir - x2_tr) + (y_sir - y2_tr) * (y_sir - y2_tr)) < r)
           && (sqrt((x_sir - x3_tr) * (x_sir - x3_tr) + (y_sir - y3_tr) * (y_sir - y3_tr)) < r))) {
    res = 0;
  } else {
    res = 1;
  }
    ASSERT_EQUAL(exp, res);
}

CTEST(geometry_suite, Circle_area)
{
	float x_cir = -3, y_cir = -3, r = 3, x1_tr = 4, y1_tr = 0, x2_tr = 5, y2_tr = 8, x3_tr = 6, y3_tr = 0;
    int res, exp;
    float Pi;
    res = circle_area(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    Pi=3.14;
	exp=r*r*Pi;
    ASSERT_EQUAL(exp, res);
}

CTEST(geometry_suite, Circle_perimeter.)
{
	float x_cir = -3, y_cir = -3, r = 3, x1_tr = 4, y1_tr = 0, x2_tr = 5, y2_tr = 8, x3_tr = 6, y3_tr = 0;
    int res, exp;
    res = circle_perimeter(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    float Pi;
    Pi=3.14;
	exp=2*r*Pi;
    ASSERT_EQUAL(exp, res);
}

CTEST(geometry_suite, Triangle_perimeter)
{
	float x_cir = -3, y_cir = -3, r = 3, x1_tr = 4, y1_tr = 0, x2_tr = 5, y2_tr = 8, x3_tr = 6, y3_tr = 0;
    int res, exp;
    float a, b, c;
	a = sqrt(((x2_tr - x1_tr) * (x2_tr - x1_tr) + (y2_tr - y1_tr) * (y2_tr - y1_tr)));
  b = sqrt(((x3_tr - x2_tr) * (x3_tr - x2_tr) + (y3_tr - y2_tr) * (y3_tr - y2_tr)));
  c = sqrt(((x1_tr - x3_tr) * (x1_tr - x3_tr) + (y1_tr - y3_tr) * (y1_tr - y3_tr)));
	exp = (a+b+c);
    res = triangle_perimeter(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    ASSERT_EQUAL(exp, res);
}

CTEST(geometry_suite, Triangle_area)
{
	float x_cir = -3, y_cir = -3, r = 3, x1_tr = 4, y1_tr = 0, x2_tr = 5, y2_tr = 8, x3_tr = 6, y3_tr = 0;
    int res, exp;
    float a, b, c, p;
	a = sqrt(((x2_tr - x1_tr) * (x2_tr - x1_tr) + (y2_tr - y1_tr) * (y2_tr - y1_tr)));
  b = sqrt(((x3_tr - x2_tr) * (x3_tr - x2_tr) + (y3_tr - y2_tr) * (y3_tr - y2_tr)));
  c = sqrt(((x1_tr - x3_tr) * (x1_tr - x3_tr) + (y1_tr - y3_tr) * (y1_tr - y3_tr)));
  p = (a + b + c) / 2;
	exp = sqrt(p * (p - a) * (p - b) * (p - c));
    res = triangle_area(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    ASSERT_EQUAL(exp, res);
}
