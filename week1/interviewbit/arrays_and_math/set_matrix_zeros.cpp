//
// Created by deepak on 28/8/19.
//

/* Problem : Set Matrix Zeros
 * Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0.  Do it in place
 */

void setZeroes(vector<vector<int> > &A) {
    int n = A.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n;  j++) {
            if (A[i][j] == 0) {
                A[i][0] = 0;
                A[0][i] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n;  j++) {
            if (A[i][0] == 0 || A[0][i] == 0) {
                A[i][j] = 0;
            }
        }
    }
}

