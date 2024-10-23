#include<iostream>
using namespace std;
int main() {
//    opper wala hisa
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

//    us ka bad wala portion mager sath print ho gy
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
