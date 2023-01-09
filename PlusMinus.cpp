#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void hesapla(int arr[], int arr_size) {
        int poz = 0, neg = 0, neu = 0;
        int i = 0;
        for (i = 0; i < arr_size; i++) {
        		printf("arr dizisinin %d. terimi : %d",i,arr[i]);
                if (arr[i] > 0) {
                        poz=+1;
                } else if (arr[i] == 0) {
                        neu=+1;
                } else {
                        neg=+1;
                }

        }
		printf("arr_size ise %d \n",arr_size);
        printf("%.3f\n%.3f\n%.3f\n", poz / arr_size, neg / arr_size, neu / arr_size);

}

int main() {
        int arr[]={3,4,5,6,7,8,9,5};
        int j = 0,N=0;
        /*
        printf(" Lutfen kac sayi gireceginizi giriniz: ");
        scanf("%d",&N);
        
        while(j<N){
        	scanf("%d",&arr[j]);
        	j++;
		}
		*/
		        
        int arr_size  = sizeof(arr) / sizeof(arr[0]);
        hesapla(arr, 8);

        return 0;
}
