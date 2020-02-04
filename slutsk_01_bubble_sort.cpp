// Сортировка ПУЗЫРЕК
#include <iostream>
using namespace std;
int arr[100];
void bubbleSort(int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - 1 ; j++)
            if(arr[j] > arr[j+1])
                 swap(arr[j], arr[j+1]);
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
    bubbleSort(n);
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }

}
