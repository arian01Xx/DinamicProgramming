#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class SolutionThree{
public:
    int mod=1e9+7;
    /*
    Significa módulo 10^9 + 7 para evitar desbordamientos de
    números grandes.
    Se basa en calculos ya almacenados en calculos mas pequeños
    como los tres calculos siguientes.
    */

    int solve(int n, vector<int>& dp){  // (4 , vector(5, -1))
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(n==3){
            return 5;
        }
        if(dp[n] != -1){  //si dp[4] != -1 o sea 1 o 2 o 3, porque ya está almacenado
        	/*
        	Si ya se a calculado previamente, se devuelve ese valor para evitar
        	recalcular.
        	*/
            return dp[n];
        }
        /*
        RECURSIVIDAD=
        (((3, 5)*2)%mod + (1, 5)%mod)%mod ---> 3 y 1 se devuelven segun
        los tres if, de esa forma se usan los calculos almacenados
        Multiplica X 2 porque al agregar una columna adicional al tablero de
        2x(n-1) hay dos posibles formas de acomodar las fichas.

        n=4:
        solve(3, dp)+solve(1,dp)
        10+1=11
        */

        /*
        FORMULA DE RECURRENCIA=
        dp[n] = 2*dp[n-1] + dp[n-3]
        */
        return dp[n]=((solve(n-1,dp)*2)%mod + (solve(n-3, dp))%mod)%mod;
    }
    int numTilings(int n){
        vector<int> dp(n+1, -1); // n=4 ---> {-1,-1,-1,-1,-1}
        return solve(n, dp);
    }
};

#endif // SOLUTION_FOUR_HPP