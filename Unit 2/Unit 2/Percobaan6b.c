#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

/*1. main function mendeklarasikan dan menginisialisasikan i bernilai 2 dan j
2. melakukan looping do-while, looping pertama mencetak
Bilangan utama: 2
3. lalu j diinisialisasikan bernilai 1
4. lalu looping do-while di dalamnya, looping pertama mencetak
Bilangan pengali: 1
  Hasil perkalian: 2

5. j menjadi bernilai 2 dan melakukan looping do-while kedua yang mencetak
Bilangan pengali: 2
  Hasil perkalian: 4

6. do-while j berhenti
7. i menjadi bernilai 3
8. looping do-while i kedua mencetak
Bilangan utama: 3
9. lalu j diinisialisasikan bernilai 1
10. lalu looping do-while di dalamnya, looping pertama mencetak
Bilangan pengali: 1
  Hasil perkalian: 3

11. j menjadi bernilai 2 dan melakukan looping do-while kedua yang mencetak
Bilangan pengali: 2
  Hasil perkalian: 6
12. looping do-while j berhenti
13. looping do-while i berhenti
*/