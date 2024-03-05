#include <stdio.h>
int main(){
    int jumlah, total=0;
    scanf("%d", &jumlah);
    int arr[jumlah];
    for(int i=0; i<jumlah; i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<jumlah; j++){
        total+=arr[j];
    }
    printf("%d", total);

    return 0;
}