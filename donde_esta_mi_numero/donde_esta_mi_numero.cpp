#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main() {

	const int c_num_ale = 20;
	int num_ale[c_num_ale], num_user = 0, flag = 0, flag2[c_num_ale], i = 0, t = 0, j = 0;

	srand(time(NULL)); //Generación de números aleatorios

	for (i = 0; i < c_num_ale; i++) {
		num_ale[i] = rand() % c_num_ale + 1;
	}

	cout << "Hola señor usuario ¿Que numero busca?: ";
	cin >> num_user;


	for (i = 0; i < c_num_ale; i++) {
		if (num_user == num_ale[i]) {
			flag = 1;
			flag2[t] = i;
			t++;
		}
	}

	if (flag == 1) {
		cout << "Excelente, encontramos tu numero en la posicion ";
		for (i = 0; i < c_num_ale; i++) {
			if (flag2[i] < 0 || flag2[i] > c_num_ale) {
				break;
			}
			cout << "\n" << flag2[i] + 1;
		}
	}
	else {
		cout << "Lo sentimos señor usuario, su numero no se encontro";
	}

	cout << "\nLa lista fue: ";
	for (i = 0; i < c_num_ale; i++) {
		cout << "\n" << num_ale[i];
	}

}