#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int start = a * 60 + b;
    int end = c * 60 + d;
    int duration;

    if (end <= start) {
        duration = (24 * 60 - start) + end;
    } else {
        duration = end - start;
    }

    int hours = duration / 60;
    int minutes = duration % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
