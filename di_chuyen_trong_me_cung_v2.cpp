#include <iostream>
#include <vector>
#include <string>

using namespace std;

int a[100][100];
int n;
vector<char> path; // S? d?ng vector d? luu tr? hu?ng di

void Try(int i, int j) {
    if (i == n && j == n) {
        //for (char ch : path) {
            cout << ch;
        //}
        cout << endl;
    }
    
    if (i + 1 <= n && a[i + 1][j] == 1) {
        path.push_back('D');
        a[i + 1][j] = 0;
        Try(i + 1, j);
        path.pop_back(); // Lo?i b? hu?ng di sau khi dã th? nghi?m
        a[i + 1][j] = 1;
    }
    
    if (j + 1 <= n && a[i][j + 1] == 1) {
        path.push_back('R');
        a[i][j + 1] = 0;
        Try(i, j + 1);
        path.pop_back(); // Lo?i b? hu?ng di sau khi dã th? nghi?m
        a[i][j + 1] = 1;
    }
}

int main() {
    freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input1.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
        Try(1, 1);
        cout << endl;
    }
    return 0;
}

