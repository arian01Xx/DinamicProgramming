#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {

        //compras barato, vendes caro, restas el fee a cada "dual transactions"

        int cash=0;
        int hold= -prices[0];

        /*
        en negativo el primer elemento para restar los siguientes
        la programacion dinamica se encuentra en esas dos variables
        se actualizan de forma iterativa
        */

        for(int i=0; i<prices.size(); i++){
            int prevCash=cash;
            cash=max(cash, hold+prices[i] - fee);
            hold=max(hold, prevCash - prices[i]);
        }
        return cash;
    }
/*
Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
*/
};

#endif // SOLUTION_HPP