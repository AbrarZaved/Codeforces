#include <iostream>
#include <string>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
        std::string grid[8];

        for (int row = 0; row < 8; ++row) {
        std::cin >> grid[row];
    }

    std::string word;
    bool wordFound = false;

    for (int col = 0; col < 8; ++col) {
        word = "";
        for (int row = 0; row < 8; ++row) {
            if (grid[row][col] != '.') {
                word += grid[row][col];
            }
        }

        if (!word.empty()) {
            std::cout << word << std::endl;
            wordFound = true;
            break;
        }
    }
}

  

   
}
