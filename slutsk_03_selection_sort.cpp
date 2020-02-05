// Selection sort
#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
   for(int i = 0; i < n - 1; i++){
        int index = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[index])
                index = j;
        swap(arr[i], arr[index]);
    }

}

int main(){
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }

}
