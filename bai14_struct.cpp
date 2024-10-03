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

int nhap(CoDaT* x){
	cout<<"Nhap nam: ";
	cin>>x->year;
	while(x->year < 0){
		cout<<"Nhap lai: ";
		cin>>x->year;
	}
	cout<<endl;
	
	cout<<"Nhap thang: ";
	cin>>x->month;
	cout<<endl;
	while(x->month < 0 || x->month > 12){
		cout<<"Nhap lai: ";
		cin >>x->month;
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Nhap ngay: ";
	cin>>x->day;
	cout<<endl;
	
	cout<<"Nhap gio: ";
	cin>>x->hour;
	while(x->hour < 0 || x->hour > 23){
		cout<<"Nhap lai: ";
		cin>>x->hour;
		cout<<endl;
	}
	
	cout<<"Nhap phut: ";
	cin>>x->minutes;
	while(x->minutes < 0 || x->minutes > 59){
		cout<<"Nhap lai: "; cin>>x->minutes;
		cout<<endl;
	}
	
	cout<<"Nhap giay: ";
	cin>>x->second;
	while(x->second < 0 || x->second > 59){
		cout<<"Nhap lai: ";
		cin>>x->second;
		cout<<endl;
	}
	
	return x->year, x->month, x->day, x->hour, x->minutes, x->second;
}

void check(CoDaT* a, CoDaT* b){
	if(a->year == b->year ){
		if(a->month == b->month){
			if(a->day == b->day){
				if(a->hour == b->hour){
					if(a->minutes == b->minutes){
						if(a->second == b->second){
							cout<<"Hai thoi diem giong nhau"<<endl;
						}
						else{
							cout<<"Hai thoi diem khac nhau"<<endl;
						}
					}
					else{
						cout<<"Hai thoi diem khac nhau"<<endl;
					}
				}
				else{
					cout<<"Hai thoi diem khac nhau"<<endl;
				}
			}
			else{
				cout<<"Hai thoi diem khac nhau"<<endl;
			}
		}
		else{
			cout<<"Hai thoi diem khac nhau"<<endl;
		}
	}
	else{
		cout<<"Hai thoi diem khac nhau"<<endl;
	}
	cout<<endl;
}

void check1(CoDaT* a, CoDaT* b){
	if(a->year < b->year ){
		if(a->month < b->month){
			if(a->day < b->day){
				if(a->hour < b->hour){
					if(a->minutes < b->minutes){
						if(a->second < b->second){
							cout<<"Thoi gian: "<<a->hour<<":"<<a->minutes<<":"<<a->second<<", "<<a->day<<"/"<<a->month<<"/"<<a->year<<endl;
						}
						else{
							cout<<"Thoi gian som hon: "<<b->hour<<":"<<b->minutes<<":"<<b->second<<", "<<b->day<<"/"<<b->month<<"/"<<b->year<<endl;
						}
					}
					else{
						cout<<"Thoi gian som hon: "<<b->hour<<":"<<b->minutes<<":"<<b->second<<", "<<b->day<<"/"<<b->month<<"/"<<b->year<<endl;
					}
				}
				else{
					cout<<"Thoi gian som hon: "<<b->hour<<":"<<b->minutes<<":"<<b->second<<", "<<b->day<<"/"<<b->month<<"/"<<b->year<<endl;
				}
			}
			else{
				cout<<"Thoi gian som hon: "<<b->hour<<":"<<b->minutes<<":"<<b->second<<", "<<b->day<<"/"<<b->month<<"/"<<b->year<<endl;
			}
		}
		else{
			cout<<"Thoi gian som hon: "<<b->hour<<":"<<b->minutes<<":"<<b->second<<", "<<b->day<<"/"<<b->month<<"/"<<b->year<<endl;
		}
	}
	else{
		cout<<"Thoi gian som hon: "<<b->hour<<":"<<b->minutes<<":"<<b->second<<", "<<b->day<<"/"<<b->month<<"/"<<b->year<<endl;
	}
}

int main(){
	CoDaT first;
	CoDaT second;
	nhap(&first);
	nhap(&second);
	show(first);
	show(second);
	check(&first, &second);
	check1(&first, &second);
return 0;
}



