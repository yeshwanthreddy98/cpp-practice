#include<iostream>
#include<vector>
using namespace std;

long long recursive(vector<vector<int>>& arr, int i, long long dp[])
{
	if (dp[i] != -1)  return dp[i];
	long long take = arr[i][0], notake = 0;
	if (i + arr[i][1] + 1 < arr.size()) take = arr[i][0] + recursive(arr, i + arr[i][1] + 1, dp);
	if (i + 1 < arr.size()) notake = recursive(arr, i + 1, dp);
	return dp[i] = max(take, notake);
}

long long mostPoints(vector<vector<int>>& questions) {
	long long dp[questions.size()];
	memset(dp, -1, sizeof(dp));
	return recursive(questions, 0, dp);
}

int main()
{
	vector<vector<int>> arr{ {3, 2}, {4, 3}, {4, 4}, {2, 5} };
	cout << mostPoints(arr) << endl;
}





