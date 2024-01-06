#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Kh?i t?o bàn c?
  vector<vector<int>> board(8, vector<int>(8));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> board[i][j];
    }
  }

  // Kh?i t?o các m?ng ph?
  vector<vector<int>> b(8, vector<int>(8));
  vector<vector<int>> c(8, vector<int>(8));
  vector<vector<int>> d(8, vector<int>(8));
  vector<vector<int>> p(8, vector<int>(8));

  // L?p trình cho các m?ng ph?
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (board[i][j] == 1) {
        b[i][j] = (i > 0 ? b[i - 1][j] + 1 : 1);
        c[i][j] = (j > 0 ? c[i][j - 1] + 1 : 1);
        d[i][j] = (i > 0 && j > 0 ? d[i - 1][j - 1] + 1 : 1);
        p[i][j] = (i < 7 ? p[i + 1][j + 1] + 1 : 1);
      }
    }
  }

  // Tìm ki?m giá tr? l?n nh?t
  int max_len = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      int len = max(b[i][j], max(c[i][j], max(d[i][j], p[i][j])));
      if (len > max_len) {
        max_len = len;
      }
    }
  }

  // In k?t qu?
  cout << max_len << endl;

  return 0;
}

