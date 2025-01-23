#include <stdio.h>

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    
    // 並べ替え前の配列を表示
    printf("scores = ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    //点数を降順に並び替え
    bubbleSort(scores, SIZE); 

    printf("result = ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;
}