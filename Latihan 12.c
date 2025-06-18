#include <stdio.h>
int main ()
{
	float jumlah=0.0, biaya, Rata;
	int I, bulan;
	printf("Berapa bulan: "); scanf("%d", &bulan);
	
	for(I=1;I<=bulan;I++)
	{
		printf("Biaya pada bulan ke: %d:Rp",I);
		scanf("%f", &biaya);
		jumlah=jumlah+biaya;
	}
	Rata=jumlah/bulan;
	printf("Jumlah Biaya Pulsa dalam %d=Rp.%f", bulan, jumlah);
	printf("Rata-Rata biaya dalam %d=Rp.%f", bulan, Rata);
}