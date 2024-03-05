#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

/*1. #define MAX_PERSONS akan menentukan maksimal orang yang akan disimpan
2. #define MAX_NAME_LENGTH akan menentukan maksimal panjang dari nama orang
3. main function mendeklarasikan dan menginisialisasikan array names sebagai array multidimensi dengan ukuran MAX_PERSONS dan MAX_NAME_LENGTH yang isinya ada Roma, Romi, Romo
4. main function mendeklarasikan dan menginisialisasikan array dengan ukuran MAX_PERSONS yang berisi 25, 30, 35
5. mencetak 
Name            Age
--------------------
6. pada looping for i mencetak array names dan array ages sesuai dengan urutannya.
*/