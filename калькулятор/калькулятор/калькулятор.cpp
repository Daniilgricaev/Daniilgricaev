#include<iostream>

int main() {
	setlocale(LC_ALL, "RU");
	float num1, num2,summ;
	std::cout << "Введите первое значение :", std::cin >> num1;

	std::cout << "Введите второе значение :", std::cin >> num2;

	char math;
	std::cout << "Введите символ  :", std::cin >> math;
	if (math == '+')
		summ = num1 + num2;

	else if (math == '-')
		summ = num1 - num2;

	else if (math == '*')
		summ = num1 * num2;

	else if (math == '/')
		summ = num1 / num2;


	std::cout << "Ответ :" << summ;

	return 0;
}