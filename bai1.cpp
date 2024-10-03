#include<iostream>
using namespace std;

int main(){
	int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int a[100];
	
	cout<<"So byte cua mang chiem dung: "<<sizeof(n)<<endl;
	
	for (int i = 0; i < 10; i++){
		cout<<"Nhap phan tu thu: "<<i+1<<"la :";
		cout<<n[i]<<endl;
		cout<<"Dia chi cua phan tu "<<i+1<<"la : "<<&n[i]<<endl;
	}
	
return 0;
}

