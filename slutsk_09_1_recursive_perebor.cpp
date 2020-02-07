// рекурсивный перебор n чисел 
// от 1 до m
#include <iostream>
using namespace std;

void print_arr(){
   for(int i = 0; i < n; ++i)
      cout << arr[i];
   cout << endl;
}

void rec(int  index, int &n, int &m){
   if(index == n){
      print_arr();
      return;
   }
   for(int i = 1; i <= m; i++){
      arr[index] = i;
      rec(index + 1, n, m);
   }
}

int main(){
    int n, m;
    cin >> n;
    cin >> m;
    int arr[100];
    rec(0, n, m);
    return 0;
}

