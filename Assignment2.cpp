#include <iostream>
using namespace std;
int main() {
    int win[6];

    // Nested loops to represent the odometer windows
    for (int i0 = 0; i0 <= 9; i0++) {
        for (int i1 = 0; i1 <= 9; i1++) {
            for (int i2 = 0; i2 <= 9; i2++) {
                for (int i3 = 0; i3 <= 9; i3++) {
                    for (int i4 = 0; i4 <= 9; i4++) {
                        for (int i5 = 0; i5 <= 9; i5++) {
                            
                            // Populate the odometer array
                            win[5] = i5;
                            win[4] = i4;
                            win[3] = i3;
                            win[2] = i2;
                            win[1] = i1;
                            win[0] = i0;

                            // Print the current configuration
                            for (int i = 0; i < 6; i++) {
                                cout << win[i];
                            }
                            cout << " miles" << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}