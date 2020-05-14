#include <stdio.h>

main (){
	int nim1 [3][2]; 
	int i, j, x, y;
	printf ("Program Transpose \n");
	printf("NIM 1 : F1B019055\n");
	printf("NIM 1 : F1B019037\n");
	printf ("Masukkan jumlah baris = ");
	scanf ("%i", &x);
	printf ("Masukkan jumlah kolom = ");
	scanf ("%i", &y);
	
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf ("Masukkan nilai matriks %d, %d = ", i, j);
			scanf ("%d", &nim1[i][j]);
		}
	}
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf ("%d ",nim1[i][j]);
		}
		printf ("\n");
	}
	printf ("Hasil transpose \n");
	for (i = 0; i < y; i++){
		for (j = 0; j < x; j++){
			printf ("%d ", nim1[j][i]);
		}
	printf ("\n");
	}
}
