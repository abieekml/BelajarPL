#include <stdio.h>
int main()
{
	float jumlah=0.0, biaya, rata;
	int I=1, bulan;
	printf("Berapa bulan= "); scanf("%i", &bulan);
	while(I<=bulan)
	{
		printf("Biaya Pulsa bulan ke- %d:Rp", I);
		scanf("%f", &biaya);
		jumlah= jumlah + biaya;
	}
	rata=jumlah/bulan;
	printf("Jumlah Biaya Pulsa dalam %d=Rp.%f", bulan, jumlah);
	printf("Rata-Rata biaya dalam %d=Rp.%f", bulan, rata);
}