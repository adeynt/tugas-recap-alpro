#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

/*looping pertama for i mencetak 
Bilangan utama: 2 
lalu dilanjutkan dengan looping pertama for j yang mencetak 
Bilangan pengali: 1
  Hasil perkalian: 2

looping kedua for j mencetak
Bilangan pengali: 2
  Hasil perkalian: 4

dilanjut dengan looping kedua for i mencetak
Bilangan utama: 3
lalu looping pertama for j mencetak 
Bilangan pengali: 1
  Hasil perkalian: 3
  
looping kedua for j mencetak
Bilangan pengali: 2
  Hasil perkalian: 6

*/