// Insertion sort
#include <iostream>
using namespace std;

void  insertion_sort(int arr[], int n){
   for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j >-1 && key < arr[j] ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }

}
