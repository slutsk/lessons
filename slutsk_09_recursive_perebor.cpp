#include <iostream>
using namespace std;
int arr[100];
int n; // число элементов
int m; // 1 ... m - перебираемые числа от 1 до m

void print_arr(){
   for(int i = 0; i < n; ++i)
      cout << arr[i];
   cout << endl;
}

void rec(int index){
   if(index == n){
      print_arr();
      return;
   }
   for(int i = 1; i <= m; i++){
      arr[index] = i;
      rec(index + 1);
   }
}

int main(){
    cin >> n;
    cin >> m;
    rec(0);
    return 0;
}

