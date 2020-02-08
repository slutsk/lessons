#include <iostream>
using namespace std;

void print_arr(int arr[],int &n){
   for(int i = 0; i < n; ++i)
      cout << arr[i];
   cout << endl;
}

void rec(int arr[], int index, int &n, int &m){
   if(index == n){
      print_arr(arr, n);
      return;
   }
   for(int i = 1; i <= m; i++){
      arr[index] = i;
      rec(arr, index + 1, n, m);
   }
}

int main(){
    int n, m;
    cin >> n;
    cin >> m;
    int arr[100];
    rec(arr, 0, n, m);
    return 0;
}

