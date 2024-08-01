#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class SolutionOne {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dpGrid(n+1, vector<int>(m+1, 0));
        for(int row=n-1; row>=0; row--){
            for(int col=m-1; col>=0; col--){
                if(text1[row] == text2[col]){ //si la letra es igual
                    dpGrid[row][col]=1+dpGrid[row+1][col+1];
                }else{
                    dpGrid[row][col]=max(dpGrid[row+1][col], dpGrid[row][col+1]);
                }
            }
        }
        return dpGrid[0][0];
    }
/*
Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.
*/
};

#endif // SOLUTION_ONE_HPP