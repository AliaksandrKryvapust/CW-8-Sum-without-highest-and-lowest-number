#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int sum(const vector<int>& numbers){
	vector<int> temp = numbers;
	sort(temp.begin(), temp.end());
	return (numbers.empty() || numbers.size()==1)? 0 : accumulate(temp.begin()+1, temp.end()-1, 0);
}
int main() {
	vector<int> num = { 1, 1, 11, 2, 3 };
	cout << sum(num) << endl;
	return 0;
}