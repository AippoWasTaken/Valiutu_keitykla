#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // valiutu kursai

    const double GBP_B = 0.8729, GBP_Pi = 0.8600, GBP_Pa = 0.9220;
    const double USD_B = 1.1793, USD_Pi = 1.1460, USD_Pa = 1.2340;
    const double INR_B = 104.6918, INR_Pi = 101.3862, INR_Pa = 107.8546;

    int pasirinkimas, valiuta;
    double kiekis;

    // pagrindinis pasirinkimu meniu

    cout << "1. Kursu palyginimas\n2. Pirkti valiuta\n3. Parduoti valiuta\nPasrinkite: ";
    cin >> pasirinkimas;

    cout << "pasirinkite valiuta (1_GBP, 2-USD, 3-INR): ";
    cin >> valiuta;

    // Valiutos pasirinkimas

    double kursas = 0;
    if (valiuta == 1) {
        if (pasirinkimas == 1) kursas = GBP_B;
        else if (pasirinkimas == 2) kursas = GBP_Pi;
        else kursas = GBP_Pa;
    } else if (valiuta == 2) {
        if (pasirinkimas == 1) kursas = USD_B;
        else if (pasirinkimas == 2) kursas = USD_Pi;
        else kursas = USD_Pa;
    } else if (valiuta == 3) {
        if (pasirinkimas == 1) kursas = INR_B;
        else if (pasirinkimas == 2) kursas = INR_Pi;
        else kursas = INR_Pa;
    }

    // Galutinis pasirinkimo apskaiciavimas

    if (pasirinkimas == 1) {
        cout << fixed << setprecision(2) << endl;
        cout << "bendras kursas: " << kursas << endl;
    } else {
        cout << "iveskite kieki: ";
        cin >> kiekis;

        double rezultatas;
        if (pasirinkimas == 2) rezultatas = kiekis * kursas;
        else rezultatas = kursas / kiekis;

        cout << fixed << setprecision(2) << endl;
        cout << "rezultatas: " << rezultatas << endl;
    }

    return 0;
}
