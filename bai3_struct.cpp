#include<iostream>
#include<string>

using namespace std;

struct Movieprofit{
	string moviename;
	string directorname;
	int releaseyears;
	int time_minutes;
	double chiphisansuat;
	double doanhthu;
};

void check(Movieprofit a);
void show(Movieprofit x);

int main(){
	Movieprofit movie1 = {"a", "b", 2024, 180, 100.0, 90.0};
	Movieprofit movie2 = {"a1", "b1", 2024, 150, 90.0, 100.0};
	
	show(movie1);
	show(movie2);
return 0;
}

void show(Movieprofit x){
	cout<<"Ten phim: "<<x.moviename<<endl;
	cout<<"Ten dao dien: "<<x.directorname<<endl;
	cout<<"Nam phat hanh: "<<x.releaseyears<<endl;
	cout<<"Thoi luong cua phim(phut): "<<x.time_minutes<<endl;
	
	double thunhap = 0;
	thunhap = x.doanhthu - x.chiphisansuat;
	if (thunhap > 0){
		cout<<"Loi nhuan la:"<<thunhap<<endl;
	}
	else{
		cout<<"Thua lo la: "<<thunhap<<endl;
	}
}

