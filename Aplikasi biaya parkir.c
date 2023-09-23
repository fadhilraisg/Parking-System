#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
	
	printf("===========\nBiaya Parkir\n===========\n\n");
	int JamMasuk, MenitMasuk, JamKeluar, MenitKeluar;
	//Memasukkan jam masuk dan jam keluar
	printf("Masuk\n");
	printf("Jam: ");
	scanf("%d", &JamMasuk);
	printf("Menit: ");
	scanf("%d", &MenitMasuk);
	printf("\n\nKeluar\n");
	printf("Jam: ");
	scanf("%d", &JamKeluar);
	printf("Menit: ");
	scanf("%d", &MenitKeluar);
	
	//Menghitung total waktu selama parkir
	printf("\nTotal Waktu\n");
	int TotalJam = (JamKeluar - JamMasuk);
	int TotalMenit = (MenitKeluar - MenitMasuk);
	int Jam1 = TotalJam*60;
	int Menit1 = (Jam1 + TotalMenit);
	printf("%d menit\n", Menit1);
	int JamAkhir = Menit1/60;
	int MenitAkhir = Menit1%60;
	printf("%d jam %d menit\n\n\n", JamAkhir, MenitAkhir);
	
	//Total Pembayaran
	//harga parkir 1 jam = 3500
	int BiayaParkir = JamAkhir*3500;
	if (JamAkhir>=1, MenitAkhir>=30) {
		printf("Biaya Parkir adalah %d", BiayaParkir+1500);
	} else if (JamAkhir>=1, MenitAkhir<=30) {
		printf("Biaya Parkir adalah %d", BiayaParkir);
	} else {
		printf("Biaya Parkir adalah 1500");
	}
	
	return 0;
}
