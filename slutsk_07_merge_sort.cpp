#include <iostream>
#include <vector>
using namespace std;
void merge_sort(vector<int>& A, int beg, int end) {
    if (beg == end) return;
    int m = (beg + end) / 2;
    merge_sort(A, beg, m);
    merge_sort(A, m + 1, end);
    int ia = beg, ib = m + 1;
    vector <int> tmp;
    while (ia <= m and ib <= end) {
        if (A[ia] < A[ib]) tmp.push_back(A[ia++]);
        else tmp.push_back(A[ib++]);
    }
    for (int i = ia; i <= m; i++) tmp.push_back(A[ia++]);
    for (int i = ib; i <= end; i++) tmp.push_back(A[ib++]);

    for (int i = beg, j = 0; i <= end; i++, j++) {
        A[i] = tmp[j];
    }
}


int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    merge_sort(a, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

}