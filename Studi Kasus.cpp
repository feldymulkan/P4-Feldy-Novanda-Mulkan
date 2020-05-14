#include <iostream>
#include <iomanip>
using namespace std;
void mahasiswa()
{
	int i;
	string bio1[100]={"NIM : F1B019055","Nama : Feldy Novanda Mulkan","Tanggal Lahir : 20-11-2000","Tempat Lahir : Mataram", "Provinsi Lahir : Nusa Tenggara Barat", "Golongan Darah : AB", "Agama : Islam", "Alamat : Kuripan", "email : fmulkhan@gmail.com", "No HP : 087794176615 "};
	string bio2ayah[100] = {"NIK : 5201151902710003", "Nama Ayah : Awaludin Alqatiri", "Tanggal Lahir : 1971-02-19"};
	string bio2ibu[100] = {"NIK : 5201155909720001", "Nama Ibu : Rohni", "Tanggal Lahir : 1972-12-31"};
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|\t\t\t FELDY NOVANDA MULKAN\t\t\t\t|\n";
	cout<<"|\t\t\t Biodata\t\t\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t|\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"----------\n";
	cout<<"| Pribadi |\n";
	cout<<"----------\n";
	for (i=1;i<=12;i++)
	{cout<<bio1[i]<<"\n";}
	cout<<"------------\n";
	cout<<"| Orang Tua |\n";
	cout<<"------------\n";
	cout<<"- Ayah \n";
	for (i=1;i<=3;i++)
	{
		cout<<bio2ayah[i]<<"\n";
	}
	cout<<"- Ibu \n";
	for (i=1;i<=3;i++)
	{
		cout<<bio2ibu[i]<<"\n";
	}
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"-------------------------------------------------------------------------\n";
}
void nilai()
{
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik", "Rangkaian Logika", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia"};
 	int sks[10]={2,3,2,3,2,1,2,3,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1215","ES1216","ES1217"};
	int uts[10]={100,90,87,85,79,97,80,86,84,82};	
	int uas[10]={100,94,89,78,96,77,89,90,87};
	cout<<"----------------\n";
	cout<<"|Nilai F1B019055|\n";
 	cout<<"----------------\n";
	cout<<"======================================================\n";
 	cout<<"|     Mata Kuliah      |Kode MK    | SKS | UTS | UAS |\n";
 	cout<<"=====================================================\n";
	for (int i=0;i<=8;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(22)<<mk[i]<<"|"<<setw(11)<<kode[i]<<"|"<<setw(5)<<sks[i]<<"|"<<setw(5)<<uts[i]<<"|"<<setw(5)<<uas[i]<<"|\n";}
  	cout<<"\n=======================================================\n";}
void krs()
{
	int i;
	string k[100]={"Tahun Akademik : 2020","Kurikulum : 2014","Tahun Masuk : 2019 ( Ganjil )","Semester : 2","SKS Lulus : 19","IP sebelumnya : 3.55","IPK : 3.55","SKS yang boleh diambil : 24"};
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik", "Rangkaian Logika", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia"};
 	int sks[10]={2,3,2,3,2,1,2,3,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1215","ES1216","ES1217"};
	char nilai[10]={'T','T','T','T','T','T','T','T','T'};
	cout<<"-------------------------------------------------------\n";
	cout<<"|       Halaman KRS  | SIA UNRAM  |  Feldy   |Elektro  |\n";
	cout<<"-------------------------------------------------------\n";
	for (i=1;i<=10;i++)
	{cout<<k[i]<<"\n";}
	///////////////////////
 	cout<<"======================================================\n";
 	cout<<"|    Kode MK     |      Mata Kuliah     | SKS | Nilai|\n";
 	cout<<"=====================================================\n";
 	for(int i=0;i<8;i++){
	for (i=0;i<=8;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(16)<<kode[i]<<"| "<<setw(21)<<mk[i]<<"| "<<setw(4)<<sks[i]<<"| "<<setw(5)<<nilai[i]<<"|\n";}}
  	cout<<"\n=======================================================\n";
  	//////Pengajuan Krs
  	cout<<"\n\n";
  	int smstr;
	int sks2[1000],n;
 	char matkul[1000][30];
 	cout<<"-----------------\n";
 	cout<<"|Pengajuan KRS : |\n";
 	cout<<"-----------------\n";
	 cout<<"Masukan banyak mata kuliah yang akan di ambil : ";
 	cin>>n;
 	cout<<endl;
 	cout<<"KRS untuk semester (1-8): ";cin>>smstr;
 	for (int i=0;i<n;i++){
  		cout<<"Masukan nama matakuliah ke-"<<i+1<<" : ";
  		scanf(" %[^\n]s",matkul[i]);
  		cout<<"Masukan SKS mata kuliah\t : ";
  		cin>>sks[i];}
 	cout<<"Kartu Rencana Studi Mahasiswa :\n";
 	cout<<"semester "<<smstr<<"\n";
	cout<<"======================================\n";
 	cout<<"|      Mata Kuliah     \t| SKS | Nilai|\n";
 	cout<<"======================================\n";
 		for(int i=0;i<n;i++){
  			cout<<"| "<<setiosflags(ios::left)<<setw(22)<<matkul[i]<<"|";
  			cout<<" "<<setiosflags(ios::left)<<setw(4)<<sks[i]<<"|";
  			cout<<" "<<setiosflags(ios::left)<<setw(5)<<" - "<<"|\n";
			cout<<"======================================\n";}
		cout<<"\n\t\t\t\t Menunggu persetujuan dosen Pembimbing"<<endl;
}
void matkul()
{	
	cout<<"---------------------------------------\n";
	cout<<"|     Mata Kuliah        |    Feldy   |\n";
	cout<<"---------------------------------------\n"; 
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik", "Rangkaian Logika", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia", "AGAMA KRISTEN PROTESTAN / 2014","BAHAN LISTRIK / 2014"};
 	int sks[100]={2,3,2,3,2,1,2,3,2,2,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1215","ES1216","ES1217", "ES1150","ES1105"};
	int smstr[20]={2,2,2,2,2,2,2,2,2,1,1};

 	cout<<"=======================================================================================\n";
 	cout<<"|    Kode MK     |      Mata Kuliah                  | Kelas | SKS | Sifat | Semester |\n";
 	cout<<"=======================================================================================\n";
 	for(int i=0;i<10;i++){
	for (i=0;i<=10;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(16)<<kode[i]<<"| "<<setw(34)<<mk[i]<<"|       "<<setw(3)<<"| "<<setw(3)<<sks[i]<<"|       "<<setw(3)<<"| "<<setw(8)<<smstr[i]<<"|\n";}}
  	cout<<"\n=======================================================================================\n";
}
main()
{
	int pilih;
	char choose, choosed;
	string usser, pass;
	char pilihan;
	ulang :
	system("cls");
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|\t\t\t--------------------------\t\t\t|\n";
	cout<<"|\t\t\t|    Selamat Datang Di    |\t\t\t|\n";
	cout<<"|\t\t\t| Halaman Login SIA UNRAM |\t\t\t|\n";
	cout<<"|\t\t\t--------------------------\t\t\t|\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t Masukkan Ussername : ";cin>>usser;cout<<"\n";
	cout<<"\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (usser == "feldy_novanda_mulkan" && pass == "F1B019055")
			{
				cout<<"\t\t\t Selamat login anda berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihan;cout<<"\t\t\n";
					if (pilihan=='y' || pilihan=='Y')
					{system("cls");
					goto ulang;}
					if (pilihan=='t' || pilihan=='T')
					{goto selesai;}
			}
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	menu : 
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|\t\t\t\t\t\t\t\t\t|\n";
	cout<<"|\t\t\t SELAMAT DATANG DI SIA, FELDY\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t|\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"1. Mahasiswa\n";
	cout<<"2. Nilai\n";
	cout<<"3. KRS\n";
	cout<<"4. Mata Kuliah\n";
	cout<<"0. Logout\n";
	cout<<"Pilih Menu [0-4]: ";cin>>pilih;
	switch(pilih)
	{
		case (1) : 
		{
			system("cls");
			mahasiswa();
				cout<<"kembali [y/t]: ";cin>>choose;
				if (choose=='y' || choose=='Y')
					{system("cls"); goto menu;}
				else{goto selesai;}
		}
		break;
		case (2) :
		{
			system("cls");
			nilai();
			cout<<"kembali : [y/t]";cin>>choose;
			if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
			else{goto selesai;}
		}
		break;
		case (3) : 
		{
			system("cls");
			krs();
				cout<<"kembali [y/t]: ";cin>>choose;
				if (choose=='y' || choose=='Y')
					{system("cls"); goto menu;}
				else{goto selesai;}
		}
		break;
		case (4) :
		{
			system("cls");
			matkul();
				cout<<"kembali [y/t]: ";cin>>choose;
				if (choose=='y' || choose=='Y')
					{system("cls"); goto menu;}
				else{goto selesai;}
		}
		break;
		case (0) :
			{
				cout<<"Logout\n";
				system("cls");
				goto ulang;
			}
		break;
		default : 
		{
			cout<<"Tidak ada pilihan yang di pilih\n";
				cout<<"Pilih kembali [y/t]: ";cin>>choosed;
				if (choosed == 'y' || choosed == 'Y')
				{system("cls"); goto menu;}
				if (choosed == 't' || choosed == 'T')
				{goto selesai;}
		}
	}
	selesai :
			cout<<"\t\t\t=======================\n\n";
			cout<<"\t\t\t|   Program Selesai   |\n\n";
			cout<<"\t\t\t=======================";
		cout<<endl;
}
