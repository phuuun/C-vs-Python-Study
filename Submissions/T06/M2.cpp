#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Masukkan N : ";
    cin >> n;
    
    long long a = 0;
    long long b = 1;
    long long nextTerm = 0;
    long long nilai_ke_n = 0;
    
    cout << "Deret : ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";   
        
        nilai_ke_n = a;    
        
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout << endl;
    
    cout << "Fibonacci ke-" << n << " : " << nilai_ke_n << endl;
    
    return 0;
}
