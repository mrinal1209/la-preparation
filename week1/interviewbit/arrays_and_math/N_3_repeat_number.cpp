//
// Created by deepak on 28/8/19.
//

/*
 * N/3 Repeat Number:
 * You're given a read only array of n integers. Find out if any integer occurs more than n/3 times
 * in the array in linear time and constant additional space.
 */

int Solution::repeatedNumber(const vector<int> &A) {
    if (A.size() == 0) {
        return -1;
    }
    if (A.size() <= 2) return A[0];
    int first = 0;
    int second = 0;
    int c1 = 0, c2 = 0;
    for (auto v : A) {
        if (first == v) {
            c1++;
        } else if (second == v) {
            c2++;
        } else if(c1 == 0) {
            c1 = 1;
            first = v;
        } else if (c2 == 0) {
            c2 = 1;
            second = v;
        } else {
            c1--;
            c2--;
        }
    }
    c1 = 0;
    c2 = 0;
    for (auto v : A) {
        if (v == first) {
            c1++;
        }
        if (v == second) {
            c2++;
        }
    }
    if (c1 > (A.size()/3)) return first;
    if (c2 > (A.size()/3)) return second;
    return -1;
}
