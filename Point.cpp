#include "Point.h"

Point_2D::Point_2D(int x, int y) {
	this->x = x;
	this->y = y;
}

Z::Z (int z) {
	this->z = z;
}

H::H(double h) {
    this->h = h;
}

Point3D::Point3D(int x, int y, int z) : Point_2D(x, y), Z(z) {}

void Point3D::Coordinates3D() {
	cout << "���������� ������� : (" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
}

Point_3Dh::Point_3Dh(int x, int y, int z, double h) : Point_2D(x, y), Z(z), H(h) {
	flag = 0;
	if (this->h == 0) {
		flag = 1;
	}
}

void Point_3Dh::RealCoordinates() {
	if (flag == 0) {
	    cout << "�������� ���������� ������� : " << "(" << this->x / this->h << ", " << this->y / this->h << ", " << this->z / this->h << ")" << endl;
    }
	else {
		cout << "������, 4 ���������� ������� ����� 0." << endl;
	}
}