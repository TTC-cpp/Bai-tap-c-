#include<iostream>

using namespace std;

int *noimang(int arr1[], int arr2[], int size1, int size2);

int main(){
	int arr1[] = {1, 2, 3};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[] = {3, 4, 5};
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	
	int *newarr = noimang(arr1, arr2, size1 ,size2);
	
	cout<"mang sau khi noi: ";
	for(int i = 0; i < size1 + size2; i++){
		cout<<newarr[i]<<" ";
	}
	cout<<endl;
	
	delete []newarr;
	
	return 0;
}

int *noimang(int arr1[], int arr2[], int size1, int size2){
	int size = size1 + size2;
	int *newarr = new int[size];
	for(int i = 0; i < size1; i++){
		newarr[i] = arr1[i];
	}
	for(int i = 0; i < size2; i++){
		newarr[size1 + i] = arr2[i];
	}
	return newarr;
}
