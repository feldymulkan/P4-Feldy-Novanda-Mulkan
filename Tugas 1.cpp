#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
struct biodata
{
	char nama[100];
	char nim[50];
	char jurusan[50];
};
void tampilbio(biodata *arannya)
{
	cout<<arannya->nama;
}
void garis()
{
    int u=1;
    char ascii;
    while(u<20)
    {cout<<(char)196;
    u++;}
}
void login()
{
	string user, pass;
	char pilih, reapeat;
	ulang : 
	cout<<"\n";
	cout<<"\t\t\t\tSelamat Datang Di Halaman Login Kuis"<<endl;
	cout<<setw(33);
	for(int b=0;b<=35;b++)
	{cout<<(char)196;}
	cout<<"\n\t\t\t      _________________________________________";
	cout<<"\n\t\t\t     | Kuis Covid-19 Algoritma dan Pemrograman |"<<endl;
		cout<<setw(31);
	for(int b=0;b<=40;b++)
	{cout<<(char)196;}
	cout<<"\n\n\t\t\t Masukkan Ussername : ";cin>>user;
	cout<<"\n\n\t\t\t Masukkan Password  : ";cin>>pass;
	if (user == "feldy" && pass== "F1B019055")
	{
		system("cls");
	}
	else{
	cout<<"\t\t Username dan Password anda salah ! \n";
	cout<<"\t\t Input kembali [y/t]: ";cin>>reapeat;
	if(reapeat=='y'||reapeat=='Y'){
	system("cls");
	goto ulang;}
	}
	
}
void rule()
{
	string atur[10]={"Jujur", "Tidak curang", "Adil", "Tidak boleh menggunakan HP", "Diam selama ujian", "Tidak menoleh kiri kanan", "Tentram"};
	cout<<setw(26);
	for (int i=0; i<20;i++){
	cout<<(char)196;}
	cout<<"\n\t\t\t Aturan Kuis Covid-19 \n";
	cout<<setw(26);
	for (int i=0; i<20;i++){
	cout<<(char)196;}
	cout<<"\n";
	for (int i=0;i<=5;i++)
	{
		cout<<setw(26)<<i+1<<". "<<atur[i]<<"\n";
	}
}

int main()
{	
	logout : 
	login();
	float nilai;
	char jawab, choose,choosed,input;
	int pilih;
	char isi;
	int benar = 0;
	int salah = 0;
	menu :
	system("cls");
	cout<<"\n";
	cout<<"\t\t\t\t ==================================\n";
	cout<<"\t\t\t\t|  Selamat Datang Di Halaman Menu  |"<<endl;
	cout<<"\t\t\t\t ==================================\n";
	cout<<setw(33);
	for(int b=0;b<=35;b++)
	{cout<<(char)196;}
	//////////////
	cout<<"\n";
	cout<<setw(26)<<(char)179<<setw(17)<<"Menu Pilihan"<<endl;
    cout<<setw(26)<<(char)195<<(char)196<<(char)196<<(char)196<<(char)196<<(char)194;
    for(int b=0; b<=20; b++)
    {cout<<(char)196; }
    cout<<(char)180<<endl;
    cout<<setw(26)<<(char)179<<" 1. "<<(char)179<<" Biodata "<<setw(13)<<(char)179<<endl;
    cout<<setw(26)<<(char)195<<(char)196<<(char)196<<(char)196<<(char)196<<(char)197;
    for(int b=0; b<=20; b++)
    {cout<<(char)196; }
    cout<<(char)180<<endl;
    cout<<setw(26)<<(char)179<<" 2. "<<(char)179<<" Mulai Kuis"<<setw(11)<<(char)179<<endl;
    cout<<setw(26)<<(char)195<<(char)196<<(char)196<<(char)196<<(char)196<<(char)197;
    for(int b=0; b<=20; b++)
    {cout<<(char)196;}
    cout<<(char)180<<endl;
    cout<<setw(26)<<(char)179<<" 3. "<<(char)179<<" Hasil Kuis"<<setw(11)<<(char)179<<endl;
    cout<<setw(26)<<(char)195<<(char)196<<(char)196<<(char)196<<(char)196<<(char)197;
    for(int b=0; b<=20; b++)
    {cout<<(char)196;}
    cout<<(char)180<<endl;
    cout<<setw(26)<<(char)179<<" 4. "<<(char)179<<" Keluar " " "<<setw(13)<<(char)179<<endl;
	
	cout<<"\n\t\t Pilih menu [1-4]: ";cin>>pilih;
	switch(pilih)
	{

		case 1 :
		{
		system("cls");
		cout<<"\t\t\t\t\t     Biodata dan Aturan Kuis Covid-19 \n"<<setw(30);
		for (int i=0;i<60;i++)
		{
		cout<<(char)196;
		}
		biodata* arannya=new biodata;
		strcpy(arannya->nama,"Feldy Novanda Mulkan");
		strcpy(arannya->nim,"F1B019055");
		strcpy(arannya->jurusan,"Teknik Elektro");
		cout<<"\n\t\t\tNama 	 : "<<arannya->nama;
		cout<<"\n\t\t\tNIM      : "<<arannya->nim;
		cout<<"\n\t\t\tJurusan  : "<<arannya->jurusan;
		cout<<"\n\n";
		rule();
		
			cout<<"\n\n\t\t\tKembali ke menu [y/t]: ";cin>>isi;
			if (isi=='y'||'Y')
			{goto menu;
			system ("cls");}
			else{goto selesai;}
		}
		break;
		case 2 : 
		{
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 1 |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Penyebaran virus corona pertama kali terjadi di negara ? \n";
			string no1[10]={"A. CINA", "B. Indonesia", "C. Itali", "D. Amerika"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no1[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='A'||jawab=='a')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 2. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Nama kota pusat penyebaran virus corona pertama kali ? \n";
			string no2[10]={"A. Mataram", "B. Jakarta", "C. Wuhan", "D. New York"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no2[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='C'||jawab=='c')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 3. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Apa nama pakaian yang digunakan perawat untuk menangani pasien yang terjangkit virus corona ? \n";
			string no3[10]={"A. Jubah", "B. Swiming suit", "C. APD", "D. Mukenah"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no3[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='C'||jawab=='c')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 4. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Berdasarkan hasil penelitian dari National Institute of Allergy and Infectious \n";
			cout<<"\t\t Diseases, ukuran COVID-19 adalah ? \n";
			string no4[10]={"A. 120-160 nanometer", "B. 140-180 nanometer ", "C. 160-200 nanometer", "D. 200-300 nanometer"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no4[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='A'||jawab=='a')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 5. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Tes untuk mengetahui pasien telah terjangkit dinamakan dengan tes ? \n";
			string no5[10]={"A. FISIK", "B. SWAB ", "C. Kehamilan", "D. Tes kebal"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no5[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='B'||jawab=='b')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 6. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Gejala awal pasien penderita yang terjangkit virus COVID-19 ? \n";
			string no6[10]={"A. Nyeri pada dada", "B. Kehilangan Kesadaran ", "C. Pusing", "D. Batuk disertai pneumonia"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no6[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='D'||jawab=='d')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 7. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Berapa lama masa inkubasi dari virus corona ? \n";
			string no7[10]={"A. 14 Hari", "B. 7 Hari ", "C. 30 Hari", "D. 1 Hari"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no7[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='A'||jawab=='a')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 8. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Tindakan pertama yang harus dilakukan masyarakat untuk menghindari COVID-19 adalah ? \n";
			string no8[10]={"A. Tidur", "B. Tidak menggunakan masker ", "C. Selalu berkumpul dengan orang banyak", "D. Social Distancing dan Menggunakan masker jika hendak keluar"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no8[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='D'||jawab=='d')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 9. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Nama cairan yang digunakan masyarakat untuk membersihkan tangan(mengandung alkohol) ? \n";
			string no9[10]={"A. Sampo", "B. Sabun cair ", "C. Hand Sanitizer", "D. Minyak Kayu putih"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no9[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='C'||jawab=='c')
			{benar+=5;}
			else {benar-=1;}
			system("cls");
			cout<<" ______\n";
			cout<<"|NO. 10. |\n";
			cout<<" ______\n\n";
			cout<<"\t\t Kota yang paling banyak terjangkit COVID-19 di Indonesia adalah ? \n";
			string no10[10]={"A. Denpasar", "B. Makasar ", "C. Bandung", "D. Jakarta"};
			for(int i=0;i<=3;i++){cout<<"\t\t "<<no10[i]<<"\n";}
			cout<<"\t\t Jawab : ";cin>>jawab;
			if (jawab=='D'||jawab=='D')
			{benar+=5;}
			else {benar-=1;}
			diam : 
			cout<<"\n\n\t\t\t Kuis anda telah selesai \n";
			cout<<"\n\n\t\t\t Kembali ke menu [y/t] :  ";cin>>choose;
			if(choose=='Y'||choose=='y')
			{
				goto menu;
			}
			else{goto diam;
			}
		} 
		break;
		case 3 :
		{
			nilai = benar *2;
			cout<<"\t\t\t Hasil Kuis \n\n";
			cout<<"\t\t Nilai anda adalah : "<<nilai;
			if (nilai>=80)
			{
				cout<<"\t\t NIlai anda adalah A ";
			}
			else if (nilai<80&&nilai>=75)
			{
				cout<<"\t\t NIlai anda adalah B ";
			}else if (nilai<75&&nilai>=65)
			{
				cout<<"\t\t NIlai anda adalah C ";
			}else if (nilai<65&&nilai>=50)
			{
				cout<<"\t\t NIlai anda adalah D ";
			}
			else
			{
				cout<<"\t\t NIlai anda adalah E ";
			}
			cout<<"\n\n\t\t\t Kembali ke menu [y/t] :  ";cin>>choosed;
			if(choosed=='Y'||choosed=='y')
			{
				goto menu;
			}
			else
			{
				goto selesai;
			}
		}
		case 4 :
		{
			system("cls");
			goto logout;
		}
		break;
		default :
		{
			cout<<"\t\t Tidak ada yang anda inputkan  \n";
			cout<<"\t\t Input kembali [y/t]: ";cin>>input;
				if(choosed=='Y'||choosed=='y')
			{
				goto menu;
			}
			else
			{
				goto selesai;
			}
		}
	}
	selesai :
		cout<<endl;
	return 0;
}
