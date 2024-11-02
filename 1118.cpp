#include <bits/stdc++.h>
using namespace std;

int main() {
    int k = 0;         // Count of valid averages calculated
    int c = 0;         // Count of valid grades entered for the current average
    float sum = 0.0;   // Sum of valid grades entered
    float m;           // User input variable
    
    while (true) {
        cin >> m;
        
        // Check if the input is a valid grade
        if (m >= 0 && m <= 10) {
            sum += m;
            c++;
            
            // If two valid grades have been entered, calculate and print the average
            if (c == 2) {
                printf("media = %.2f\n", sum / c);
                c = 0;
                sum = 0;
                
                // Prompt for new calculation
                cout << "novo calculo (1-sim 2-nao)" << endl;
                
                // Handle response to new calculation prompt
                int choice;
                while (true) {
                    cin >> choice;
                    if (choice == 1) {
                        break;   // Start a new calculation
                    } else if (choice == 2) {
                        return 0; // Exit the program
                    } else {
                        cout << "novo calculo (1-sim 2-nao)" << endl;
                    }
                }
            }
        } else {
            cout << "nota invalida" << endl; // Print invalid grade message
        }
    }
    return 0;
}
