#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double tinh(vector<double> &x);

int main(){
	vector<double> x = {1, 2, 3, 4, 5, 6};
	double median = tinh(x);
	cout<<"Median cua tap du lieu: "<<median<<endl;
	return 0;
}

double tinh(vector<double> &x){
	sort(x.begin(), x.end());
	
	int n = x.size();
	if(n % 2 == 0){
		return (x[n / 2 - 1] + x[n / 2]) / 2;
	}
	else{
		return x[n/2];
	}
}
