#include <iostream>

using namespace std;
int main (int argc, char** argcl) {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 10) {
            cout << "a is ten";
            cout << endl;
        }
        else {
            cout << "a isn`t ten";
            cout << endl;
        }
        cout << b << endl;
    }    
    return 0;
}
