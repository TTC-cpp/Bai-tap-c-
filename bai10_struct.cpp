#include<iostream>
#include<string>

using namespace std;

struct Sb{
	string	name;
	string sodienthoai;
	string header;
	double price ;
};

void show(Sb x);
void nhap(Sb &x);

int main(){
	Sb so1 = {"Tai", "0809", "a", 1000};
	show(so1);
return 0;
}

void show(Sb x){
	cout<<"Ten dien gia: "<<x.name<<endl;
	cout<<"So dien thoai: "<<x.sodienthoai<<endl;
	cout<<"Chu de: "<<x.header<<endl;
	cout<<"Phi dien thuyet: "<<x.price<<endl;
}

void nhap(Sb &x){
	cout << "Nhap ten tac gia: ";
  	getline(cin, x.name);

  	cout << "Nhap so dien thoai: ";
  	getline(cin, x.sodienthoai);

  	cout << "Nhap chu de cua tac gia: ";
  	getline(cin, x.header);
  	
  	cout<<"Nhap phi dien thuyet: ";
  	cin>>x.price;
  	while(x.price < 0){
  		cout<<"Nhap lai: ";
	  }
}
