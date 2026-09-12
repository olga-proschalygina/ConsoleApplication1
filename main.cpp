// Лабораторная работа № 1. Вариант 68.
// Выполнил: Прощалыгина О. А., группа ПИ-53.
#include <iostream>
#include <locale.h>
using namespace std;
// ===== Расчётные функции варианта =====
// Из литров в галлоны
double lToGal(double l) {
	return l / 3.78541;
}
// Из галлонов в литры
double galToL(double gal) {
	return gal * 3.78541;
}
// ===== Главная функция: меню =====
int main() {
	setlocale(LC_ALL, "Russian");
	int choice;
	double l, gal;
	do {
		cout << "\n=== Вариант 68: Конвертеры величин ===\n";
		cout << "1. Из литров в галлоны\n";
		cout << "2. Из галлонов в литры\n";		
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите количество литров: ";
			cin >> l;
			cout << " " << lToGal( l) << "\n";
			break;
		case 2:
			cout << "Введите количество галлонов: ";
			cin >> gal;
			cout << " " << galToL( gal) << "\n";
			break;		
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}