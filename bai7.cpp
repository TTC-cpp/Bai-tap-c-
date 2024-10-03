#include<iostream>
using namespace std;

int dem(int *a, int n);

int main(){
	int n;
	int arr[1000];
	cout<<"Nhap so phan tu trong mang: ";
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Phan tu thu "<<i+1<<" la :"<<endl;
		cin>>arr[i];
	}
	int Mode = dem(arr, n);
	cout<<Mode;
return 0;
}

int dem(int *a, int n){
	int c = 0;
	int same[1000];
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n ; j++){
			if(a[i] == a[j]){
				same[c] = a[i];
				c++;
			}
			else{
				c = -1;
			}
		}
	}
	return c;
}
