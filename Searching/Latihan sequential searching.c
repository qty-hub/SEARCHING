#include <stdio.h>

int main(){
	int data[9999], cari, i, n;

	printf("Mau ada berapa data yang disimpan?\n");
	scanf("%d", &n);

	printf("Masukan %d integer(s)\n", n);

	for (i=0;i<n;i++)
		scanf("%d", &data[i]);

	printf("Data apa yang akan dicari?\n");
	scanf("%d", &cari);

	for(i=0;i<n;i++){
		if(data[i]==cari){
			printf("%d ditemukan. Ada di posisi %d.\n", cari, i+1);
			break;
		}
	}
	if(i==n){
		printf("%d tidak ditemukan.\n", cari);
	}
	return 0;
}
