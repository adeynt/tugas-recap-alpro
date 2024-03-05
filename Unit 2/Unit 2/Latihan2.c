#include <stdio.h> 
int main() { 
int jmlh, total=0; 
scanf("%d", &jmlh); 
int transaksi [jmlh];
if(jmlh<=0){
    printf("Tidak ada transaksi hari ini");
}
else {
for(int i=0; i<jmlh;i++) { 
    scanf("%d", &transaksi[i]); 
} 
for(int j=0; j<jmlh; j++) { 
    total+=transaksi[j]; 
} 
printf("%d", total);
}
return 0; 
}