#include <Windows.h>
#include "main.h"
//#include "../../utils/utils/utils.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int p;

	do {
		cout << "Введите номер задания (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case 1: {
				int x, y;
				cout << "Enter x, y: ";
				cin >> x >> y;

				cout << "Akkerman: " << Akkerman(x, y) << endl;
			} break;

			case 2: {
				const int size = 100;
				char str[size];

				cout << "02. Количество цифр." << endl;
				cout << "Введите строку: ";
				cin.ignore();
				cin.getline(str, size);

				cout << "Количество цифр в строке: " << numberCounter(str, strlen(str)) << endl;
			} break;

			case 3: {
				/*	unsigned size = 20;
					double* array = createArray<double>(size);

					for (unsigned i = 0; i < size; i++) {
						array[i] = getRandomFloat(10, 99);
					}
					printArray(array, size);

					cout << "" << maxR(array, 0, size) << endl;*/
			} break;

			case -1: cout << "Выход из программы.\n"; break;
			default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	system("pause");
	return 0;
}