#include<iostream>
#include<string>

using namespace std;

struct ps{
	string	author;
	string quote;
	int likes;
};

void show(ps x);

int main(){
	ps first = {"a", "old but gold", 100000};
	show(first);
return 0;
}

void show(ps x){
	cout<<"Ten tac gia la: "<<x.author<<endl;
	cout<<"Cau trich dan la: "<<x.quote<<endl;
	cout<<"So luot thich la: "<<x.likes<<endl;
}
