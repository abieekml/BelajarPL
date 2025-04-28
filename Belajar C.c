//Abi Kamal
#include <stdio.h>
int main(void)
{
	char karakter1, karakter2, karakter3;
	
	printf("\n\n\nInput 3 karakter sembarang \n");
	printf("========================== \n");
	printf("\n");
	printf("Karakter pertama; ");
	scanf("%c",&karakter1);
	
	printf("Karakter kedua; ");
	scanf("%c",&karakter2);
	
	printf("Karakter ketiga; ");
	scanf("%c",&karakter3);
	
	printf("\n");
	printf("karakter yang diinput adalah: %c %c %c",
	        karakter1, karakter2, karakter3);
	printf("\n\nKode ASCII yang diinput adalah: %d %d %d",
	       karakter1, karakter2, karakter3);
	printf("\n");
	return (0);
}