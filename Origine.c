#include <stdio.h>
#define CRT 10
int main() {
	int vettore[CRT];
	int sompospar = 0;
	int somposdis = 0;
	int sompari = 0;
	int somdis = 0;
	int media = 0;
	int somgen = 0;

	//somma pari e dispari
	for (int p = 0; p < CRT; p++) {
		vettore[p] = 0;
	}
	for (int i = 0; i < CRT; i++) {

		printf("\nInserisci un valore per il vettore di posizione %d: ", i);
		scanf("%d", &vettore[i]);
		somgen = somgen + vettore[i];
		if (vettore[i] % 2 == 0) {
			sompari = sompari + vettore[i];
		}
		else {
			somdis = somdis + vettore[i];
		}
	}
	for (int z = 0; z < CRT; z = z + 2) {
		sompospar = sompospar + vettore[z];
		if (vettore[z] == 9) {
			break;
		}
	}
	for (int y = 1; y < CRT; y = y + 2) {
		somposdis = somposdis + vettore[y];
	}
	media = somgen / 10;
	system("cls");
	printf("INFO:\n");
	printf("\nLa somma delle posizioni pari e':%d\nLa somma delle posizioni dispari e':%d", sompospar, somposdis);
	printf("\n\nLa somma dei numeri pari e': %d\nLa somma dei numeri dispari e': %d\n", sompari, somdis);
	printf("\nLa media di tutti i numeri e': %d\n\n", media);
	return 0;
	system("pause");
}