//
// Created by deepak on 28/8/19.
//

/*
Given an array of integers, every element appears thrice except for one which occurs once.
 Find that element which does not appear thrice.
 */


int Solution::singleNumber(const vector<int> &A) {
    int res = 0;
    int n = A.size();
    for (int i = 0; i <= 31; i++) {
        int ones = 0;
        for (int j = 0; j < n; j++) {
            ones += (A[j] & (1 << i))?1: 0;
        }
        if (ones%3 != 0) {
            res |= (1 << i);
        }
    }
    return res;
}
