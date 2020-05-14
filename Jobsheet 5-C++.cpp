#include <iostream>

using namespace std;

main (){
	cout<<"NIM 1 : F1B019055\n";
	cout<<"NIM 2 : F1B019037\n";
	int nim1[2][2];
	int nim2[2][2];
	int jml [2][2];
	int x, y;
		for (x = 0; x < 2; x++){
			for (y = 0; y < 2; y++){
				cout << "Masukkan matriks A " << x << "," << y << " = ";
				cin >> nim1[x][y];
			}
	}
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			cout << "Masukkan matriks B " << x << "," << y << " = ";
			cin >> nim2[x][y];
		}
	}
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			jml [x][y] = nim1[x][0]*nim2[0][y]+nim1[x][1]*nim2[1][y];
			cout << jml [x][y] <<" ";
	}
	cout << endl;
	}
}
