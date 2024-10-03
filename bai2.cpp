#include<iostream>
using namespace std;

void tangdan(int &a, int &b);

int main(){
	int n;
	int arr[1000];
	double sum = 0;
	
	cout<<"Nhap so luong mang: ";
	cin>>n;
	
	int *ptr = new int[n];
	for(int i = 0; i < n; i++){
		cout<<"Nhap cac cot diem "<<i+1<<" : "<<endl;
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	cout<<"Diem trung binh cua cac mon la: "<<sum/n<<endl;
	int c = 0;
	for (int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++ ){
			if(arr[i] > arr[j]){
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	cout<<"Diem da sap xep: ";
	for (int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete []ptr;
	return 0;
}

