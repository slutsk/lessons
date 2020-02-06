//Quick sortR
#include <iostream>
using namespace std;
void quick_sort(int arr[], int start, int finish){
    if(start < finish) {
        int left = start;
        int right = finish;
        int p = arr[(left+right)/2];
        while(left <= right){
            while( arr[left] < p) left++;
            while( arr[right] > p) right--;
            if( left <= right ) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
        quick_sort(arr, start, right);
        quick_sort(arr, left, finish);
    }
}

int main(){
    int arr[100];
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    quick_sort(arr ,0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }

}
