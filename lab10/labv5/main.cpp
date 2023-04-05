#include <iostream>
#include <vector>

using namespace std;
void swap(std::vector<std::vector<int>> &tab, int m, int n) {

   vector<int> tmp(3);

   for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {

            tmp[i] = tab[i + 1][j];
            tab[i + 1][j] = tab[i][j];
            tab[i][j] = tmp[i];
        }
    }
}

int main() {
    int m = 3;
    int n = 3;
    std::vector<std::vector<int>> tab = {{10, 20, 30},

                                        {40, 50, 60},

                                        {70, 80, 90}};
   swap(tab, m, n);

    for (int i = 0; i < tab.size(); i++){
        for (int j = 0; j < tab[i].size(); j++){
        cout << tab[i][j] << " ";
    }
    cout << endl;
}
return 0;
}
