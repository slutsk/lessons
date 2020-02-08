#include <iostream>
using namespace std;

isBalancedBrackets(string s){
    int balance = 0;
    for(auto c: s)
        if(c=='(')
           balance++;
        else if(c==')')
           balance--;
    return balance == 0;
}

int main(){
    string s;
    cin >> s;
    cout << (isBalancedBrackets(s) ? "YES":"NO");
    return 0;
}
