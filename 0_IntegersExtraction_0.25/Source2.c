#include<stdio.h>
#include<stdlib.h>

int main() {
	int counter = 0;
	int* mass = malloc(sizeof(int));
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

	}


}
