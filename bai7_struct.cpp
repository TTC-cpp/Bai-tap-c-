#include<iostream>
#include<string>

using namespace std;

struct CCon{
	float hz;
	int loi;
	int ram;
	int hardware;
	int point;
	int price;
};

void show(CCon x){
	cout<<"Toc do xung nhip cua bo xu li: "<<x.hz<<endl;
	cout<<"So loi cua CPU: "<<x.loi<<endl;
	cout<<"Dung luong RAM: "<<x.ram<<endl;
	cout<<"Dung luong o cung: "<<x.hardware<<endl;
	cout<<"Diem danh gia hieu suat: "<<x.point<<endl;
	cout<<"Gia cua may tinh: "<<x.price;
}

int main(){
	CCon pc1 = {2.6, 4, 16, 256, 9, 120000000};
	show(pc1);
return 0;
}
