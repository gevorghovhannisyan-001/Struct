#include <iostream>

class Dog {
	public :
		std::string m_name;
};

struct Cat {
	std::string m_name;
};

struct Point {
	double x;
	double y;
};

void printPoint(const Point& point) {
	std::cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << std::endl;
}

int main()
{
	Dog dog1;
	Cat cat1;

	dog1.m_name = "Fluffy";
	cat1.m_name = "Whiskers";
	std::cout << dog1.m_name << std::endl;
	std::cout << cat1.m_name << std::endl;

	Point point1;
	point1.x = 3.5;
	point1.y = 57.89;
	printPoint(point1);

	point1.x = 10.0;
	point1.y = 20.0;
	printPoint(point1);

    return 0;
}