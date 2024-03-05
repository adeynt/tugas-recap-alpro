#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

/*1. main function mendeklarasikan dan menginisialisasi i bernilai 2 dan j bernilai 1
2. Melakukan looping while selama i bernilai kurang dari sama dengan 3
3. looping pertama while i mencetak
Bilangan utama: 2
4. Dilanjut dengan looping pertama j yang mencetak
Bilangan pengali: 1
  Hasil perkalian: 2

5. looping kedua j mencetak
Bilangan pengali: 2
  Hasil perkalian: 4

looping while j berhenti
6. Looping kedua while i mencetak
Bilangan utama: 3
7. Looping pertama j mencetak
Bilangan pengali: 1
  Hasil perkalian: 3

8. looping kedua j mencetak
Bilangan pengali: 2
  Hasil perkalian: 6

looping while j berhenti
9. lalu looping while i berhenti
  */