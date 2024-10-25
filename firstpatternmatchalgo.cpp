#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, pattern;
    cin >> text >> pattern;

    int patternLength = pattern.length();
    int textLength = text.length();

    int maxComparisons = textLength - patternLength + 1;
    int comparisonCount = 0;

    for (int i = 0; i < maxComparisons; ++i) {
        bool match = true;

        for (int j = 0; j < patternLength; ++j) {
            comparisonCount++;
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            cout << "Pattern found at index: " << i+1 << endl;
            cout << "Number of comparisons: " << comparisonCount << endl;
            break;
        }
    }

    return 0;
}