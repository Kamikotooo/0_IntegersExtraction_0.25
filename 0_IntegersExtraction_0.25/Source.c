#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
	char mass[100] = "";
	int array[100] = { 0 };
	int k = 0;
	setlocale(LC_ALL, "Russian");
	printf_s("Введите строку:");
	//gets(mass);
	int work = 1;
	char sym;
	while (work) {
		sym = getche();
		if (sym == 13) {
			printf("\n");
		}
		if (sym == 27) {
			work = 0;
		}
		mass[k] = sym;
		k++;


	}
	k = 0;
	printf("\n");
	int j = 0;

	for (unsigned int i = 0; i < strlen(mass); i++) {
		if (mass[i] >= '0' && mass[i] <= '9') {
			array[j] = array[j] * 10 + mass[i] - '0';
		}
		else {
			j++;
		}
	}


	int count = 0;
	for (int i = 0; i < 100; i++) {//длина цифр
		if (array[i] > 0) {
			count++;
		}
	}
	int* numbers = (int*)malloc(count * sizeof(int));
	int z = 0;
	for (int i = 0; i < 100; i++) {
		if (array[i] != 0) {
			numbers[z] = array[i];
			z++;
		}
	}
	for (int i = 0; i < count; i++) {
		numbers[i] *= numbers[i];
		printf("%d \n ", numbers[i]);
	}

	return 0;
}
