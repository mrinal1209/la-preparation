//
// Created by deepak on 28/8/19.
//

/*
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai).
'n' vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).

Find two lines, which together with x-axis forms a container, such that the container contains the most water.
 */

int Solution::maxArea(vector<int> &A) {
    int s = 0, e = A.size() - 1;
    int maxArea = 0;
    while (s < e) {
        maxArea = max(maxArea, (e - s) * min(A[s], A[e]));
        if (A[s] < A[e]) {
            s++;
        } else {
            e--;
        }
    }
    return maxArea;
}
