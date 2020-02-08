// перестановки чисел от 1 до m
#include <iostream>
using namespace std;
int n;
int arr[100];
bool tr_or_f[100] = {false};

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
   for(int i = 1; i <= n; i++){
      if(tr_or_f[i]) continue;
      arr[index] = i;
      tr_or_f[i] = true;
      rec(index + 1);
      tr_or_f[i] = false;
   }
}

int main(){
    cin >> n;
    rec(0);
    return 0;
}

