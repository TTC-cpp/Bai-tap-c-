#include<iostream>
#include<algorithm>

using namespace std;

int *tachmangchan(int  a[], int n);


int main(){
	int a[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(a) / sizeof(a[0]);
	
	int *a1 = tachmangchan(a, size);
	
	cout<"Cac gia tri tai mang chan goc la:";
	for(int i = 0; i < size/2 + (size % 2); i++){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	
	delete []a1;
	
	return 0;
}

int *tachmangchan(int a[], int n){
	int n1 = n / 2 + (n % 2);
	
	int *a1 = new int[n1];
	
	for(int i = 0, j = 0; i < n; i+=2, j++){
		a1[j] = a[i];
	}
	return a1;
}
