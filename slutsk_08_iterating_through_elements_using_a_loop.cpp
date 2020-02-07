// Программа реализующая перебор строк из трёх
// символов 'a', 'b', 'c'
// c тремя вложенными циклами
#include <iostream>
using namespace std;
int main(){
   for (char c1 = 'a'; c1 <= 'c'; c1++)
        for(char c2 = 'a'; c2 <= 'c'; c2++)
            for(char c3 = 'a'; c3 <= 'c'; c3++)
                cout << c1 << c2 << c3 << endl;
}
