// sumallelements.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>



struct Person {
	char name[50];
	int age;
};

class Circle {
	float radius;

public:
	void radiusSet(float rad) {
		radius = rad;
	}

	void square() {
		float sqr = radius * radius * 3.14;
		std::cout << "Площадь = " << sqr << std::endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	//1 сумма чисел массива
	int numbers[10];
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		numbers[i] = rand() % 100;
		std::cout << i + 1 << " число массива = " << numbers[i] << std::endl;
		sum += numbers[i];
	}
	std::cout << "Сумма чисел = " << sum << std::endl;

	//2 сумма каждой строки
	/*int dvmass[3][3];
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			dvmass[i][j] = rand() % 100;
			std::cout << "Число " << i + 1 << " строки " << j + 1 << " столбца = " << dvmass[i][j] << std::endl;
			sum += dvmass[i][j];
		}
		std::cout << "Сумма " << i + 1 << " строки = " << sum <<std::endl;

	}*/

	//3 создает объект структуры "Person" и выводит его поля на экран.
	
	/*Person people;
	std::cout << "Введите имя" << std::endl;
	std::cin >> people.name;
	std::cout << "Введите возраст" << std::endl;
	std::cin >> people.age;
	std::cout << "Имя - " << people.name << std::endl;
	std::cout << "Возраст - " << people.age << std::endl;*/

	//4 Вычисление площади класса "Cicle"

	/*Circle srl;
	float radius;
	std::cout << "Введите радиус" << std::endl;
	std::cin >> radius;
	srl.radiusSet(radius);
	srl.square();*/







}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
