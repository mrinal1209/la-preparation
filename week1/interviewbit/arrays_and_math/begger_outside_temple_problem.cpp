//
// Created by deepak on 28/8/19.
//

/*

 Beggars Outside Temple
 There are N (N > 0) beggars sitting in a row outside a temple. Each beggar initially has an empty pot.
 When the devotees come to the temple, they donate some amount of coins to these beggars.
 Each devotee gives a fixed amount of coin(according to his faith and ability) to some K beggars
 sitting next to each other. Given the amount donated by each devotee to the beggars ranging from i to j
 index, where 1 <= i <= j <= N, find out the final amount of money in each beggar's pot at the end of the day,
 provided they don't fill their pots by any other means.

 */

vector<int> Solution::solve(int n, vector<vector<int> > &B) {
    vector<int> beggers(n+1);
    for (const auto &devote: B) {
        beggers[devote[0]-1] += devote[2];
        beggers[devote[1]] -= devote[2];
    }
    long long int sum = 0;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        sum += beggers[i];
        res[i] = sum;
    }
    return res;
}

