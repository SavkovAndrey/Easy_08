#include <iostream>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------


// z(x, m) = x^m sin^m(xm)

float step(float a, int b)
{
	float rezult = 1;

	for (int i = 0; i < b; i++)
	{
		rezult *= a;
	}

	return rezult;
}


//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------САМА ПРОГА-------------------------------------

	float z;
			

	
	for (float x = -1.1; x <= 0.3; x += 0.2)
	{
		for (int m = 1; m <= 5; m++)
		{
		
			z = step(x, m) * step(sin(x * m), m);
			cout << "При ( X = " << x << ", M = " << m << " )   Z = " << z << endl;
		}
		cout << endl;

	}

	system("pause");

	return 0;
}
