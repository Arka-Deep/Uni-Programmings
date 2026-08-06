#include <stdio.h>
#include <stdlib.h>
#define MAX 5


int arr[MAX];

void generate(){
    
    srand(6969);
    for(int i=0;i<MAX;i++){
        arr[i]=rand()%101;
    }
}

void bubbleSort(){
    for(int i=0;i<MAX-1;i++){
        for(int j=0;j<MAX-1-i;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void insersionSort(){
     for (int i = 1; i < MAX;i++) {
        int key = arr[i];
        int j = i -1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void insersionSort2(){
   for (int i=0;i<MAX;i++){
    int j=i;
    while(j>0&&arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
   }
}

void selectionSort(){
    for(int i=0;i<MAX-1;i++){
        int min_idx=i;
        for(int j=i+1;j<MAX;j++){
            min_idx=arr[j]<arr[min_idx]?j:min_idx;
        }
        //swap
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
}

void printArr(){
    for(int i=0;i<MAX;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){

    generate();
    printf("Un-Sorted Arrray:\n");
    printArr();

    bubbleSort();
    printf("Bubble Sort:\n");
    printArr();

    generate();    
    selectionSort();
    printf("Selection Sort\n");
    printArr();

    generate();    
    insersionSort2();
    printf("Insersion Sort\n");
    printArr();


    

}