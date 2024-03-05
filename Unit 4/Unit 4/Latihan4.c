#include <stdio.h>
void keliling(int s){
    int hasil=4*s;
    printf("%d\n", hasil);
}

void luas(int s){
    int hasil=s*s;
    printf("%d\n", hasil);
}

void volume(int s){
    int hasil=s*s*s;
    printf("%d", hasil);
}

int main(){
    int sisi;
    scanf("%d", &sisi);
    keliling(sisi);
    luas(sisi);
    volume(sisi);
    
    return 0;
}