//incompleted
#include <bits/stdc++.h>
#include <cmath>  // For fmod function
using namespace std;

int main() {
    float x;
    cin >> x;
    int hundred=0, fifty=0, twenty=0, ten=0, five=0, two=0;

    // Integer part (notes)
    if (x >= 100) {
        hundred = static_cast<int>(x / 100);
        x = fmod(x, 100);
    }
    if (x >= 50) {
        fifty = static_cast<int>(x / 50);
        x = fmod(x, 50);
    }
    if (x >= 20) {
        twenty = static_cast<int>(x / 20);
        x = fmod(x, 20);
    }
    if (x >= 10) {
        ten = static_cast<int>(x / 10);
        x = fmod(x, 10);
    }
    if (x >= 5) {
        five = static_cast<int>(x / 5);
        x = fmod(x, 5);
    }
    if (x >= 2) {
        two = static_cast<int>(x / 2);
        x = fmod(x, 2);
    }

    cout << "NOTAS:" << endl;
    cout << hundred << " nota(s) de R$ 100.00" << endl;
    cout << fifty << " nota(s) de R$ 50.00" << endl;
    cout << twenty << " nota(s) de R$ 20.00" << endl;
    cout << ten << " nota(s) de R$ 10.00" << endl;
    cout << five << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;

    // Round the remaining value to avoid floating-point precision issues
    x = round(x * 100) / 100;

    // Coin part
    int cone = 0, cfive = 0, ctwofive = 0, cten = 0, czerofive = 0, czeroone = 0;
    if (x >= 1) {
        cone = static_cast<int>(x / 1);
        x = fmod(x, 1);
    }
    if (x >= 0.50) {
        cfive = static_cast<int>(x / 0.50);
        x = fmod(x, 0.50);
    }
    if (x >= 0.25) {
        ctwofive = static_cast<int>(x / 0.25);
        x = fmod(x, 0.25);
    }
    if (x >= 0.10) {
        cten = static_cast<int>(x / 0.10);
        x = fmod(x, 0.10);
    }
    if (x >= 0.05) {
        czerofive = static_cast<int>(x / 0.05);
        x = fmod(x, 0.05);
    }

    x = round(x * 100) / 100;
    czeroone = static_cast<int>(x / 0.01);

    cout << "MOEDAS:" << endl;
    cout << cone << " moeda(s) de R$ 1.00" << endl;
    cout << cfive << " moeda(s) de R$ 0.50" << endl;
    cout << ctwofive << " moeda(s) de R$ 0.25" << endl;
    cout << cten << " moeda(s) de R$ 0.10" << endl;
    cout << czerofive << " moeda(s) de R$ 0.05" << endl;
    cout << czeroone << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
