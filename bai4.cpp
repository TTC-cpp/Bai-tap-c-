#include<iostream>
#include<string>
using namespace std;

void sapxep(int* a, string* b, int c);

int main(){
	int sohocsinh;
	
	cout<<"Nhap so hoc sinh: ";
	cin>>sohocsinh;
	
	string *ten = new string[sohocsinh];
	int *diem = new int[sohocsinh];
	
	for(int i = 0; i < sohocsinh; i++){
		cout<<"Nhap ten hoc sinh: "<<endl;
		cin>>ten[i];
		cout<<"Nhap diem cua hoc sinh: "<<endl;
		cin>>diem[i];
	}
	sapxep(diem, ten, sohocsinh);
	cout<<"danh sach da sap xep: ";
	for(int i = 0; i < sohocsinh; i++){
		cout<<ten[i]<<" "<<diem[i]<<endl;
	}
	delete []ten;
	delete []diem;
	return 0;
}

void sapxep(int *a, string *b, int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(*(a + i) < *(a + j)){
				int d = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = d;
				
				string e = *(b+i);
				*(b+i) = *(b+j);
				*(b+j) = e;
			}
		}
	}
}
