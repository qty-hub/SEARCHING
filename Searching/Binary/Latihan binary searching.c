#include <stdio.h>

int main(){
	int c, pertama, akhir, tengah, n, cari, data[9999];
	
	printf("Jumlah data yang disimpan: ");
	scanf("%d", &n); 
	
	for(c=0;c<n;c++){
		printf("Masukan integer ke %d: ", c+1);
		scanf("%d", &data[c]);
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
