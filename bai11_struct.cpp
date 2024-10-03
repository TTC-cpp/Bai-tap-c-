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
	const int soluongmax = 10;
	Sb danhsach[soluongmax];
	int soluong = 0;
	int yeucau;
	
	cout<<"Lua chon: "<<endl;
	cout<<"1. them dien gia: "<<endl;
	cout<<"2. thay doi thong tin dien gia: "<<endl;
	cout<<"3. hien thi danh sach dien gia: "<<endl;
	cout<<"4. ket thuc"<<endl;
	cout<<"Nhap yeu cau: ";
	cin>>yeucau;
	
	switch (yeucau){
		case 1:
			if(soluong < soluongmax){
				nhap(danhsach[soluong]);
				soluong++;
			}
			else{
				cout<<"Danh sach da day";
			}
			break;
		int vitri;
		case 2:
			cout<<"Nhap so cua tac gia can thay doi(thu tu 0- "<<soluong - 1<<"): ";
			cin>>vitri;
			cin.ignore();
			if (vitri >= 0 && vitri < soluong){
				nhap(danhsach[vitri]);
			}
			else{
				cout<<"Nhap sai";
			}
			break;
		case 3:
			if (soluong == 0){
				cout<<"danh sach trong"<<endl;
			}
			else{
				for(int i = 0; i < soluong; i++){
					cout<<"dien gia thu "<< i+1 <<": "<<endl;
					show(danhsach[i]);
				}
			}
		case 4:
			cout<<"Thoat chuong trinh."<<endl;
			break;
		}
	
	
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
  	cout<<endl;

  	cout << "Nhap so dien thoai: ";
  	getline(cin, x.sodienthoai);
  	cout<<endl;

  	cout << "Nhap chu de cua tac gia: ";
  	getline(cin, x.header);
  	
  	cout<<"Nhap phi dien thuyet: ";
  	cin>>x.price;
  	while(x.price < 0){
  		cout<<"Nhap lai: ";
	  }
}
