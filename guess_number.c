#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

/*
 	PROGRAM TEBAK ANGKA 
*/

int main(void) {

	int condition = true;
	int input_number;



	while(condition) {
		printf("\nPROGRAM TEBAK ANGKA DARI 1 - 10\n");
		printf("===============================\n");

		srand(time(NULL));
		int random_number = rand();
		random_number /= 100000000;

		random_number /= 2;

		printf("\nEnter Number: ");
		scanf("%d", &input_number);
		
		printf("Mesin Memasukan Angka: %d\n", random_number);

		if (input_number == random_number) {
			printf("Tebakan anda BENAR\n");
			condition = false;
		} else {
			printf("Tebakan anda SALAH\n");
		}

	}



	return 0;
}
