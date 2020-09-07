﻿// Задача 2 Площадь прямоугольника.cpp

/* Написать программу, которая в входе получит длину двух сторон прямоугольника и будет производить эту прямоугольную поверхность. */

/*
	Примеры
	====== Тест #1 =======
	Входные данные
	1 1

	Результат работы
	1

	====== Тест #2 =======
	Входные данные
	2 4

	Результат работы
	8

	====== Тест #3 =======
	Входные данные
	10 1010

	Результат работы
	10100

	====== Тест #4 =======
	Входные данные
	123 123

	Результат работы
	15129

	====== Тест #5 =======
	Входные данные
	15987 7532

	Результат работы
	120414084

	====== Тест #6 =======
	Входные данные
	2147483647 2

	Результат работы
	4294967294

	====== Тест #7 =======
	Входные данные
	680011776 4

	Результат работы
	2720047104
*/

#include <iostream>

int main()
{
	long long length, width;
	std::cin >> length >> width;
	std::cout << length * width;
}
