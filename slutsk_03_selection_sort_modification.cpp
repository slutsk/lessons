#include <random>
#include <ctime>
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
}
int main(){
   srand(time(0));
   int n; cin >> n; //до 100
   int arr[100];
   for(int i = 0; i < n; i++){
      arr[i] = -30 + rand()%60;
   }
   for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
   cout << endl;
   selection_sort(arr, n);
   for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
}
