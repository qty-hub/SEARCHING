#include <stdio.h>

int main(){
	int i, pertama, akhir, tengah, n, cari, data[9999];
	
	printf("Jumlah data yang disimpan: ");
	scanf("%d", &n); 
	
	for(i=0;i<n;i++){
		printf("Masukan integer ke %d: ", i+1);
		scanf("%d", &data[i]);
	}
	
	printf("Masukan data yang mau dicari: ");
	scanf("%d", &cari);
	
	pertama=0;
	akhir=n-1;
	tengah=(pertama+akhir)/2;
	
	while(pertama<=akhir){
		if(data[tengah]<cari)
			pertama=tengah+1;    
		else if(data[tengah]==cari){
			printf("%d ditemukan di posisi %d.", cari, tengah+1);
			break;
		}else{
			akhir=tengah-1;
		}
		tengah=(pertama+akhir)/2;
	}
	
	if(pertama>akhir){
		printf("Data tidak ditemukan!", cari);
	}
	return 0;  
}
