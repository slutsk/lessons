// Посчитать количество и вывести на экран
// всех правильных скобочных последовательностей
// состоящих из n открывающих и n
// закрывающих круглых скобок.
#include <iostream>
using namespace std;
char brackets[]={'(', ')' };
int sum = 0;
int n;
string str(100, ' ');

isBalancedBrackets(string s){
    int balance = 0;
    for(auto c: s){
        if(c=='(')
           balance++;
        else if(c==')')
           balance--;
        if (balance <0) return false;
    }
    return balance == 0;
}

void make_brackets(int index){
   if( index == 2*n){
       sum += (isBalancedBrackets(str) ? 1 : 0);
       if(isBalancedBrackets(str))cout << str << endl;
       return;
   }
   for(int i=0; i < 2; i++){
       str[index] = brackets[i];
       make_brackets( index + 1 );
   }
}

int main(){
    cin >> n;
    make_brackets(0);
    cout << sum;
    return 0;
}
