//
// Created by deepak on 27/8/19.
//

/*
Question:
Repeat and Missing Number Array
You are given a read only array of n integers from 1 to n.  Each integer appears exactly
once except A which appears twice and B which is missing. Return A and B.

Note: Your algorithm should have a linear runtime complexity.
Note that in your output A should precede B.  Example:

Input:[3 1 2 5 3]
Output:[3, 4]
A = 3, B = 4
 */

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int squareSum = 0, sum = 0;
    for (int i=0; i<A.size(); i++) {
        sum += A[i];
        sum -= (i+1);
        squareSum += ((long long int) A[i] * A[i]);
        squareSum -= ((long long int)i+1) * ((long long int)i+1);
    }
    long long int aPlusB = (squareSum / sum);
    long long int a = (int) ((aPlusB + sum)/ 2);
    long long int b = (aPlusB - a);
    return {a, b};
}
