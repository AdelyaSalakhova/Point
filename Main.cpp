#include "Point.h"

int main() {
	setlocale(LC_ALL, "ru");
	
	Point_3Dh point(3, 3, 3, 3);
	cout << "���������� ���������� ����� : (3, 3, 3, 3)" << endl;
	point.RealCoordinates();

	system("pause");
	system("cls");

	Point_3Dh point1(3, 3, 3, 0);
	cout << "���������� ���������� ����� : (3, 3, 3, 0)"<< endl;
	point1.RealCoordinates();

	system("pause");
	system("cls");

	Point_3Dh point2(7, 4, 3, 2);
	cout << "���������� ���������� ����� : (7, 4, 3, 2)"<< endl;
	point2.RealCoordinates();

	system("pause");
}