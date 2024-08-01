#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionFour.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> prices={1,3,2,8,4,9};
	int fee=2;
	int output=solution.maxProfit(prices,fee);
	cout<<"ANSWER FIRST= "<<output<<endl;

	SolutionOne solution1;
	string text1="abcde";
	string text2="ace";
	int outputOne=solution1.longestCommonSubsequence(text1, text2);
	cout<<"ANSWER SECOND= "<<outputOne<<endl;

	SolutionTwo solution2;
	int m=3;
	int n=7;
	int outputSecond=solution2.uniquePaths(m,n);
	cout<<"ANSWER THREE= "<<outputSecond<<endl;

	SolutionThree solution3;
	int nn=3;
	int outputThree=solution3.numTilings(nn);
	cout<<"ANSWER FOUR= "<<outputThree<<endl;

	return 0;
}
