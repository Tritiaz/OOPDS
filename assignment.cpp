#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 80;
    const int n = 50;
    char grid[m][n];

    // Initialize the 2D array with all spaces
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            grid[i][j] = '.';
        }
    }

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate random indices for the row and column of the grid
    int row = rand() % m;
    int col = rand() % n;

    // Place the character 'A' at the randomly generated position
    grid[row][col] = 'A';

    // Print the 2D array to the screen
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
