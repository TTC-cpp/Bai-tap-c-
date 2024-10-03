#include<iostream>
#include<string>

using namespace std;

struct RoE{
	string name;
	string place;
	int year;
	float strenght;
	int ppdied;
};

void show(RoE x);
void nhap(RoE x);
int main(){
	RoE first;
	RoE second;
	RoE third;
	
	cout<<"Nhap ten cua con bao: ";
	getline(cin, first.name);
	cout<<endl;
	cout<<"Nhap vi tri: ";
	getline(cin, first.place);
	cout<<endl;
	cout<<"Nhap nam dien ra: ";
	cin>>first.year;
	cout<<endl;
	cout<<"Nhap do manh cua con bao: ";
	cin>>first.strenght;
	cout<<endl;
	cout<<"Nhap so nguoi tu vong: ";
	cin>>first.ppdied;
	cout<<endl;
	show(first);
	
	cout<<"Nhap ten cua con bao: ";
	getline(cin, second.name);
	cout<<endl;
	cout<<"Nhap vi tri: ";
	getline(cin, second.place);
	cout<<endl;
	cout<<"Nhap nam dien ra: ";
	cin>>second.year;
	cout<<endl;
	cout<<"Nhap do manh cua con bao: ";
	cin>>second.strenght;
	cout<<endl;
	cout<<"Nhap so nguoi tu vong: ";
	cin>>second.ppdied;
	cout<<endl;
	show(second);
	
	cout<<"Nhap ten cua con bao: ";
	getline(cin, third.name);
	cout<<endl;
	cout<<"Nhap vi tri: ";
	getline(cin, third.place);
	cout<<endl;
	cout<<"Nhap nam dien ra: ";
	cin>>third.year;
	cout<<endl;
	cout<<"Nhap do manh cua con bao: ";
	cin>>third.strenght;
	cout<<endl;
	cout<<"Nhap so nguoi tu vong: ";
	cin>>third.ppdied;
	cout<<endl;
	show(third);
}
void show(RoE x){
	cout<<"Ten con bao la: "<<x.name<<endl;
	cout<<"Vi tri con bao: "<<x.place<<endl;
	cout<<"Nam dien ra: "<<x.year<<endl;
	cout<<"Do lon cua con bao theo do Ritcher: "<<x.strenght<<endl;
	cout<<"So nguoi tu vong: "<<x.ppdied<<endl;
}

