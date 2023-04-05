#include <iostream>
#include <vector>

using namespace std;
void swap(std::vector<std::vector<int>> &tab, int m, int n) {

   vector<int> tmp(7);

   for (int i = 0; i < m-1; i++) {
        for (int j = 0; j < n; j++) {
        }
    }
}

int main() {
    int m = 4;
    int n = 5;
    std::vector<std::vector<int>> tab = {{0},
                                        {0, 0},
                                        {0, 0, 0},
                                        {0, 0, 0, 0},
                                        {0, 0, 0, 0,0}};


   swap(tab, m, n);

    for (int i = 0; i < tab.size(); i++){
        for (int j = 0; j < tab[i].size(); j++){
        cout << tab[i][j] << " ";
    }
    cout << endl;
}
return 0;
}
