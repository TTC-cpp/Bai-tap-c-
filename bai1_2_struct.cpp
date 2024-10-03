#include<iostream>
#include<string>

using namespace std;

struct Moviedata{
	string moviename;
	string directorname;
	int releaseyears;
	int time_minutes;
};

void show(Moviedata x);
int main(){
	Moviedata movie1 = {"a", "b", 2024, 180};
	Moviedata movie2 = {"a", "b", 2024, 150};
	
	show(movie1);
	show(movie2);
return 0;
}

void show(Moviedata x){
	cout<<"Ten phim: "<<x.moviename<<endl;
	cout<<"Ten dao dien: "<<x.directorname<<endl;
	cout<<"Nam phat hanh: "<<x.releaseyears<<endl;
	cout<<"Thoi luong cua phim(phut): "<<x.time_minutes<<endl;
}
