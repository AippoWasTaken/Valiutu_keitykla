#include <iostream>
using namespace std;

int main() {

    const double GBP_B = 0.8729, GBP_Pi = 0.8600, GBP_Pa = 0.9220;
    const double USD_B = 1.1793, USD_Pi = 1.1460, USD_Pa = 1.2340;
    const double INR_B = 104.6918, INR_Pi = 101.3862, INR_Pa = 107.8546;

    int pasirinkimas, valiuta;

    cout << "1. Kursu palyginimas\n2. Pirkti valiuta\n3. Parduoti valiuta\nPasrinkite: ";
    cin >> pasirinkimas;

    cout << "pasirinkite valiuta (1_GBP, 2-USD, 3-INR): ";
    cin >> valiuta;

    return 0;
}