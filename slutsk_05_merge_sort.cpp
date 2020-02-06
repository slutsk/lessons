// Merge Sort
#include <iostream>
using namespace std;
void mergeArray(int A[], int a, int m, int b){
   int *tmp=new int[b - a +1];
   int i = a;
   int j = m+1;
   for (int k = 0; k < b - a + 1; k++)
       if (i == m+1 || j != b+1 && A[j] < A[i]){
           tmp[k] = A[j];
           j++;
       }
       else{
           tmp[k] = A[i];
           i++;
       }

   for (int i = a, j = 0; i <= b; i++,j++)
        A[i] = tmp[j];
   delete tmp;
}
void merge_sort(int A[], int a, int b){

   if ( a >= b) return;
   int m = (a + b)/2;
   merge_sort(A, a, m);
   merge_sort(A, m + 1, b);
   mergeArray(A, a, m, b);
}

int main(){
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    merge_sort(a, 0, n);

    for(int i=0; i < n; i++){
        cout << a[i] << ' ';
    }

}
