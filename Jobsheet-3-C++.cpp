#include <iostream>
using namespace std;
int main() {
  int i, j, matriksA[10][10], matriksB[10][10], MatriksC[10][10];
  
  cout<<"--------------------------------------------\n";
  cout<<"|Penjumlahan Matriks Dengan NIM 2 mahasiswa |\n";
  cout<<"--------------------------------------------\n";
  
   	cout<<"NIM 1 : F1B019055\n";
	cout<<"NIM 2 : F1B019037\n";
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      cin >> matriksA[i][j];
    }
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      cin >> matriksB[i][j];
    }
  }
  cout << "hasil penjumlahan matriks: \n";
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      MatriksC[i][j] = matriksA[i][j] + matriksB[i][j];
      cout << MatriksC[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
