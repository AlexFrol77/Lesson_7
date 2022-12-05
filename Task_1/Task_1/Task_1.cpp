#include<iostream>

#define MODE 1

#ifndef MODE
#error NOT MODE
#endif

#if MODE == 1
	void add() {
		int a,
			b;
		std::cout << "Работаю в боевом режиме" << std::endl;
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << a + b << std::endl;
}
#endif

int main() {
	
	setlocale(LC_ALL, "ru");

#if MODE == 1 
	add();
#elif MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

	return 0;
}