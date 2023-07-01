#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
        int n = matrix[0].size();
        int m = matrix.size();
        vector<int> col(n, 0);
        vector<int> row(m, 0);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    col[j] = 1;
                    row[i] = 1;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (col[j] == 1 || row[i] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }

    }


