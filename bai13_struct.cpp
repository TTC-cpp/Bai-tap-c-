#include<iostream>
#include<string>

using namespace std;

struct CoDaT{
	int	year;
	int month;
	int day;
	int hour;
	int minutes;
	int second;
};

void show(CoDaT x){
	cout<<"Nam: "<<x.year<<endl;
	cout<<"Thang: "<<x.month<<endl;
	cout<<"Ngay: "<<x.day<<endl;
	cout<<"Gio: "<<x.hour<<endl;
	cout<<"Phut: "<<x.minutes<<endl;
	cout<<"Giay: "<<x.second;
}

int main(){
	CoDaT first = {2024, 12, 12, 12, 12, 12};
	show(first);
return 0;
}
