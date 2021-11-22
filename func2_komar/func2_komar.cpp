#include <iostream>
using namespace std;

int FarlToYard(double);


int main()
{
	double dist, finDist;

	setlocale(LC_ALL, "Russian");

	cout << "Введите расстояние в фарлонах: ";
	cin >> dist;
	finDist = FarlToYard(dist);
	cout << "Расстояние в ярдах: " << finDist << endl;
	return 0;
	
}

int FarlToYard(double sts) 
{
	return 220 * sts;
}
