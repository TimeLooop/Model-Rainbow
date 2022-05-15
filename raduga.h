#pragma once
#include <ctime>
#include<cmath>


class vector
{
public:
	long double x, y;
	vector(long double x, long double y);
};

class point
{
public:
	long double x, y;
	point(long double x, long double y);
};




class raduga
{
public:
	long double b, R, L;
	long double px1, py1, px2, py2, px3, py3, px4, py4;
	raduga(long double b, long double R, long double L);
	void beam(long double& px1, long double& py1, long double& px2, long double& py2,
		long double& px3, long double& py3, long double& px4, long double& py4);
};

