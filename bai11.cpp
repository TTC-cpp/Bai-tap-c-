#include<iostream>
#include<algorithm>

using namespace std;

int *locmang(int arr[], int size, int x);

int main(){
	int arr[] = {1, 2, 4, 6, 8, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int x = 2;
	
	int *newarr = locmang(arr, size, x);
	
	cout<<"cac boi so cua x la: ";
	for(int i = 0; i < size; i++){
		cout<<newarr[i]<<" ";
	}
	cout<<endl;
	delete []newarr;
	return 0;
}

int *locmang(int arr[], int size, int x){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] % x == 0){
			count++;
		}
	}
	int *newarr = new int[count];
	
	for(int i = 0, j = 0; i < size; i++){
		if(arr[i] % x == 0){
			newarr[j] = arr[i];
			j++;
		}
	}
	return newarr;
}

