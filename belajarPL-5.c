//abi
#include<stdio.h>
int main()
{
    float data, jumlah, rerata;
	int i, bulan = 6;
	jumlah = 0.0;
	for ( i = 1; i <= bulan; i++)
	{
		printf("Pembelian Data Bulan ke-%d : ",i);
		scanf("%f", &data);
		jumlah = jumlah + data;
	}
	
	rerata = jumlah / bulan;
	printf("\Rerata Pembelian Data dalam 1 semester adalah = Rp %8.2f\n", rerata);
	return(0);
}
