#include<iostream>
using namespace std;

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
	for(int i = 0; i < 2; i++){
		for(int i = 0; i < n; i++){
			arr[i] = arr[i+1];
		}
		--n;
	}
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	cout<<"Diem trung binh da loai 2 so nho nhat: "<<sum / n<<endl;
	cout<<"Diem da sap xep: ";
	for (int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete []ptr;
	return 0;
}

