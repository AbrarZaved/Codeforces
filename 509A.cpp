#include<bits/stdc++.h>
using namespace std;
void generatePattern(int rows, int cols, int arr[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
}


int main() {
    int rows, cols,n;
    cin >> n;

    cols=rows=n;

    int pattern[100][100];
    generatePattern(rows, cols, pattern);
    cout<<pattern[n-1][n-1]<<endl;

    return 0;
}
