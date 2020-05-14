#include <iostream>
using namespace std;
int main(){
  int i, j, m, n, matriks[20][20], transpose[20][20];
  	cout<<"NIM 1 : F1B019055\n";
	cout<<"NIM 2 : F1B019037\n";
  	cout<<"Masukkan jumlah baris matriks : ";
  	cin>>m;
  	cout<<"Masukkan jumlah kolom matriks : ";
 	cin>>n;
  	cout<<"Masukkan Data matriks \n";
  	for (i=0;i<m;i++){
    	for (j=0;j<n;j++){
      		cin >>matriks[i][j];
    	}
  	}
  	for (i=0;i<m;i++){
    	for (j=0;j<n;j++){
      	transpose[j][i]= matriks[i][j];
    	}
  	}
  	cout << "Transpose : \n";
  	for (i =0;i<n;i++){
    	for (j=0;j<m;j++){
      	cout<<transpose[j][i] << "\t";
    	}
    	cout<<endl;
  	}
}
