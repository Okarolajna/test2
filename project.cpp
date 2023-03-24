#include <iostream>
using namespace std;

int main() {
    
    int x;

    cout << "Test spradzający, czy liczba jest parzysta, czy nieparzysta. Wprowadz liczbę: " << endl;
    cin >> x;
    

    if (x%2==0)
        cout << "liczba jest parzysta" << endl;
    else
        cout << "liczba nieparzysta" << endl;

    return 0;
}