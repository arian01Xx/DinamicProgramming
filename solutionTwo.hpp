#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class SolutionTwo {
public:
    int uniquePaths(int m, int n){
        vector<int> aboveRow(n, 1); // n=3 {1,1,1}
        for(int row=1; row<m; row++){ //recorre filas despues de la posicion del robot
            vector<int> currentRow(n, 1); // m=3 {1,1,1}
            for(int col=1; col<n; col++){  //lo mismo con columnas
                currentRow[col]=currentRow[col-1]+aboveRow[col];
                /*
                se calcula el n° de caminos unicos sumando el valor de la celda
                de la izquierda= currentRow[col-1]
                y el valor de la celda de arriba= aboveRow[col]
                */
            }
            aboveRow=currentRow;
            /*
            1  1  1
            1  2  3
            1  3  6
            */
        }
        return aboveRow[n-1];
    }
};

#endif // SOLUTION_TWO_HPP