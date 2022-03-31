#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class Point_2D {
public: 
	int x, y;
	Point_2D(int x, int y);
};

class Z {
public:
	int z;
	Z(int z);
};

class H {
public :
	double h;
	H(double h);
};

class Point3D : public Point_2D, Z{
public :
	Point3D(int x, int y, int z);
	void Coordinates3D();
};

class Point_3Dh : public Point_2D, Z, H {
private :
	int flag;
public :
	Point_3Dh(int x, int y, int z, double h);
	void RealCoordinates();
};
#endif