#include <stdio.h>

int main (){
	int nim1 [2][2]; 
	int nim2 [2][2]; 
	int hasil [2][2];
	int i, j;
	
	printf("NIM 1 : F1B019055\n");
	printf("NIM 1 : F1B019037\n");
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf ("Masukkan data matriks A %d, %d = ", i, j);
			scanf ("%d", &nim1[i][j]);
		}
	}
	printf ("\n");

	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf ("Masukkan data matriks B %d, %d = ", i, j);
			scanf ("%d", &nim2[i][j]);
		}
	}
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			hasil [i][j]=nim1[i][0]*nim2[0][j]+nim1[i][1]*nim2[1][j];
			printf ("%d ", hasil[i][j]);
		}
		printf ("\n");
		
	}
}

