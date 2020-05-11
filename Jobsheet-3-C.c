#include<stdio.h>

main()
{
int matrix1[2][2],
matrix2[2][2],i,j;
printf("______________________________\n");
printf("|Program Penjumlahan Mattriks |\n");
printf("______________________________\n");

printf("NIM 1 : F1B019055 \n");
printf("NIM 2 : F1B019037 \n");
printf("Kelompok 7 \n");
printf("Data Matriks A \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){ 
			printf("Elemen[%d][%d]: ",i,j); 
			scanf("%d",&matrix1[i][j]);
		}
		}
printf("\nMATRIX2\n");
	for(i=0;i<2;i++){ 
		for (j=0;j<2;j++){ 
			printf("Elemen[%d][%d]: ",i,j); 
			scanf("%d",&matrix2[i][j]);
		}
		}
printf("\nHasil Penjumlahan matriks\n\n");
	for(i=0;i<2;i++){
		for( j=0;j<2;j++)
			printf("%d\t",matrix1[i][j]+matrix2[i][j]); 
			printf("\n");
	}
}
