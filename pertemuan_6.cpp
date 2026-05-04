#include <iostream>
using namespace std;

void pesan (){
    cout << "===== Welcome =====" << endl;
}

int tambah (int a, int b) {
    return a + b;
}

int kali (int a, int b) {
    return a * b;
}

//fungsi overload
int kali (int a, int b, int c) {
    return a * b * c;
}

float kali (float a, float b) {
    return a * b;
}

//fungsi rekursif
long faktorial (long n) {
    if (n == 1) {
        return 1;
    } else {
        return n * faktorial (n - 1);
    }
}

int main () {
    system ("cls");
    int x = 7, y = 3;
    return 0;
}
